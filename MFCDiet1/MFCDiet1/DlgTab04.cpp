// DlgTab04.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "MFCDiet1.h"
#include "DlgTab04.h"
#include "afxdialogex.h"


// CDlgTab04 ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(CDlgTab04, CDialogEx)

CDlgTab04::CDlgTab04(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TAB4, pParent)
{

}

CDlgTab04::~CDlgTab04()
{
}

void CDlgTab04::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, m_List4);
}


BEGIN_MESSAGE_MAP(CDlgTab04, CDialogEx)
END_MESSAGE_MAP()


// CDlgTab04 �޽��� ó�����Դϴ�.