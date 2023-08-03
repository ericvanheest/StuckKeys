#include "StdAfx.h"
#include "Keys.h"
#include "VirtualKeys.h"

CKeys::CKeys(void)
{
    InitArgs();
}

CKeys::~CKeys(void)
{
}

void CKeys::InitArgs()
{
    m_bValid = false;
    m_bDisplayHelp = false;
    m_bShowDownKeys = true;
    m_bShowUpKeys = false;
    m_bUnstickKeys = true;
}

bool CKeys::IsValid()
{
    return m_bValid;
}

int CKeys::ParseArgs(int argc, _TCHAR* argv[])
{
    InitArgs();

    int iArg = 1;
    int iChar;

    m_bValid = true;

    if (argc < 2)
        return iArg;

    while (argv[iArg][0] == '-')
    {
        iChar = 1;
        while (argv[iArg][iChar] != '\0')
        {
            switch(argv[iArg][iChar])
            {
                case 'h':
                case 'H':
                case '?':
                    m_bDisplayHelp = true;
                    break;
                case 'u':
                case 'U':
                    m_bShowUpKeys = true;
                    break;
                case 'd':
                case 'D':
                    m_bShowDownKeys = false;
                    break;
                case 's':
                case 'S':
                    m_bUnstickKeys = false;
                    break;
/*
                case 'i':
                case 'I':
                    if (iArg < argc - 1)
                    {
                        GetDialogIDs(argv[iArg+1]);
                        iArg++;
                        iChar = strlen(argv[iArg]) - 1;
                    }
                    break;
				case 's':
				case 'S':
                    if (iArg < argc - 1)
                    {
                        g_bMatchClass = TRUE;
                        strcpy_s(g_szMatchClass, MAX_PATH, argv[iArg+1]);
                        iArg++;
                        iChar = strlen(argv[iArg]) - 1;
                    }
					break;
				case 'n':
				case 'N':
                    if (iArg < argc - 1)
                    {
					    g_bRenameWindow = TRUE;
                        strcpy_s(g_szRename, MAX_PATH, argv[iArg+1]);
                        iArg++;
                        iChar = strlen(argv[iArg]) - 1;
                    }
					break;
                case '-':
                    ParseFullCommand(&argv[iArg][iChar+1]);
                    iChar = strlen(argv[iArg]) - 1;
                    break;
*/
                default:
                    _ftprintf(stderr, _T("Warning:  Ignoring invalid option \"-%c\"\n"), argv[iArg][iChar]);
            }
            iChar++;
        }
        iArg++;
        if (iArg >= argc)
            break;
    }

    return iArg;
}

void CKeys::Go()
{
    SHORT KeyStates[NUM_VKEYS];
    INPUT input;

    input.type = INPUT_KEYBOARD;
    input.ki.time = 0;
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    input.ki.dwExtraInfo = 0;

    for(int iKey = 0; iKey < NUM_VKEYS; iKey++)
    {
        KeyStates[iKey] = GetAsyncKeyState(iKey);
    }

    if (m_bShowDownKeys)
    {
        if (m_bUnstickKeys)
            _tprintf(_T("Unsticking: "));
        else
            _tprintf(_T("Down: "));

        for(int iKey = 0; iKey < NUM_VKEYS; iKey++)
        {
            if (KeyStates[iKey] & 0x8000)
            {
                _tprintf(_T("%s "), VirtualKeys[iKey].c_str());
                if (m_bUnstickKeys)
                {
                    input.ki.wVk = iKey;
                    SendInput(1, &input, sizeof(input));
                }
            }
        }
        _tprintf(_T("\n"));
    }

    if (m_bShowUpKeys)
    {
        _tprintf(_T("Up: "));
        for(int iKey = 0; iKey < NUM_VKEYS; iKey++)
        {
            if (!(KeyStates[iKey] & 0x8000))
            {
                _tprintf(_T("%s "), VirtualKeys[iKey].c_str());
            }
        }
        _tprintf(_T("\n"));
    }
}

