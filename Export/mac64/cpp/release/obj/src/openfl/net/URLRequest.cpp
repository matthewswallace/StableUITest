// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net__URLRequestMethod_URLRequestMethod_Impl_
#include <openfl/net/_URLRequestMethod/URLRequestMethod_Impl_.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

namespace openfl{
namespace net{

void URLRequest_obj::__construct(::String inURL){
            	HX_STACK_FRAME("openfl.net.URLRequest","new",0xe13767c1,"openfl.net.URLRequest.new","openfl/net/URLRequest.hx",18,0xe997cd0d)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(inURL,"inURL")
HXLINE(  20)		Bool _hx_tmp = hx::IsNotNull( inURL );
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  22)			this->url = inURL;
            		}
HXLINE(  26)		this->requestHeaders = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  27)		this->method = ::openfl::net::_URLRequestMethod::URLRequestMethod_Impl__obj::toString((int)1);
HXLINE(  28)		this->contentType = null();
            	}

Dynamic URLRequest_obj::__CreateEmpty() { return new URLRequest_obj; }

hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String inURL)
{
	hx::ObjectPtr< URLRequest_obj > _hx_result = new URLRequest_obj();
	_hx_result->__construct(inURL);
	return _hx_result;
}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLRequest_obj > _hx_result = new URLRequest_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

::Array< ::Dynamic> URLRequest_obj::formatRequestHeaders(){
            	HX_STACK_FRAME("openfl.net.URLRequest","formatRequestHeaders",0x4a7f73cd,"openfl.net.URLRequest.formatRequestHeaders","openfl/net/URLRequest.hx",33,0xe997cd0d)
            	HX_STACK_THIS(this)
HXLINE(  35)		HX_VARI( ::Array< ::Dynamic>,res) = this->requestHeaders;
HXLINE(  36)		Bool _hx_tmp = hx::IsNull( res );
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  36)			res = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE(  38)		Bool _hx_tmp1;
HXDLIN(  38)		if (hx::IsNotEq( ::openfl::net::_URLRequestMethod::URLRequestMethod_Impl__obj::fromString(this->method),(int)1 )) {
HXLINE(  38)			_hx_tmp1 = hx::IsNull( this->data );
            		}
            		else {
HXLINE(  38)			_hx_tmp1 = true;
            		}
HXDLIN(  38)		if (_hx_tmp1) {
HXLINE(  38)			return res;
            		}
HXLINE(  40)		Bool _hx_tmp2;
HXDLIN(  40)		Bool _hx_tmp3 = !(::Std_obj::is(this->data,hx::ClassOf< ::String >()));
HXDLIN(  40)		if (_hx_tmp3) {
HXLINE(  40)			_hx_tmp2 = ::Std_obj::is(this->data,hx::ClassOf< ::openfl::utils::ByteArrayData >());
            		}
            		else {
HXLINE(  40)			_hx_tmp2 = true;
            		}
HXDLIN(  40)		if (_hx_tmp2) {
HXLINE(  42)			res = res->copy();
HXLINE(  43)			::String _hx_tmp4;
HXDLIN(  43)			Bool _hx_tmp5 = hx::IsNotNull( this->contentType );
HXDLIN(  43)			if (_hx_tmp5) {
HXLINE(  43)				_hx_tmp4 = this->contentType;
            			}
            			else {
HXLINE(  43)				_hx_tmp4 = HX_("application/x-www-form-urlencoded",9e,61,91,fa);
            			}
HXDLIN(  43)			res->push( ::openfl::net::URLRequestHeader_obj::__new(HX_("Content-Type",ce,69,5d,3c),_hx_tmp4));
            		}
HXLINE(  47)		return res;
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,formatRequestHeaders,return )


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
}

hx::Val URLRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return hx::Val( url); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return hx::Val( method); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return hx::Val( userAgent); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return hx::Val( contentType); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { return hx::Val( requestHeaders); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"formatRequestHeaders") ) { return hx::Val( formatRequestHeaders_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val URLRequest_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { requestHeaders=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo URLRequest_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(URLRequest_obj,contentType),HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(URLRequest_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(URLRequest_obj,requestHeaders),HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc")},
	{hx::fsString,(int)offsetof(URLRequest_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsString,(int)offsetof(URLRequest_obj,userAgent),HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *URLRequest_obj_sStaticStorageInfo = 0;
#endif

static ::String URLRequest_obj_sMemberFields[] = {
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"),
	HX_HCSTRING("formatRequestHeaders","\x4e","\x68","\xff","\x70"),
	::String(null()) };

static void URLRequest_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLRequest_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
};

#endif

hx::Class URLRequest_obj::__mClass;

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.net.URLRequest","\x4f","\x73","\x1e","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = URLRequest_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(URLRequest_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLRequest_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLRequest_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLRequest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLRequest_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace net
