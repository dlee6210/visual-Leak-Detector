// CLeak_Test.cpp : CCLeak_Test ��ʵ��

#include "stdafx.h"
#include "CLeak_Test.h"


// CCLeak_Test



STDMETHODIMP CCLeak_Test::Test_Leak(void)
{
	// TODO: �ڴ����ʵ�ִ���
	char *buf = new char[1024];

	return S_OK;
}
