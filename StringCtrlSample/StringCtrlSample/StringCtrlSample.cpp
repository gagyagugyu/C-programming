// StringCtrlSample.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "MyString.h"
void TestFunc(const CMyString &param) {
	cout << param.GetString() << endl;
}
int main()
{
	CMyString strData;
	strData.SetString("Hello");
	TestFunc(strData);
	cout << strData.GetString() << endl;

    return 0;
}

