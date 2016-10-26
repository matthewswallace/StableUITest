// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuartEaseInOut
#include <motion/easing/QuartEaseInOut.h>
#endif

namespace motion{
namespace easing{

void QuartEaseInOut_obj::__construct(){
            	HX_STACK_FRAME("motion.easing.QuartEaseInOut","new",0xb1a2b599,"motion.easing.QuartEaseInOut.new","motion/easing/Quart.hx",73,0x09ba724a)
            	HX_STACK_THIS(this)
            	}

Dynamic QuartEaseInOut_obj::__CreateEmpty() { return new QuartEaseInOut_obj; }

hx::ObjectPtr< QuartEaseInOut_obj > QuartEaseInOut_obj::__new()
{
	hx::ObjectPtr< QuartEaseInOut_obj > _hx_result = new QuartEaseInOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic QuartEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< QuartEaseInOut_obj > _hx_result = new QuartEaseInOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

static ::motion::easing::IEasing_obj _hx_motion_easing_QuartEaseInOut__hx_motion_easing_IEasing= {
	( Float (hx::Object::*)(Float))&::motion::easing::QuartEaseInOut_obj::calculate,
	( Float (hx::Object::*)(Float,Float,Float,Float))&::motion::easing::QuartEaseInOut_obj::ease,
};

void *QuartEaseInOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing_QuartEaseInOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float QuartEaseInOut_obj::calculate(Float k){
            	HX_STACK_FRAME("motion.easing.QuartEaseInOut","calculate",0x9abaab5f,"motion.easing.QuartEaseInOut.calculate","motion/easing/Quart.hx",80,0x09ba724a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(k,"k")
HXLINE(  82)		hx::MultEq(k,(int)2);
HXDLIN(  82)		if ((k < (int)1)) {
HXLINE(  82)			return ((((((Float)0.5) * k) * k) * k) * k);
            		}
HXLINE(  83)		hx::SubEq(k,(int)2);
HXDLIN(  83)		return (((Float)-0.5) * ((((k * k) * k) * k) - (int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(QuartEaseInOut_obj,calculate,return )

Float QuartEaseInOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACK_FRAME("motion.easing.QuartEaseInOut","ease",0xb6c63895,"motion.easing.QuartEaseInOut.ease","motion/easing/Quart.hx",88,0x09ba724a)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
HXLINE(  90)		hx::DivEq(t,((Float)d / (Float)(int)2));
HXDLIN(  90)		if ((t < (int)1)) {
HXLINE(  91)			return (((((((Float)c / (Float)(int)2) * t) * t) * t) * t) + b);
            		}
HXLINE(  93)		Float _hx_tmp = ((Float)-(c) / (Float)(int)2);
HXDLIN(  93)		hx::SubEq(t,(int)2);
HXDLIN(  93)		return ((_hx_tmp * ((((t * t) * t) * t) - (int)2)) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(QuartEaseInOut_obj,ease,return )


QuartEaseInOut_obj::QuartEaseInOut_obj()
{
}

hx::Val QuartEaseInOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
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
static hx::StorageInfo *QuartEaseInOut_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *QuartEaseInOut_obj_sStaticStorageInfo = 0;
#endif

static ::String QuartEaseInOut_obj_sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void QuartEaseInOut_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuartEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void QuartEaseInOut_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuartEaseInOut_obj::__mClass,"__mClass");
};

#endif

hx::Class QuartEaseInOut_obj::__mClass;

void QuartEaseInOut_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.QuartEaseInOut","\x27","\xf5","\xa7","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = QuartEaseInOut_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(QuartEaseInOut_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuartEaseInOut_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = QuartEaseInOut_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuartEaseInOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuartEaseInOut_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing