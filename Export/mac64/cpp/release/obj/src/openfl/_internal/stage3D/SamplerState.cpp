// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif

namespace openfl{
namespace _internal{
namespace stage3D{

void SamplerState_obj::__construct(Int minFilter,Int magFilter,Int wrapModeS,Int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso){
Float lodBias = __o_lodBias.Default(((Float)0.0));
Float maxAniso = __o_maxAniso.Default(((Float)0.0));
            	HX_STACK_FRAME("openfl._internal.stage3D.SamplerState","new",0xfe112c0a,"openfl._internal.stage3D.SamplerState.new","openfl/_internal/stage3D/SamplerState.hx",15,0xf2d288c3)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(minFilter,"minFilter")
            	HX_STACK_ARG(magFilter,"magFilter")
            	HX_STACK_ARG(wrapModeS,"wrapModeS")
            	HX_STACK_ARG(wrapModeT,"wrapModeT")
            	HX_STACK_ARG(lodBias,"lodBias")
            	HX_STACK_ARG(maxAniso,"maxAniso")
HXLINE(  17)		this->minFilter = minFilter;
HXLINE(  18)		this->magFilter = magFilter;
HXLINE(  19)		this->wrapModeS = wrapModeS;
HXLINE(  20)		this->wrapModeT = wrapModeT;
HXLINE(  21)		this->lodBias = lodBias;
HXLINE(  22)		this->maxAniso = maxAniso;
            	}

Dynamic SamplerState_obj::__CreateEmpty() { return new SamplerState_obj; }

hx::ObjectPtr< SamplerState_obj > SamplerState_obj::__new(Int minFilter,Int magFilter,Int wrapModeS,Int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso)
{
	hx::ObjectPtr< SamplerState_obj > _hx_result = new SamplerState_obj();
	_hx_result->__construct(minFilter,magFilter,wrapModeS,wrapModeT,__o_lodBias,__o_maxAniso);
	return _hx_result;
}

Dynamic SamplerState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SamplerState_obj > _hx_result = new SamplerState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

Bool SamplerState_obj::equals( ::openfl::_internal::stage3D::SamplerState other){
            	HX_STACK_FRAME("openfl._internal.stage3D.SamplerState","equals",0xcd1eb8d5,"openfl._internal.stage3D.SamplerState.equals","openfl/_internal/stage3D/SamplerState.hx",27,0xf2d288c3)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(other,"other")
HXLINE(  29)		if (hx::IsEq( hx::ObjectPtr<OBJ_>(this),other )) {
HXLINE(  31)			return true;
            		}
HXLINE(  35)		Bool _hx_tmp = hx::IsNull( other );
HXDLIN(  35)		if (_hx_tmp) {
HXLINE(  37)			return false;
            		}
HXLINE(  41)		Bool _hx_tmp1;
HXDLIN(  41)		Bool _hx_tmp2;
HXDLIN(  41)		Bool _hx_tmp3;
HXDLIN(  41)		Bool _hx_tmp4;
HXDLIN(  41)		if ((this->minFilter == other->minFilter)) {
HXLINE(  41)			_hx_tmp4 = (this->magFilter == other->magFilter);
            		}
            		else {
HXLINE(  41)			_hx_tmp4 = false;
            		}
HXDLIN(  41)		if (_hx_tmp4) {
HXLINE(  41)			_hx_tmp3 = (this->wrapModeS == other->wrapModeS);
            		}
            		else {
HXLINE(  41)			_hx_tmp3 = false;
            		}
HXDLIN(  41)		if (_hx_tmp3) {
HXLINE(  41)			_hx_tmp2 = (this->wrapModeT == other->wrapModeT);
            		}
            		else {
HXLINE(  41)			_hx_tmp2 = false;
            		}
HXDLIN(  41)		if (_hx_tmp2) {
HXLINE(  41)			_hx_tmp1 = (this->lodBias == other->lodBias);
            		}
            		else {
HXLINE(  41)			_hx_tmp1 = false;
            		}
HXDLIN(  41)		if (_hx_tmp1) {
HXLINE(  41)			return (this->maxAniso == other->maxAniso);
            		}
            		else {
HXLINE(  41)			return false;
            		}
HXDLIN(  41)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,equals,return )


SamplerState_obj::SamplerState_obj()
{
}

hx::Val SamplerState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return hx::Val( equals_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { return hx::Val( lodBias); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxAniso") ) { return hx::Val( maxAniso); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { return hx::Val( magFilter); }
		if (HX_FIELD_EQ(inName,"minFilter") ) { return hx::Val( minFilter); }
		if (HX_FIELD_EQ(inName,"wrapModeS") ) { return hx::Val( wrapModeS); }
		if (HX_FIELD_EQ(inName,"wrapModeT") ) { return hx::Val( wrapModeT); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val SamplerState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { lodBias=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxAniso") ) { maxAniso=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { magFilter=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minFilter") ) { minFilter=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapModeS") ) { wrapModeS=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapModeT") ) { wrapModeT=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"));
	outFields->push(HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1"));
	outFields->push(HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd"));
	outFields->push(HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde"));
	outFields->push(HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf"));
	outFields->push(HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SamplerState_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SamplerState_obj,lodBias),HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,magFilter),HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1")},
	{hx::fsFloat,(int)offsetof(SamplerState_obj,maxAniso),HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,minFilter),HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,wrapModeS),HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,wrapModeT),HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SamplerState_obj_sStaticStorageInfo = 0;
#endif

static ::String SamplerState_obj_sMemberFields[] = {
	HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"),
	HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1"),
	HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd"),
	HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde"),
	HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf"),
	HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	::String(null()) };

static void SamplerState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SamplerState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerState_obj::__mClass;

void SamplerState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.SamplerState","\x18","\x1f","\xbc","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SamplerState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SamplerState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SamplerState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SamplerState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SamplerState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D