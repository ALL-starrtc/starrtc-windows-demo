#pragma once
#include "CUserManager.h"

// CCreateLiveDialog 对话框

class CCreateLiveDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CCreateLiveDialog)

public:
	CCreateLiveDialog(CUserManager* pUserManager, CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CCreateLiveDialog();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_CREATE_LIVE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_liveNameEdit;
	CButton m_publicCheckBox;
	CUserManager* m_pUserManager;
	afx_msg void OnBnClickedButtonCreateLive();
	CString m_strLiveName;
	bool m_bPublic;
};
