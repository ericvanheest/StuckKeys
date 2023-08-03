// WM.cpp: takes forever to compile; change infrequently!

#include "stdafx.h"
#include "VirtualKeys.h"

std::wstring VirtualKeys[NUM_VKEYS];

void InitVK()
{
    TCHAR sz[16];

    for(int i = 0; i < NUM_VKEYS; i++)
    {
        _stprintf_s(sz, 16, _T("0x%2.2x"), i);
        VirtualKeys[i] = sz;
    }

    for(char i = '0'; i <= '9'; i++)
    {
        _stprintf_s(sz, 16, _T("%c"), (TCHAR) i);
        VirtualKeys[i] = sz;
    }

    for(char i = 'A'; i <= 'Z'; i++)
    {
        _stprintf_s(sz, 16, _T("%c"), (TCHAR) i);
        VirtualKeys[i] = sz;
    }

    VirtualKeys[VK_ACCEPT] = SZ_VK_ACCEPT;
    VirtualKeys[VK_ADD] = SZ_VK_ADD;
    VirtualKeys[VK_APPS] = SZ_VK_APPS;
    VirtualKeys[VK_ATTN] = SZ_VK_ATTN;
    VirtualKeys[VK_BACK] = SZ_VK_BACK;
    VirtualKeys[VK_CANCEL] = SZ_VK_CANCEL;
    VirtualKeys[VK_CAPITAL] = SZ_VK_CAPITAL;
    VirtualKeys[VK_CLEAR] = SZ_VK_CLEAR;
    VirtualKeys[VK_CONTROL] = SZ_VK_CONTROL;
    VirtualKeys[VK_CONVERT] = SZ_VK_CONVERT;
    VirtualKeys[VK_CRSEL] = SZ_VK_CRSEL;
    VirtualKeys[VK_DECIMAL] = SZ_VK_DECIMAL;
    VirtualKeys[VK_DELETE] = SZ_VK_DELETE;
    VirtualKeys[VK_DIVIDE] = SZ_VK_DIVIDE;
    VirtualKeys[VK_DOWN] = SZ_VK_DOWN;
    VirtualKeys[VK_END] = SZ_VK_END;
    VirtualKeys[VK_EREOF] = SZ_VK_EREOF;
    VirtualKeys[VK_ESCAPE] = SZ_VK_ESCAPE;
    VirtualKeys[VK_EXECUTE] = SZ_VK_EXECUTE;
    VirtualKeys[VK_EXSEL] = SZ_VK_EXSEL;
    VirtualKeys[VK_F1] = SZ_VK_F1;
    VirtualKeys[VK_F10] = SZ_VK_F10;
    VirtualKeys[VK_F11] = SZ_VK_F11;
    VirtualKeys[VK_F12] = SZ_VK_F12;
    VirtualKeys[VK_F13] = SZ_VK_F13;
    VirtualKeys[VK_F14] = SZ_VK_F14;
    VirtualKeys[VK_F15] = SZ_VK_F15;
    VirtualKeys[VK_F16] = SZ_VK_F16;
    VirtualKeys[VK_F17] = SZ_VK_F17;
    VirtualKeys[VK_F18] = SZ_VK_F18;
    VirtualKeys[VK_F19] = SZ_VK_F19;
    VirtualKeys[VK_F2] = SZ_VK_F2;
    VirtualKeys[VK_F20] = SZ_VK_F20;
    VirtualKeys[VK_F21] = SZ_VK_F21;
    VirtualKeys[VK_F22] = SZ_VK_F22;
    VirtualKeys[VK_F23] = SZ_VK_F23;
    VirtualKeys[VK_F24] = SZ_VK_F24;
    VirtualKeys[VK_F3] = SZ_VK_F3;
    VirtualKeys[VK_F4] = SZ_VK_F4;
    VirtualKeys[VK_F5] = SZ_VK_F5;
    VirtualKeys[VK_F6] = SZ_VK_F6;
    VirtualKeys[VK_F7] = SZ_VK_F7;
    VirtualKeys[VK_F8] = SZ_VK_F8;
    VirtualKeys[VK_F9] = SZ_VK_F9;
    VirtualKeys[VK_FINAL] = SZ_VK_FINAL;
    VirtualKeys[VK_HANGEUL] = SZ_VK_HANGEUL;
    VirtualKeys[VK_HANGUL] = SZ_VK_HANGUL;
    VirtualKeys[VK_HANJA] = SZ_VK_HANJA;
    VirtualKeys[VK_HELP] = SZ_VK_HELP;
    VirtualKeys[VK_HOME] = SZ_VK_HOME;
    VirtualKeys[VK_INSERT] = SZ_VK_INSERT;
    VirtualKeys[VK_JUNJA] = SZ_VK_JUNJA;
    VirtualKeys[VK_KANA] = SZ_VK_KANA;
    VirtualKeys[VK_KANJI] = SZ_VK_KANJI;
    VirtualKeys[VK_LBUTTON] = SZ_VK_LBUTTON;
    VirtualKeys[VK_LCONTROL] = SZ_VK_LCONTROL;
    VirtualKeys[VK_LEFT] = SZ_VK_LEFT;
    VirtualKeys[VK_LMENU] = SZ_VK_LMENU;
    VirtualKeys[VK_LSHIFT] = SZ_VK_LSHIFT;
    VirtualKeys[VK_LWIN] = SZ_VK_LWIN;
    VirtualKeys[VK_MBUTTON] = SZ_VK_MBUTTON;
    VirtualKeys[VK_MENU] = SZ_VK_MENU;
    VirtualKeys[VK_MODECHANGE] = SZ_VK_MODECHANGE;
    VirtualKeys[VK_MULTIPLY] = SZ_VK_MULTIPLY;
    VirtualKeys[VK_NEXT] = SZ_VK_NEXT;
    VirtualKeys[VK_NONAME] = SZ_VK_NONAME;
    VirtualKeys[VK_NONCONVERT] = SZ_VK_NONCONVERT;
    VirtualKeys[VK_NUMLOCK] = SZ_VK_NUMLOCK;
    VirtualKeys[VK_NUMPAD0] = SZ_VK_NUMPAD0;
    VirtualKeys[VK_NUMPAD1] = SZ_VK_NUMPAD1;
    VirtualKeys[VK_NUMPAD2] = SZ_VK_NUMPAD2;
    VirtualKeys[VK_NUMPAD3] = SZ_VK_NUMPAD3;
    VirtualKeys[VK_NUMPAD4] = SZ_VK_NUMPAD4;
    VirtualKeys[VK_NUMPAD5] = SZ_VK_NUMPAD5;
    VirtualKeys[VK_NUMPAD6] = SZ_VK_NUMPAD6;
    VirtualKeys[VK_NUMPAD7] = SZ_VK_NUMPAD7;
    VirtualKeys[VK_NUMPAD8] = SZ_VK_NUMPAD8;
    VirtualKeys[VK_NUMPAD9] = SZ_VK_NUMPAD9;
    VirtualKeys[VK_OEM_CLEAR] = SZ_VK_OEM_CLEAR;
    VirtualKeys[VK_PA1] = SZ_VK_PA1;
    VirtualKeys[VK_PAUSE] = SZ_VK_PAUSE;
    VirtualKeys[VK_PLAY] = SZ_VK_PLAY;
    VirtualKeys[VK_PRINT] = SZ_VK_PRINT;
    VirtualKeys[VK_PRIOR] = SZ_VK_PRIOR;
    VirtualKeys[VK_PROCESSKEY] = SZ_VK_PROCESSKEY;
    VirtualKeys[VK_RBUTTON] = SZ_VK_RBUTTON;
    VirtualKeys[VK_RCONTROL] = SZ_VK_RCONTROL;
    VirtualKeys[VK_RETURN] = SZ_VK_RETURN;
    VirtualKeys[VK_RIGHT] = SZ_VK_RIGHT;
    VirtualKeys[VK_RMENU] = SZ_VK_RMENU;
    VirtualKeys[VK_RSHIFT] = SZ_VK_RSHIFT;
    VirtualKeys[VK_RWIN] = SZ_VK_RWIN;
    VirtualKeys[VK_SCROLL] = SZ_VK_SCROLL;
    VirtualKeys[VK_SELECT] = SZ_VK_SELECT;
    VirtualKeys[VK_SEPARATOR] = SZ_VK_SEPARATOR;
    VirtualKeys[VK_SHIFT] = SZ_VK_SHIFT;
    VirtualKeys[VK_SNAPSHOT] = SZ_VK_SNAPSHOT;
    VirtualKeys[VK_SPACE] = SZ_VK_SPACE;
    VirtualKeys[VK_SUBTRACT] = SZ_VK_SUBTRACT;
    VirtualKeys[VK_TAB] = SZ_VK_TAB;
    VirtualKeys[VK_UP] = SZ_VK_UP;
    VirtualKeys[VK_ZOOM] = SZ_VK_ZOOM;
}

