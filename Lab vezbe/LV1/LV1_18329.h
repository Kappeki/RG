
// LV1_18329.h : main header file for the LV1_18329 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CLV118329App:
// See LV1_18329.cpp for the implementation of this class
//

class CLV118329App : public CWinApp
{
public:
	CLV118329App() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CLV118329App theApp;
