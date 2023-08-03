#pragma once
#include "VirtualKeys.h"

class CKeys
{
public:
    CKeys(void);
    ~CKeys(void);

    void InitArgs();
    int ParseArgs(int argc, _TCHAR* argv[]);
    void Go();

    bool IsValid();

    bool m_bValid;
    bool m_bDisplayHelp;
    bool m_bShowDownKeys;
    bool m_bShowUpKeys;
    bool m_bUnstickKeys;
};
