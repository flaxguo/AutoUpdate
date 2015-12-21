// MsgDialog.cpp : 实现文件
//

#include "stdafx.h"
#include "AutoUpdate.h"
#include "MsgDialog.h"
#include ".\msgdialog.h"


// CMsgDialog 对话框

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
	// TODO: 在此处添加消息处理程序代码
	// 不为绘图消息调用 CDialog::OnPaint()
}

BOOL CMsgDialog::OnEraseBkgnd(CDC* pDC)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	return TRUE;
	//return CDialog::OnEraseBkgnd(pDC);
}
