
// eBeamSDKMFC.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CeBeamSDKMFCApp:
// �� Ŭ������ ������ ���ؼ��� eBeamSDKMFC.cpp�� �����Ͻʽÿ�.
//

class CeBeamSDKMFCApp : public CWinApp
{
public:
	CeBeamSDKMFCApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
	virtual int ExitInstance();
};

extern CeBeamSDKMFCApp theApp;