// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Back
#include <motion/easing/Back.h>
#endif
#ifndef INCLUDED_motion_easing_BackEaseIn
#include <motion/easing/BackEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_BackEaseInOut
#include <motion/easing/BackEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_BackEaseOut
#include <motion/easing/BackEaseOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

namespace motion{
namespace easing{

void Back_obj::__construct() { }

Dynamic Back_obj::__CreateEmpty() { return new Back_obj; }

hx::ObjectPtr< Back_obj > Back_obj::__new()
{
	hx::ObjectPtr< Back_obj > _hx_result = new Back_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Back_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Back_obj > _hx_result = new Back_obj();
	_hx_result->__construct();
	return _hx_result;
}

::Dynamic Back_obj::get_easeIn(){
            	HX_STACK_FRAME("motion.easing.Back","get_easeIn",0xb55c8378,"motion.easing.Back.get_easeIn","motion/easing/Back.hx",21,0x81c0c12c)
HXLINE(  21)		return  ::motion::easing::BackEaseIn_obj::__new(((Float)1.70158));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Back_obj,get_easeIn,return )

::Dynamic Back_obj::get_easeInOut(){
            	HX_STACK_FRAME("motion.easing.Back","get_easeInOut",0xf2a54ff6,"motion.easing.Back.get_easeInOut","motion/easing/Back.hx",28,0x81c0c12c)
HXLINE(  28)		return  ::motion::easing::BackEaseInOut_obj::__new(((Float)1.70158));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Back_obj,get_easeInOut,return )

::Dynamic Back_obj::get_easeOut(){
            	HX_STACK_FRAME("motion.easing.Back","get_easeOut",0xfb9b199b,"motion.easing.Back.get_easeOut","motion/easing/Back.hx",35,0x81c0c12c)
HXLINE(  35)		return  ::motion::easing::BackEaseOut_obj::__new(((Float)1.70158));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Back_obj,get_easeOut,return )


Back_obj::Back_obj()
{
}

bool Back_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeIn(); return true; } }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeOut(); return true; } }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { if (inCallProp == hx::paccAlways) { outValue = get_easeInOut(); return true; } }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_easeIn") ) { outValue = get_easeIn_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_easeOut") ) { outValue = get_easeOut_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_easeInOut") ) { outValue = get_easeInOut_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Back_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Back_obj_sStaticStorageInfo = 0;
#endif

static void Back_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Back_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Back_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Back_obj::__mClass,"__mClass");
};

#endif

hx::Class Back_obj::__mClass;

static ::String Back_obj_sStaticFields[] = {
	HX_HCSTRING("get_easeIn","\x3c","\x93","\xc1","\x78"),
	HX_HCSTRING("get_easeInOut","\xb2","\x72","\x21","\x08"),
	HX_HCSTRING("get_easeOut","\x57","\xd5","\xa3","\x30"),
	::String(null())
};

void Back_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.Back","\xb2","\x4e","\xfd","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Back_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Back_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Back_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Back_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Back_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Back_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Back_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
