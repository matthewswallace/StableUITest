// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_console_IndexBuffer
#include <lime/graphics/console/IndexBuffer.h>
#endif

namespace lime{
namespace graphics{
namespace console{

void IndexBuffer_obj::__construct(){
            	HX_STACK_FRAME("lime.graphics.console.IndexBuffer","new",0x48212343,"lime.graphics.console.IndexBuffer.new","lime/graphics/console/IndexBuffer.hx",24,0xb459352e)
            	HX_STACK_THIS(this)
            	}

Dynamic IndexBuffer_obj::__CreateEmpty() { return new IndexBuffer_obj; }

hx::ObjectPtr< IndexBuffer_obj > IndexBuffer_obj::__new()
{
	hx::ObjectPtr< IndexBuffer_obj > _hx_result = new IndexBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic IndexBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IndexBuffer_obj > _hx_result = new IndexBuffer_obj();
	_hx_result->__construct();
	return _hx_result;
}


IndexBuffer_obj::IndexBuffer_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *IndexBuffer_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *IndexBuffer_obj_sStaticStorageInfo = 0;
#endif

static void IndexBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IndexBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexBuffer_obj::__mClass;

void IndexBuffer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.console.IndexBuffer","\xd1","\xc5","\xdf","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IndexBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< IndexBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IndexBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IndexBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IndexBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace console
