// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_text_Font
#include <lime/app/Promise_lime_text_Font.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

namespace lime{
namespace app{

void Promise_lime_text_Font_obj::__construct(){
            	HX_STACK_FRAME("lime.app.Promise_lime_text_Font","new",0x708368f3,"lime.app.Promise_lime_text_Font.new","lime/app/Promise.hx",18,0x10ba4f0b)
            	HX_STACK_THIS(this)
HXLINE(  18)		this->future =  ::lime::app::Future_obj::__new(null());
            	}

Dynamic Promise_lime_text_Font_obj::__CreateEmpty() { return new Promise_lime_text_Font_obj; }

hx::ObjectPtr< Promise_lime_text_Font_obj > Promise_lime_text_Font_obj::__new()
{
	hx::ObjectPtr< Promise_lime_text_Font_obj > _hx_result = new Promise_lime_text_Font_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Promise_lime_text_Font_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Promise_lime_text_Font_obj > _hx_result = new Promise_lime_text_Font_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::lime::app::Promise_lime_text_Font Promise_lime_text_Font_obj::complete( ::lime::text::Font data){
            	HX_STACK_FRAME("lime.app.Promise_lime_text_Font","complete",0x0a877346,"lime.app.Promise_lime_text_Font.complete","lime/app/Promise.hx",23,0x10ba4f0b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
HXLINE(  25)		Bool _hx_tmp = !(this->future->isError);
HXDLIN(  25)		if (_hx_tmp) {
HXLINE(  27)			this->future->isComplete = true;
HXLINE(  28)			this->future->value = data;
HXLINE(  30)			Bool _hx_tmp1 = hx::IsNotNull( this->future->_hx___completeListeners );
HXDLIN(  30)			if (_hx_tmp1) {
HXLINE(  32)				{
HXLINE(  32)					HX_VARI( Int,_g) = (int)0;
HXDLIN(  32)					HX_VARI( ::Array< ::Dynamic>,_g1) = this->future->_hx___completeListeners;
HXDLIN(  32)					while((_g < _g1->length)){
HXLINE(  32)						HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(  32)						++_g;
HXLINE(  34)						listener(data);
            					}
            				}
HXLINE(  38)				this->future->_hx___completeListeners = null();
            			}
            		}
HXLINE(  44)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_text_Font_obj,complete,return )

 ::lime::app::Promise_lime_text_Font Promise_lime_text_Font_obj::completeWith( ::lime::app::Future future){
            	HX_STACK_FRAME("lime.app.Promise_lime_text_Font","completeWith",0xf69b306c,"lime.app.Promise_lime_text_Font.completeWith","lime/app/Promise.hx",49,0x10ba4f0b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(future,"future")
HXLINE(  51)		future->onComplete(this->complete_dyn());
HXLINE(  52)		future->onError(this->error_dyn());
HXLINE(  53)		future->onProgress(this->progress_dyn());
HXLINE(  55)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_text_Font_obj,completeWith,return )

 ::lime::app::Promise_lime_text_Font Promise_lime_text_Font_obj::error( ::Dynamic msg){
            	HX_STACK_FRAME("lime.app.Promise_lime_text_Font","error",0x00deef1b,"lime.app.Promise_lime_text_Font.error","lime/app/Promise.hx",61,0x10ba4f0b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(msg,"msg")
HXLINE(  63)		Bool _hx_tmp = !(this->future->isComplete);
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  65)			this->future->isError = true;
HXLINE(  66)			this->future->error = msg;
HXLINE(  68)			Bool _hx_tmp1 = hx::IsNotNull( this->future->_hx___errorListeners );
HXDLIN(  68)			if (_hx_tmp1) {
HXLINE(  70)				{
HXLINE(  70)					HX_VARI( Int,_g) = (int)0;
HXDLIN(  70)					HX_VARI( ::Array< ::Dynamic>,_g1) = this->future->_hx___errorListeners;
HXDLIN(  70)					while((_g < _g1->length)){
HXLINE(  70)						HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(  70)						++_g;
HXLINE(  72)						listener(msg);
            					}
            				}
HXLINE(  76)				this->future->_hx___errorListeners = null();
            			}
            		}
HXLINE(  82)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_text_Font_obj,error,return )

 ::lime::app::Promise_lime_text_Font Promise_lime_text_Font_obj::progress(Float progress){
            	HX_STACK_FRAME("lime.app.Promise_lime_text_Font","progress",0x10ea6a3a,"lime.app.Promise_lime_text_Font.progress","lime/app/Promise.hx",87,0x10ba4f0b)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(progress,"progress")
HXLINE(  89)		Bool _hx_tmp;
HXDLIN(  89)		if (!(this->future->isError)) {
HXLINE(  89)			_hx_tmp = !(this->future->isComplete);
            		}
            		else {
HXLINE(  89)			_hx_tmp = false;
            		}
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  91)			Bool _hx_tmp1 = hx::IsNotNull( this->future->_hx___progressListeners );
HXDLIN(  91)			if (_hx_tmp1) {
HXLINE(  93)				HX_VARI( Int,_g) = (int)0;
HXDLIN(  93)				HX_VARI( ::Array< ::Dynamic>,_g1) = this->future->_hx___progressListeners;
HXDLIN(  93)				while((_g < _g1->length)){
HXLINE(  93)					HX_VARI(  ::Dynamic,listener) = _g1->__get(_g);
HXDLIN(  93)					++_g;
HXLINE(  95)					listener(progress);
            				}
            			}
            		}
HXLINE( 103)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Promise_lime_text_Font_obj,progress,return )

Bool Promise_lime_text_Font_obj::get_isComplete(){
            	HX_STACK_FRAME("lime.app.Promise_lime_text_Font","get_isComplete",0x8a9ff559,"lime.app.Promise_lime_text_Font.get_isComplete","lime/app/Promise.hx",117,0x10ba4f0b)
            	HX_STACK_THIS(this)
HXLINE( 117)		return this->future->isComplete;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_lime_text_Font_obj,get_isComplete,return )

Bool Promise_lime_text_Font_obj::get_isError(){
            	HX_STACK_FRAME("lime.app.Promise_lime_text_Font","get_isError",0xc3d0b328,"lime.app.Promise_lime_text_Font.get_isError","lime/app/Promise.hx",124,0x10ba4f0b)
            	HX_STACK_THIS(this)
HXLINE( 124)		return this->future->isError;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Promise_lime_text_Font_obj,get_isError,return )


Promise_lime_text_Font_obj::Promise_lime_text_Font_obj()
{
}

void Promise_lime_text_Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Promise_lime_text_Font);
	HX_MARK_MEMBER_NAME(future,"future");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_END_CLASS();
}

void Promise_lime_text_Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(future,"future");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
}

hx::Val Promise_lime_text_Font_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return hx::Val( error_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { return hx::Val( future); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isError() : isError); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return hx::Val( complete_dyn()); }
		if (HX_FIELD_EQ(inName,"progress") ) { return hx::Val( progress_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isComplete() : isComplete); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_isError") ) { return hx::Val( get_isError_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"completeWith") ) { return hx::Val( completeWith_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_isComplete") ) { return hx::Val( get_isComplete_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Promise_lime_text_Font_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"future") ) { future=inValue.Cast<  ::lime::app::Future >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< Bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Promise_lime_text_Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("future","\x43","\x98","\x4e","\x73"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Promise_lime_text_Font_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::app::Future*/ ,(int)offsetof(Promise_lime_text_Font_obj,future),HX_HCSTRING("future","\x43","\x98","\x4e","\x73")},
	{hx::fsBool,(int)offsetof(Promise_lime_text_Font_obj,isComplete),HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa")},
	{hx::fsBool,(int)offsetof(Promise_lime_text_Font_obj,isError),HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Promise_lime_text_Font_obj_sStaticStorageInfo = 0;
#endif

static ::String Promise_lime_text_Font_obj_sMemberFields[] = {
	HX_HCSTRING("future","\x43","\x98","\x4e","\x73"),
	HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"),
	HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"),
	HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f"),
	HX_HCSTRING("completeWith","\x5f","\xf3","\xba","\xc2"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("get_isComplete","\x0c","\x9b","\x6c","\x70"),
	HX_HCSTRING("get_isError","\x95","\xcf","\xa9","\x95"),
	::String(null()) };

static void Promise_lime_text_Font_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Promise_lime_text_Font_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Promise_lime_text_Font_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Promise_lime_text_Font_obj::__mClass,"__mClass");
};

#endif

hx::Class Promise_lime_text_Font_obj::__mClass;

void Promise_lime_text_Font_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Promise_lime_text_Font","\x81","\x73","\xe1","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Promise_lime_text_Font_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Promise_lime_text_Font_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Promise_lime_text_Font_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Promise_lime_text_Font_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Promise_lime_text_Font_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Promise_lime_text_Font_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
