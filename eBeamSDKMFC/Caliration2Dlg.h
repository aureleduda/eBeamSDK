#pragma once


// Caliration2Dlg ��ȭ �����Դϴ�.

class Caliration2Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Caliration2Dlg)

public:
	Caliration2Dlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~Caliration2Dlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_CALIBRATION_2 };
	int m_nSensorPosition;
	int m_nCalProcess;
	double m_CalTLX;
	double m_CalTLY;
	double m_CalBRX;
	double m_CalBRY;


protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	int ShowGuidePosition(void);
	afx_msg void OnBnClickedOk();
	LRESULT OnMsgEbeamPenData(WPARAM wParam, LPARAM lParam);
};
