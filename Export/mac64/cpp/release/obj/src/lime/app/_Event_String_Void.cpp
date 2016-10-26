// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime_app__Event_String_Void
#include <lime/app/_Event_String_Void.h>
#endif

namespace lime{
namespace app{

void _Event_String_Void_obj::__construct(){
            	HX_STACK_FRAME("lime.app._Event_String_Void","new",0x6d330f56,"lime.app._Event_String_Void.new","lime/app/Event.hx",26,0xbda45bec)
            	HX_STACK_THIS(this)
HXLINE(  29)		this->canceled = false;
HXLINE(  30)		this->_hx___listeners = ::Array_obj< ::Dynamic>::__new();
HXLINE(  31)		this->_hx___priorities = ::Array_obj< Int >::__new();
HXLINE(  32)		this->_hx___repeat = ::Array_obj< Bool >::__new();
            	}

Dynamic _Event_String_Void_obj::__CreateEmpty() { return new _Event_String_Void_obj; }

hx::ObjectPtr< _Event_String_Void_obj > _Event_String_Void_obj::__new()
{
	hx::ObjectPtr< _Event_String_Void_obj > _hx_result = new _Event_String_Void_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic _Event_String_Void_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< _Event_String_Void_obj > _hx_result = new _Event_String_Void_obj();
	_hx_result->__construct();
	return _hx_result;
}

void _Event_String_Void_obj::add( ::Dynamic listener,hx::Null< Bool >  __o_once,hx::Null< Int >  __o_priority){
Bool once = __o_once.Default(false);
Int priority = __o_priority.Default(0);
            	HX_STACK_FRAME("lime.app._Event_String_Void","add",0x6d293117,"lime.app._Event_String_Void.add","lime/app/Event.hx",38,0xbda45bec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(once,"once")
            	HX_STACK_ARG(priority,"priority")
HXLINE(  41)		{
HXLINE(  41)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  41)			HX_VARI( Int,_g) = this->_hx___priorities->length;
HXDLIN(  41)			while((_g1 < _g)){
HXLINE(  41)				HX_VARI( Int,i) = _g1++;
HXLINE(  43)				Bool _hx_tmp = (priority > this->_hx___priorities->__get(i));
HXDLIN(  43)				if (_hx_tmp) {
HXLINE(  45)					this->_hx___listeners->insert(i,listener);
HXLINE(  46)					this->_hx___priorities->insert(i,priority);
HXLINE(  47)					this->_hx___repeat->insert(i,!(once));
HXLINE(  48)					return;
            				}
            			}
            		}
HXLINE(  54)		this->_hx___listeners->push(listener);
HXLINE(  55)		this->_hx___priorities->push(priority);
HXLINE(  56)		this->_hx___repeat->push(!(once));
            	}


HX_DEFINE_DYNAMIC_FUNC3(_Event_String_Void_obj,add,(void))

void _Event_String_Void_obj::cancel(){
            	HX_STACK_FRAME("lime.app._Event_String_Void","cancel",0xfe89ec44,"lime.app._Event_String_Void.cancel","lime/app/Event.hx",211,0xbda45bec)
            	HX_STACK_THIS(this)
HXLINE( 211)		this->canceled = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(_Event_String_Void_obj,cancel,(void))

Bool _Event_String_Void_obj::has( ::Dynamic listener){
            	HX_STACK_FRAME("lime.app._Event_String_Void","has",0x6d2e7e50,"lime.app._Event_String_Void.has","lime/app/Event.hx",247,0xbda45bec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
HXLINE( 250)		{
HXLINE( 250)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 250)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->_hx___listeners;
HXDLIN( 250)			while((_g < _g1->length)){
HXLINE( 250)				HX_VARI(  ::Dynamic,l) = _g1->__get(_g);
HXDLIN( 250)				++_g;
HXLINE( 252)				Bool _hx_tmp = ::Reflect_obj::compareMethods(l,listener);
HXDLIN( 252)				if (_hx_tmp) {
HXLINE( 252)					return true;
            				}
            			}
            		}
HXLINE( 257)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_Event_String_Void_obj,has,return )

void _Event_String_Void_obj::remove( ::Dynamic listener){
            	HX_STACK_FRAME("lime.app._Event_String_Void","remove",0x4ade9b0e,"lime.app._Event_String_Void.remove","lime/app/Event.hx",262,0xbda45bec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
HXLINE( 265)		HX_VARI( Int,i) = this->_hx___listeners->length;
HXLINE( 267)		while(true){
HXLINE( 267)			Int _hx_tmp = --i;
HXDLIN( 267)			if (!((_hx_tmp >= (int)0))) {
HXLINE( 267)				goto _hx_goto_2;
            			}
HXLINE( 269)			 ::Dynamic _hx_tmp1 = this->_hx___listeners->__get(i);
HXDLIN( 269)			Bool _hx_tmp2 = ::Reflect_obj::compareMethods(_hx_tmp1,listener);
HXDLIN( 269)			if (_hx_tmp2) {
HXLINE( 271)				this->_hx___listeners->removeRange(i,(int)1);
HXLINE( 272)				this->_hx___priorities->removeRange(i,(int)1);
HXLINE( 273)				this->_hx___repeat->removeRange(i,(int)1);
            			}
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_Event_String_Void_obj,remove,(void))

void _Event_String_Void_obj::dispatch(::String a){
            	HX_STACK_FRAME("lime.app._Event_String_Void","dispatch",0x254e9404,"lime.app._Event_String_Void.dispatch","lime/app/Event.hx",135,0xbda45bec)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
HXLINE( 137)		this->canceled = false;
HXLINE( 139)		HX_VARI( ::Array< ::Dynamic>,listeners) = this->_hx___listeners;
HXLINE( 140)		HX_VARI( ::Array< Bool >,repeat) = this->_hx___repeat;
HXLINE( 141)		HX_VARI( Int,i) = (int)0;
HXLINE( 143)		while((i < listeners->length)){
HXLINE( 145)			 ::Dynamic _hx_tmp = listeners->__get(i);
HXDLIN( 145)			_hx_tmp(a);
HXLINE( 147)			Bool _hx_tmp1 = !(repeat->__get(i));
HXDLIN( 147)			if (_hx_tmp1) {
HXLINE( 149)				this->remove(listeners->__get(i));
            			}
            			else {
HXLINE( 153)				++i;
            			}
HXLINE( 157)			if (this->canceled) {
HXLINE( 159)				goto _hx_goto_3;
            			}
            		}
            		_hx_goto_3:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(_Event_String_Void_obj,dispatch,(void))


_Event_String_Void_obj::_Event_String_Void_obj()
{
}

void _Event_String_Void_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(_Event_String_Void);
	HX_MARK_MEMBER_NAME(canceled,"canceled");
	HX_MARK_MEMBER_NAME(_hx___repeat,"__repeat");
	HX_MARK_MEMBER_NAME(_hx___priorities,"__priorities");
	HX_MARK_MEMBER_NAME(_hx___listeners,"__listeners");
	HX_MARK_END_CLASS();
}

void _Event_String_Void_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canceled,"canceled");
	HX_VISIT_MEMBER_NAME(_hx___repeat,"__repeat");
	HX_VISIT_MEMBER_NAME(_hx___priorities,"__priorities");
	HX_VISIT_MEMBER_NAME(_hx___listeners,"__listeners");
}

hx::Val _Event_String_Void_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		if (HX_FIELD_EQ(inName,"has") ) { return hx::Val( has_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return hx::Val( cancel_dyn()); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { return hx::Val( canceled); }
		if (HX_FIELD_EQ(inName,"__repeat") ) { return hx::Val( _hx___repeat); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return hx::Val( dispatch_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { return hx::Val( _hx___listeners); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { return hx::Val( _hx___priorities); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val _Event_String_Void_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"canceled") ) { canceled=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__repeat") ) { _hx___repeat=inValue.Cast< ::Array< Bool > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__listeners") ) { _hx___listeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__priorities") ) { _hx___priorities=inValue.Cast< ::Array< Int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void _Event_String_Void_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"));
	outFields->push(HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"));
	outFields->push(HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"));
	outFields->push(HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo _Event_String_Void_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(_Event_String_Void_obj,canceled),HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(_Event_String_Void_obj,_hx___repeat),HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(_Event_String_Void_obj,_hx___priorities),HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(_Event_String_Void_obj,_hx___listeners),HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *_Event_String_Void_obj_sStaticStorageInfo = 0;
#endif

static ::String _Event_String_Void_obj_sMemberFields[] = {
	HX_HCSTRING("canceled","\x59","\x18","\x26","\x1f"),
	HX_HCSTRING("__repeat","\x7b","\x02","\xac","\xae"),
	HX_HCSTRING("__priorities","\xe2","\xcb","\xe6","\x1c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("__listeners","\x5f","\xae","\xba","\x21"),
	HX_HCSTRING("dispatch","\xba","\xce","\x63","\x1e"),
	::String(null()) };

static void _Event_String_Void_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_Event_String_Void_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void _Event_String_Void_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_Event_String_Void_obj::__mClass,"__mClass");
};

#endif

hx::Class _Event_String_Void_obj::__mClass;

void _Event_String_Void_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app._Event_String_Void","\x64","\x6c","\x3f","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = _Event_String_Void_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(_Event_String_Void_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _Event_String_Void_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = _Event_String_Void_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _Event_String_Void_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _Event_String_Void_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
