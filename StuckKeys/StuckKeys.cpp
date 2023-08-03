// StuckKeys.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Keys.h"
#include "VirtualKeys.h"

void Usage(int argc, _TCHAR* argv[])
{
    _tprintf(_T("\
\
StuckKeys, version 1.00\n\
\n\
Usage:   %s [-uds]\n\
\n\
Options: -u   Display unpressed keys\n\
         -d   Do not display pressed keys\n\
         -s   Do not unstick keys\n\
\n\
The default behavior is to display any stuck keys and reset them.\n\
"), argv[0]);
}

int _tmain(int argc, _TCHAR* argv[])
{
    CKeys keys;

    keys.ParseArgs(argc, argv);

    if (!keys.IsValid() || keys.m_bDisplayHelp)
    {
        Usage(argc, argv);
        return 0;
    }

    InitVK();

    keys.Go();

	return 0;
}

