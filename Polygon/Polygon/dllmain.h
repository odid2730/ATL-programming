// dllmain.h : 모듈 클래스의 선언입니다.

class CPolygonModule : public ATL::CAtlDllModuleT< CPolygonModule >
{
public :
	DECLARE_LIBID(LIBID_PolygonLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_POLYGON, "{373be9d1-7488-42cc-b776-451592ba7cd6}")
};

extern class CPolygonModule _AtlModule;
