// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFontFace_CairoFontFace_Impl_
#include <lime/graphics/cairo/_CairoFontFace/CairoFontFace_Impl_.h>
#endif

namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFontFace{

void CairoFontFace_Impl__obj::__construct() { }

Dynamic CairoFontFace_Impl__obj::__CreateEmpty() { return new CairoFontFace_Impl__obj; }

hx::ObjectPtr< CairoFontFace_Impl__obj > CairoFontFace_Impl__obj::__new()
{
	hx::ObjectPtr< CairoFontFace_Impl__obj > _hx_result = new CairoFontFace_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic CairoFontFace_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoFontFace_Impl__obj > _hx_result = new CairoFontFace_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::Dynamic CairoFontFace_Impl__obj::_new(){
            	HX_STACK_FRAME("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","_new",0x1006fe04,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_._new","lime/graphics/cairo/CairoFontFace.hx",14,0xf163eb1b)
HXLINE(  14)		HX_VARI_NAME(  ::Dynamic,this1,"this") = null();
HXDLIN(  14)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFontFace_Impl__obj,_new,return )

Int CairoFontFace_Impl__obj::status( ::Dynamic this1){
            	HX_STACK_FRAME("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","status",0xcf297e95,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_.status","lime/graphics/cairo/CairoFontFace.hx",24,0xf163eb1b)
            	HX_STACK_ARG(this1,"this1")
HXLINE(  24)		return ( (Int)(::lime::graphics::cairo::_CairoFontFace::CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status(hx::DynamicPtr(this1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontFace_Impl__obj,status,return )

Int CairoFontFace_Impl__obj::lime_cairo_font_face_status( ::Dynamic handle){
            	HX_STACK_FRAME("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","lime_cairo_font_face_status",0x3533e3e2,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_.lime_cairo_font_face_status","lime/graphics/cairo/CairoFontFace.hx",40,0xf163eb1b)
            	HX_STACK_ARG(handle,"handle")
HXLINE(  40)		return ( (Int)(::lime::graphics::cairo::_CairoFontFace::CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status(hx::DynamicPtr(handle))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CairoFontFace_Impl__obj,lime_cairo_font_face_status,return )

::cpp::Function<  Int( ::hx::Object *) > CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status;


CairoFontFace_Impl__obj::CairoFontFace_Impl__obj()
{
}

bool CairoFontFace_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { outValue = status_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_cairo_font_face_status") ) { outValue = lime_cairo_font_face_status_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoFontFace_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo CairoFontFace_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status,HX_HCSTRING("cffi_lime_cairo_font_face_status","\xcc","\x03","\xc2","\x7a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void CairoFontFace_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFontFace_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status,"cffi_lime_cairo_font_face_status");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoFontFace_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFontFace_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFontFace_Impl__obj::cffi_lime_cairo_font_face_status,"cffi_lime_cairo_font_face_status");
};

#endif

hx::Class CairoFontFace_Impl__obj::__mClass;

static ::String CairoFontFace_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),
	HX_HCSTRING("lime_cairo_font_face_status","\x25","\x18","\x5c","\xf3"),
	HX_HCSTRING("cffi_lime_cairo_font_face_status","\xcc","\x03","\xc2","\x7a"),
	::String(null())
};

void CairoFontFace_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","\xab","\x3a","\x9b","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFontFace_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoFontFace_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoFontFace_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoFontFace_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoFontFace_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoFontFace_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoFontFace_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoFontFace_Impl__obj::__boot()
{
{
            	HX_STACK_FRAME("lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_","boot",0x12036cd5,"lime.graphics.cairo._CairoFontFace.CairoFontFace_Impl_.boot","lime/graphics/cairo/CairoFontFace.hx",40,0xf163eb1b)
HXLINE(  40)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_cairo_font_face_status",25,18,5c,f3),HX_("oi",1a,61,00,00),false);
HXDLIN(  40)		cffi_lime_cairo_font_face_status = inValue;
            	}
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFontFace
