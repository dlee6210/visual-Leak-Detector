// CLeak_Test.h : CCLeak_Test ������

#pragma once
#include "resource.h"       // ������



#include "Com_leak_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Windows CE ƽ̨(�粻�ṩ��ȫ DCOM ֧�ֵ� Windows Mobile ƽ̨)���޷���ȷ֧�ֵ��߳� COM ���󡣶��� _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA ��ǿ�� ATL ֧�ִ������߳� COM ����ʵ�ֲ�����ʹ���䵥�߳� COM ����ʵ�֡�rgs �ļ��е��߳�ģ���ѱ�����Ϊ��Free����ԭ���Ǹ�ģ���Ƿ� DCOM Windows CE ƽ̨֧�ֵ�Ψһ�߳�ģ�͡�"
#endif

using namespace ATL;


// CCLeak_Test

class ATL_NO_VTABLE CCLeak_Test :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CCLeak_Test, &CLSID_CLeak_Test>,
	public IDispatchImpl<ICLeak_Test, &IID_ICLeak_Test, &LIBID_Com_leakLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CCLeak_Test()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CLEAK_TEST)


BEGIN_COM_MAP(CCLeak_Test)
	COM_INTERFACE_ENTRY(ICLeak_Test)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:



	STDMETHOD(Test_Leak)(void);
};

OBJECT_ENTRY_AUTO(__uuidof(CLeak_Test), CCLeak_Test)
