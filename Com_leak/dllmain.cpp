// dllmain.cpp : DllMain ��ʵ�֡�

#include "stdafx.h"
#include "resource.h"
#include "Com_leak_i.h"
#include "dllmain.h"

CCom_leakModule _AtlModule;

// DLL ��ڵ�
extern "C" BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	hInstance;
	return _AtlModule.DllMain(dwReason, lpReserved); 
}
