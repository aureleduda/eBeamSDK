#pragma once


// CCalibrationDlg ��ȭ �����Դϴ�.

class CCalibrationDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCalibrationDlg)

public:
	CCalibrationDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CCalibrationDlg();
	int m_SensorPosition;
// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CALIBRATION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedRadio4();
	virtual BOOL OnInitDialog();
};
