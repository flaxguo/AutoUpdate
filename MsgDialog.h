#pragma once


// CMsgDialog 对话框

class CMsgDialog : public CDialog
{
	DECLARE_DYNAMIC(CMsgDialog)

public:
	CMsgDialog(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CMsgDialog();

// 对话框数据
	enum { IDD = IDD_AUTOUPDATE_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};
