// Day 1.h : main header file for the DAY 1 application
//

#if !defined(AFX_DAY1_H__40ABDFDA_D3BB_4A7E_A830_4ADFEE0BBFCA__INCLUDED_)
#define AFX_DAY1_H__40ABDFDA_D3BB_4A7E_A830_4ADFEE0BBFCA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDay1App:
// See Day 1.cpp for the implementation of this class
//

class CDay1App : public CWinApp
{
public:
	CDay1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDay1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDay1App)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DAY1_H__40ABDFDA_D3BB_4A7E_A830_4ADFEE0BBFCA__INCLUDED_)
