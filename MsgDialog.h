#pragma once


// CMsgDialog �Ի���

class CMsgDialog : public CDialog
{
	DECLARE_DYNAMIC(CMsgDialog)

public:
	CMsgDialog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CMsgDialog();

// �Ի�������
	enum { IDD = IDD_AUTOUPDATE_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};
