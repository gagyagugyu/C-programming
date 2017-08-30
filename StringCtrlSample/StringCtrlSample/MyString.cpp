#include "stdafx.h"
#include "MyString.h"


CMyString::CMyString()
	: m_pszData(NULL)
	, m_nLength(0)
{
}


CMyString::~CMyString()
{
}





int CMyString::SetString(const char* pszParam)
{
	Release();
	if (pszParam == NULL) {
		return 0;
	}
	m_nLength = strlen(pszParam);
	if (m_nLength == 0)
		return 0;

	m_pszData = new char[m_nLength + 1];
	strcpy(m_pszData, pszParam);

	
	return m_nLength;
}


const char* CMyString::GetString() const
{
	return m_pszData;
}


void CMyString::Release()
{
	if(m_pszData!=NULL)
		delete[] m_pszData;
	m_nLength = 0;
	m_pszData = NULL;

}
