// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_SineEaseOut
#include <motion/easing/SineEaseOut.h>
#endif

namespace motion{
namespace easing{

void SineEaseOut_obj::__construct(){
            	HX_STACK_FRAME("motion.easing.SineEaseOut","new",0xf528023a,"motion.easing.SineEaseOut.new","motion/easing/Sine.hx",99,0xc8f9a0c6)
            	HX_STACK_THIS(this)
            	}

Dynamic SineEaseOut_obj::__CreateEmpty() { return new SineEaseOut_obj; }

hx::ObjectPtr< SineEaseOut_obj > SineEaseOut_obj::__new()
{
	hx::ObjectPtr< SineEaseOut_obj > _hx_result = new SineEaseOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic SineEaseOut_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SineEaseOut_obj > _hx_result = new SineEaseOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

static ::motion::easing::IEasing_obj _hx_motion_easing_SineEaseOut__hx_motion_easing_IEasing= {
	( Float (hx::Object::*)(Float))&::motion::easing::SineEaseOut_obj::calculate,
	( Float (hx::Object::*)(Float,Float,Float,Float))&::motion::easing::SineEaseOut_obj::ease,
};

void *SineEaseOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing_SineEaseOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float SineEaseOut_obj::calculate(Float k){
            	HX_STACK_FRAME("motion.easing.SineEaseOut","calculate",0x5640a6c0,"motion.easing.SineEaseOut.calculate","motion/easing/Sine.hx",108,0xc8f9a0c6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(k,"k")
HXLINE( 108)		Float _hx_tmp = (k * ((Float)::Math_obj::PI / (Float)(int)2));
HXDLIN( 108)		return ::Math_obj::sin(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SineEaseOut_obj,calculate,return )

Float SineEaseOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACK_FRAME("motion.easing.SineEaseOut","ease",0x87e3f8d4,"motion.easing.SineEaseOut.ease","motion/easing/Sine.hx",115,0xc8f9a0c6)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
HXLINE( 115)		Float _hx_tmp = (((Float)t / (Float)d) * ((Float)::Math_obj::PI / (Float)(int)2));
HXDLIN( 115)		Float _hx_tmp1 = ::Math_obj::sin(_hx_tmp);
HXDLIN( 115)		return ((c * _hx_tmp1) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(SineEaseOut_obj,ease,return )


SineEaseOut_obj::SineEaseOut_obj()
{
}

hx::Val SineEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *SineEaseOut_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SineEaseOut_obj_sStaticStorageInfo = 0;
#endif

static ::String SineEaseOut_obj_sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void SineEaseOut_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SineEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SineEaseOut_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SineEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class SineEaseOut_obj::__mClass;

void SineEaseOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.SineEaseOut","\x48","\x1d","\xc0","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SineEaseOut_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SineEaseOut_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SineEaseOut_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SineEaseOut_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SineEaseOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SineEaseOut_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing