
// eBeamSDKMFCDlg.h : ��� ����
//

#pragma once


// CeBeamSDKMFCDlg ��ȭ ����
class Caliration2Dlg;
class CeBeamSDKMFCDlg : public CDialogEx
{
// �����Դϴ�.
public:
	CeBeamSDKMFCDlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.
// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_EBEAMSDKMFC_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.

private:
	BOOL	bDraw ;
	Gdiplus::Point  ptOld;
	Gdiplus::Point  ptNew;
	int		ColorCode;
	BOOL	bClicked;

// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnListen();
	LRESULT OnMsgEbeamPenData(WPARAM wParam, LPARAM lParam);
	LRESULT OnMsgEbeamDeviceStatus(WPARAM wParam, LPARAM lParam);
	afx_msg void OnBnClickedChkDraw();
	int DrawStrokeFrame(void);
	afx_msg void OnBnClickedBtnCalibration2();
	afx_msg void OnBnClickedBtnClear();
};
