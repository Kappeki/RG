
// LV2_18329.h : main header file for the LV2_18329 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CLV218329App:
// See LV2_18329.cpp for the implementation of this class
//

class CLV218329App : public CWinApp
{
public:
	CLV218329App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CLV218329App theApp;
