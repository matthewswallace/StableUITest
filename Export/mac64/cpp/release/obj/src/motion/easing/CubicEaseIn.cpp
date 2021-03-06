// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_CubicEaseIn
#include <motion/easing/CubicEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

namespace motion{
namespace easing{

void CubicEaseIn_obj::__construct(){
            	HX_STACK_FRAME("motion.easing.CubicEaseIn","new",0x6bf6ed24,"motion.easing.CubicEaseIn.new","motion/easing/Cubic.hx",46,0x157bb7df)
            	HX_STACK_THIS(this)
            	}

Dynamic CubicEaseIn_obj::__CreateEmpty() { return new CubicEaseIn_obj; }

hx::ObjectPtr< CubicEaseIn_obj > CubicEaseIn_obj::__new()
{
	hx::ObjectPtr< CubicEaseIn_obj > _hx_result = new CubicEaseIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic CubicEaseIn_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CubicEaseIn_obj > _hx_result = new CubicEaseIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

static ::motion::easing::IEasing_obj _hx_motion_easing_CubicEaseIn__hx_motion_easing_IEasing= {
	( Float (hx::Object::*)(Float))&::motion::easing::CubicEaseIn_obj::calculate,
	( Float (hx::Object::*)(Float,Float,Float,Float))&::motion::easing::CubicEaseIn_obj::ease,
};

void *CubicEaseIn_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing_CubicEaseIn__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float CubicEaseIn_obj::calculate(Float k){
            	HX_STACK_FRAME("motion.easing.CubicEaseIn","calculate",0x7cb99d2a,"motion.easing.CubicEaseIn.calculate","motion/easing/Cubic.hx",55,0x157bb7df)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(k,"k")
HXLINE(  55)		return ((k * k) * k);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CubicEaseIn_obj,calculate,return )

Float CubicEaseIn_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACK_FRAME("motion.easing.CubicEaseIn","ease",0x06229aaa,"motion.easing.CubicEaseIn.ease","motion/easing/Cubic.hx",62,0x157bb7df)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
HXLINE(  62)		hx::DivEq(t,d);
HXDLIN(  62)		return ((((c * t) * t) * t) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(CubicEaseIn_obj,ease,return )


CubicEaseIn_obj::CubicEaseIn_obj()
{
}

hx::Val CubicEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return hx::Val( ease_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return hx::Val( calculate_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CubicEaseIn_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CubicEaseIn_obj_sStaticStorageInfo = 0;
#endif

static ::String CubicEaseIn_obj_sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void CubicEaseIn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CubicEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CubicEaseIn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CubicEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class CubicEaseIn_obj::__mClass;

void CubicEaseIn_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.CubicEaseIn","\x32","\xcb","\x70","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CubicEaseIn_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CubicEaseIn_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CubicEaseIn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CubicEaseIn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CubicEaseIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CubicEaseIn_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
