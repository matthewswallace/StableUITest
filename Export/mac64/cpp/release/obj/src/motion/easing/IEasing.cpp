// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

namespace motion{
namespace easing{


static ::String IEasing_obj_sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void IEasing_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IEasing_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IEasing_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IEasing_obj::__mClass,"__mClass");
};

#endif

hx::Class IEasing_obj::__mClass;

void IEasing_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.IEasing","\x49","\x2a","\x54","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = IEasing_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(IEasing_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x864e8b53 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IEasing_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
