// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

static const ::String _hx_array_data_0[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("fullscreen",3b,3a,b4,f9),HX_("interactive",e2,3d,59,3c),
};
namespace openfl{
namespace events{

void FullScreenEvent_obj::__construct(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,hx::Null< Bool >  __o_fullScreen,hx::Null< Bool >  __o_interactive){
Bool bubbles = __o_bubbles.Default(false);
Bool cancelable = __o_cancelable.Default(false);
Bool fullScreen = __o_fullScreen.Default(false);
Bool interactive = __o_interactive.Default(false);
            	HX_STACK_FRAME("openfl.events.FullScreenEvent","new",0x08c8725a,"openfl.events.FullScreenEvent.new","openfl/events/FullScreenEvent.hx",14,0x5d391076)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(bubbles,"bubbles")
            	HX_STACK_ARG(cancelable,"cancelable")
            	HX_STACK_ARG(fullScreen,"fullScreen")
            	HX_STACK_ARG(interactive,"interactive")
HXLINE(  18)		super::__construct(type,bubbles,cancelable,null());
HXLINE(  20)		this->fullScreen = fullScreen;
HXLINE(  21)		this->interactive = interactive;
            	}

Dynamic FullScreenEvent_obj::__CreateEmpty() { return new FullScreenEvent_obj; }

hx::ObjectPtr< FullScreenEvent_obj > FullScreenEvent_obj::__new(::String type,hx::Null< Bool >  __o_bubbles,hx::Null< Bool >  __o_cancelable,hx::Null< Bool >  __o_fullScreen,hx::Null< Bool >  __o_interactive)
{
	hx::ObjectPtr< FullScreenEvent_obj > _hx_result = new FullScreenEvent_obj();
	_hx_result->__construct(type,__o_bubbles,__o_cancelable,__o_fullScreen,__o_interactive);
	return _hx_result;
}

Dynamic FullScreenEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FullScreenEvent_obj > _hx_result = new FullScreenEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

 ::openfl::events::Event FullScreenEvent_obj::clone(){
            	HX_STACK_FRAME("openfl.events.FullScreenEvent","clone",0xd0bfa7d7,"openfl.events.FullScreenEvent.clone","openfl/events/FullScreenEvent.hx",26,0x5d391076)
            	HX_STACK_THIS(this)
HXLINE(  28)		HX_VARI(  ::openfl::events::FullScreenEvent,event) =  ::openfl::events::FullScreenEvent_obj::__new(this->type,this->bubbles,this->cancelable,this->fullScreen,this->interactive);
HXLINE(  29)		event->target = this->target;
HXLINE(  30)		event->currentTarget = this->currentTarget;
HXLINE(  31)		event->eventPhase = this->eventPhase;
HXLINE(  32)		return event;
            	}


::String FullScreenEvent_obj::toString(){
            	HX_STACK_FRAME("openfl.events.FullScreenEvent","toString",0x75cac472,"openfl.events.FullScreenEvent.toString","openfl/events/FullScreenEvent.hx",39,0x5d391076)
            	HX_STACK_THIS(this)
HXLINE(  39)		return this->_hx___formatToString(HX_("FullscreenEvent",bf,0f,46,0d),::Array_obj< ::String >::fromData( _hx_array_data_0,5));
            	}


::String FullScreenEvent_obj::FULL_SCREEN;

::String FullScreenEvent_obj::FULL_SCREEN_INTERACTIVE_ACCEPTED;


FullScreenEvent_obj::FullScreenEvent_obj()
{
}

hx::Val FullScreenEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fullScreen") ) { return hx::Val( fullScreen); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { return hx::Val( interactive); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FullScreenEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fullScreen") ) { fullScreen=inValue.Cast< Bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interactive") ) { interactive=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FullScreenEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"));
	outFields->push(HX_HCSTRING("interactive","\xe2","\x3d","\x59","\x3c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FullScreenEvent_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FullScreenEvent_obj,fullScreen),HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e")},
	{hx::fsBool,(int)offsetof(FullScreenEvent_obj,interactive),HX_HCSTRING("interactive","\xe2","\x3d","\x59","\x3c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FullScreenEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FullScreenEvent_obj::FULL_SCREEN,HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18")},
	{hx::fsString,(void *) &FullScreenEvent_obj::FULL_SCREEN_INTERACTIVE_ACCEPTED,HX_HCSTRING("FULL_SCREEN_INTERACTIVE_ACCEPTED","\xc7","\xef","\xc6","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FullScreenEvent_obj_sMemberFields[] = {
	HX_HCSTRING("fullScreen","\x5b","\xae","\x48","\x2e"),
	HX_HCSTRING("interactive","\xe2","\x3d","\x59","\x3c"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void FullScreenEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FullScreenEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FullScreenEvent_obj::FULL_SCREEN,"FULL_SCREEN");
	HX_MARK_MEMBER_NAME(FullScreenEvent_obj::FULL_SCREEN_INTERACTIVE_ACCEPTED,"FULL_SCREEN_INTERACTIVE_ACCEPTED");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FullScreenEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FullScreenEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FullScreenEvent_obj::FULL_SCREEN,"FULL_SCREEN");
	HX_VISIT_MEMBER_NAME(FullScreenEvent_obj::FULL_SCREEN_INTERACTIVE_ACCEPTED,"FULL_SCREEN_INTERACTIVE_ACCEPTED");
};

#endif

hx::Class FullScreenEvent_obj::__mClass;

static ::String FullScreenEvent_obj_sStaticFields[] = {
	HX_HCSTRING("FULL_SCREEN","\x5c","\x27","\x87","\x18"),
	HX_HCSTRING("FULL_SCREEN_INTERACTIVE_ACCEPTED","\xc7","\xef","\xc6","\xd8"),
	::String(null())
};

void FullScreenEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.FullScreenEvent","\x68","\xfd","\x1d","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FullScreenEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FullScreenEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FullScreenEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FullScreenEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FullScreenEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FullScreenEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FullScreenEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FullScreenEvent_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.events.FullScreenEvent","boot",0x9eb49cf8,"openfl.events.FullScreenEvent.boot","openfl/events/FullScreenEvent.hx",7,0x5d391076)
HXLINE(   7)		FULL_SCREEN = HX_("fullScreen",5b,ae,48,2e);
            	}
{
            	HX_STACK_FRAME("openfl.events.FullScreenEvent","boot",0x9eb49cf8,"openfl.events.FullScreenEvent.boot","openfl/events/FullScreenEvent.hx",8,0x5d391076)
HXLINE(   8)		FULL_SCREEN_INTERACTIVE_ACCEPTED = HX_("fullScreenInteractiveAccepted",ce,77,06,29);
            	}
}

} // end namespace openfl
} // end namespace events
