// MsgDialog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "AutoUpdate.h"
#include "MsgDialog.h"
#include ".\msgdialog.h"


// CMsgDialog �Ի���

IMPLEMENT_DYNAMIC(CMsgDialog, CDialog)
CMsgDialog::CMsgDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CMsgDialog::IDD, pParent)
{
}

CMsgDialog::~CMsgDialog()
{
}

void CMsgDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMsgDialog, CDialog)
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
END_MESSAGE_MAP()
void CMsgDialog::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	// TODO: �ڴ˴������Ϣ����������
	// ��Ϊ��ͼ��Ϣ���� CDialog::OnPaint()
}

BOOL CMsgDialog::OnEraseBkgnd(CDC* pDC)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	return TRUE;
	//return CDialog::OnEraseBkgnd(pDC);
}
