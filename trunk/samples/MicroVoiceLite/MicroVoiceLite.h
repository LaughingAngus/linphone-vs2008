
// MicroVoiceLite.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMicroVoiceLiteApp:
// �йش����ʵ�֣������ MicroVoiceLite.cpp
//

class CMicroVoiceLiteApp : public CWinAppEx
{
public:
	CMicroVoiceLiteApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMicroVoiceLiteApp theApp;