// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_compress_Zlib
#include <lime/utils/compress/Zlib.h>
#endif

namespace lime{
namespace utils{
namespace compress{

void Zlib_obj::__construct() { }

Dynamic Zlib_obj::__CreateEmpty() { return new Zlib_obj; }

hx::ObjectPtr< Zlib_obj > Zlib_obj::__new()
{
	hx::ObjectPtr< Zlib_obj > _hx_result = new Zlib_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Zlib_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Zlib_obj > _hx_result = new Zlib_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::haxe::io::Bytes Zlib_obj::compress( ::haxe::io::Bytes bytes){
            	HX_STACK_FRAME("lime.utils.compress.Zlib","compress",0x4fedbd0f,"lime.utils.compress.Zlib.compress","lime/utils/compress/Zlib.hx",23,0xe800dd9e)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  23)		 ::Dynamic bytes1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  23)		 ::hx::Object * _hx_tmp = hx::DynamicPtr(bytes);
HXDLIN(  23)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::compress::Zlib_obj::cffi_lime_zlib_compress(_hx_tmp,hx::DynamicPtr(bytes1))) );
HXDLIN(  23)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,compress,return )

 ::haxe::io::Bytes Zlib_obj::decompress( ::haxe::io::Bytes bytes){
            	HX_STACK_FRAME("lime.utils.compress.Zlib","decompress",0xe6dcf2d0,"lime.utils.compress.Zlib.decompress","lime/utils/compress/Zlib.hx",59,0xe800dd9e)
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  59)		 ::Dynamic bytes1 = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  59)		 ::hx::Object * _hx_tmp = hx::DynamicPtr(bytes);
HXDLIN(  59)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::compress::Zlib_obj::cffi_lime_zlib_decompress(_hx_tmp,hx::DynamicPtr(bytes1))) );
HXDLIN(  59)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Zlib_obj,decompress,return )

 ::Dynamic Zlib_obj::lime_zlib_compress( ::Dynamic data, ::Dynamic bytes){
            	HX_STACK_FRAME("lime.utils.compress.Zlib","lime_zlib_compress",0x2238f059,"lime.utils.compress.Zlib.lime_zlib_compress","lime/utils/compress/Zlib.hx",98,0xe800dd9e)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  98)		 ::hx::Object * _hx_tmp = hx::DynamicPtr(data);
HXDLIN(  98)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::compress::Zlib_obj::cffi_lime_zlib_compress(_hx_tmp,hx::DynamicPtr(bytes))) );
HXDLIN(  98)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Zlib_obj,lime_zlib_compress,return )

 ::Dynamic Zlib_obj::lime_zlib_decompress( ::Dynamic data, ::Dynamic bytes){
            	HX_STACK_FRAME("lime.utils.compress.Zlib","lime_zlib_decompress",0x48d30c9a,"lime.utils.compress.Zlib.lime_zlib_decompress","lime/utils/compress/Zlib.hx",99,0xe800dd9e)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(bytes,"bytes")
HXLINE(  99)		 ::hx::Object * _hx_tmp = hx::DynamicPtr(data);
HXDLIN(  99)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::utils::compress::Zlib_obj::cffi_lime_zlib_decompress(_hx_tmp,hx::DynamicPtr(bytes))) );
HXDLIN(  99)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Zlib_obj,lime_zlib_decompress,return )

::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > Zlib_obj::cffi_lime_zlib_compress;

::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > Zlib_obj::cffi_lime_zlib_decompress;


Zlib_obj::Zlib_obj()
{
}

bool Zlib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"compress") ) { outValue = compress_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decompress") ) { outValue = decompress_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_zlib_compress") ) { outValue = lime_zlib_compress_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_zlib_decompress") ) { outValue = lime_zlib_decompress_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_compress") ) { outValue = cffi_lime_zlib_compress; return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_decompress") ) { outValue = cffi_lime_zlib_decompress; return true; }
	}
	return false;
}

bool Zlib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_compress") ) { cffi_lime_zlib_compress=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_zlib_decompress") ) { cffi_lime_zlib_decompress=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Zlib_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Zlib_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Zlib_obj::cffi_lime_zlib_compress,HX_HCSTRING("cffi_lime_zlib_compress","\xe5","\xb5","\x14","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Zlib_obj::cffi_lime_zlib_decompress,HX_HCSTRING("cffi_lime_zlib_decompress","\x26","\x4d","\x54","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Zlib_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Zlib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Zlib_obj::cffi_lime_zlib_compress,"cffi_lime_zlib_compress");
	HX_MARK_MEMBER_NAME(Zlib_obj::cffi_lime_zlib_decompress,"cffi_lime_zlib_decompress");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Zlib_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Zlib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Zlib_obj::cffi_lime_zlib_compress,"cffi_lime_zlib_compress");
	HX_VISIT_MEMBER_NAME(Zlib_obj::cffi_lime_zlib_decompress,"cffi_lime_zlib_decompress");
};

#endif

hx::Class Zlib_obj::__mClass;

static ::String Zlib_obj_sStaticFields[] = {
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("decompress","\x23","\x88","\x14","\xda"),
	HX_HCSTRING("lime_zlib_compress","\xac","\x90","\xd2","\x8a"),
	HX_HCSTRING("lime_zlib_decompress","\xad","\xa7","\x53","\x43"),
	HX_HCSTRING("cffi_lime_zlib_compress","\xe5","\xb5","\x14","\xff"),
	HX_HCSTRING("cffi_lime_zlib_decompress","\x26","\x4d","\x54","\xe8"),
	::String(null())
};

void Zlib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.utils.compress.Zlib","\xa1","\x4c","\xde","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Zlib_obj::__GetStatic;
	__mClass->mSetStaticField = &Zlib_obj::__SetStatic;
	__mClass->mMarkFunc = Zlib_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Zlib_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Zlib_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Zlib_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Zlib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Zlib_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Zlib_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.utils.compress.Zlib","boot",0xbdcd7f1f,"lime.utils.compress.Zlib.boot","lime/utils/compress/Zlib.hx",98,0xe800dd9e)
HXLINE(  98)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_zlib_compress",ac,90,d2,8a),HX_("ooo",4f,9b,54,00),false);
HXDLIN(  98)		cffi_lime_zlib_compress = inValue;
            	}
{
            	HX_STACK_FRAME("lime.utils.compress.Zlib","boot",0xbdcd7f1f,"lime.utils.compress.Zlib.boot","lime/utils/compress/Zlib.hx",99,0xe800dd9e)
HXLINE(  99)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_zlib_decompress",ad,a7,53,43),HX_("ooo",4f,9b,54,00),false);
HXDLIN(  99)		cffi_lime_zlib_decompress = inValue;
            	}
}

} // end namespace lime
} // end namespace utils
} // end namespace compress
