// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/_Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadButton_Void
#include <lime/app/_Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Gamepad_Void
#include <lime/app/_Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif

namespace lime{
namespace ui{

void Gamepad_obj::__construct(Int id){
            	HX_STACK_FRAME("lime.ui.Gamepad","new",0xd780a212,"lime.ui.Gamepad.new","lime/ui/Gamepad.hx",13,0x36bc843e)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(  26)		this->onDisconnect =  ::lime::app::_Event_Void_Void_obj::__new();
HXLINE(  25)		this->onButtonUp =  ::lime::app::_Event_lime_ui_GamepadButton_Void_obj::__new();
HXLINE(  24)		this->onButtonDown =  ::lime::app::_Event_lime_ui_GamepadButton_Void_obj::__new();
HXLINE(  23)		this->onAxisMove =  ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void_obj::__new();
HXLINE(  31)		this->id = id;
HXLINE(  32)		this->connected = true;
            	}

Dynamic Gamepad_obj::__CreateEmpty() { return new Gamepad_obj; }

hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(Int id)
{
	hx::ObjectPtr< Gamepad_obj > _hx_result = new Gamepad_obj();
	_hx_result->__construct(id);
	return _hx_result;
}

Dynamic Gamepad_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Gamepad_obj > _hx_result = new Gamepad_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

::String Gamepad_obj::get_guid(){
            	HX_STACK_FRAME("lime.ui.Gamepad","get_guid",0x2f6ca220,"lime.ui.Gamepad.get_guid","lime/ui/Gamepad.hx",79,0x36bc843e)
            	HX_STACK_THIS(this)
HXLINE(  79)		Int id = this->id;
HXDLIN(  79)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_guid(id)) );
HXDLIN(  79)		return Dynamic(hx::DynamicPtr(inVal));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_guid,return )

::String Gamepad_obj::get_name(){
            	HX_STACK_FRAME("lime.ui.Gamepad","get_name",0x33fdf6e2,"lime.ui.Gamepad.get_name","lime/ui/Gamepad.hx",93,0x36bc843e)
            	HX_STACK_THIS(this)
HXLINE(  93)		Int id = this->id;
HXDLIN(  93)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_name(id)) );
HXDLIN(  93)		return Dynamic(hx::DynamicPtr(inVal));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_name,return )

 ::haxe::ds::IntMap Gamepad_obj::devices;

 ::lime::app::_Event_lime_ui_Gamepad_Void Gamepad_obj::onConnect;

void Gamepad_obj::addMappings(::Array< ::String > mappings){
            	HX_STACK_FRAME("lime.ui.Gamepad","addMappings",0x7dce3c98,"lime.ui.Gamepad.addMappings","lime/ui/Gamepad.hx",40,0x36bc843e)
            	HX_STACK_ARG(mappings,"mappings")
HXLINE(  40)		::lime::ui::Gamepad_obj::cffi_lime_gamepad_add_mappings(hx::DynamicPtr(mappings));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,addMappings,(void))

void Gamepad_obj::_hx___connect(Int id){
            	HX_STACK_FRAME("lime.ui.Gamepad","__connect",0x06daaffc,"lime.ui.Gamepad.__connect","lime/ui/Gamepad.hx",48,0x36bc843e)
            	HX_STACK_ARG(id,"id")
HXLINE(  48)		Bool _hx_tmp = !(::lime::ui::Gamepad_obj::devices->exists(id));
HXDLIN(  48)		if (_hx_tmp) {
HXLINE(  50)			HX_VARI(  ::lime::ui::Gamepad,gamepad) =  ::lime::ui::Gamepad_obj::__new(id);
HXLINE(  51)			::lime::ui::Gamepad_obj::devices->set(id,gamepad);
HXLINE(  52)			::lime::ui::Gamepad_obj::onConnect->dispatch(gamepad);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,_hx___connect,(void))

void Gamepad_obj::_hx___disconnect(Int id){
            	HX_STACK_FRAME("lime.ui.Gamepad","__disconnect",0x04d0478a,"lime.ui.Gamepad.__disconnect","lime/ui/Gamepad.hx",59,0x36bc843e)
            	HX_STACK_ARG(id,"id")
HXLINE(  61)		HX_VARI(  ::lime::ui::Gamepad,gamepad) = ::lime::ui::Gamepad_obj::devices->get(id).StaticCast<  ::lime::ui::Gamepad >();
HXLINE(  62)		Bool _hx_tmp = hx::IsNotNull( gamepad );
HXDLIN(  62)		if (_hx_tmp) {
HXLINE(  62)			gamepad->connected = false;
            		}
HXLINE(  63)		::lime::ui::Gamepad_obj::devices->remove(id);
HXLINE(  64)		Bool _hx_tmp1 = hx::IsNotNull( gamepad );
HXDLIN(  64)		if (_hx_tmp1) {
HXLINE(  64)			gamepad->onDisconnect->dispatch();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,_hx___disconnect,(void))

void Gamepad_obj::lime_gamepad_add_mappings( ::Dynamic mappings){
            	HX_STACK_FRAME("lime.ui.Gamepad","lime_gamepad_add_mappings",0x0a0a603d,"lime.ui.Gamepad.lime_gamepad_add_mappings","lime/ui/Gamepad.hx",112,0x36bc843e)
            	HX_STACK_ARG(mappings,"mappings")
HXLINE( 112)		::lime::ui::Gamepad_obj::cffi_lime_gamepad_add_mappings(hx::DynamicPtr(mappings));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,lime_gamepad_add_mappings,(void))

 ::Dynamic Gamepad_obj::lime_gamepad_get_device_guid(Int id){
            	HX_STACK_FRAME("lime.ui.Gamepad","lime_gamepad_get_device_guid",0x36bce76f,"lime.ui.Gamepad.lime_gamepad_get_device_guid","lime/ui/Gamepad.hx",113,0x36bc843e)
            	HX_STACK_ARG(id,"id")
HXLINE( 113)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_guid(id)) );
HXDLIN( 113)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,lime_gamepad_get_device_guid,return )

 ::Dynamic Gamepad_obj::lime_gamepad_get_device_name(Int id){
            	HX_STACK_FRAME("lime.ui.Gamepad","lime_gamepad_get_device_name",0x3b4e3c31,"lime.ui.Gamepad.lime_gamepad_get_device_name","lime/ui/Gamepad.hx",114,0x36bc843e)
            	HX_STACK_ARG(id,"id")
HXLINE( 114)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::ui::Gamepad_obj::cffi_lime_gamepad_get_device_name(id)) );
HXDLIN( 114)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,lime_gamepad_get_device_name,return )

::cpp::Function<  void( ::hx::Object *) > Gamepad_obj::cffi_lime_gamepad_add_mappings;

::cpp::Function<   ::hx::Object *(Int) > Gamepad_obj::cffi_lime_gamepad_get_device_guid;

::cpp::Function<   ::hx::Object *(Int) > Gamepad_obj::cffi_lime_gamepad_get_device_name;


Gamepad_obj::Gamepad_obj()
{
}

void Gamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gamepad);
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_MARK_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_MARK_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_MARK_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_MARK_END_CLASS();
}

void Gamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_VISIT_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_VISIT_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_VISIT_MEMBER_NAME(onDisconnect,"onDisconnect");
}

hx::Val Gamepad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_guid()); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_name()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return hx::Val( get_guid_dyn()); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return hx::Val( get_name_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return hx::Val( connected); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { return hx::Val( onAxisMove); }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { return hx::Val( onButtonUp); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { return hx::Val( onButtonDown); }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { return hx::Val( onDisconnect); }
	}
	return super::__Field(inName,inCallProp);
}

bool Gamepad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = devices; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { outValue = onConnect; return true; }
		if (HX_FIELD_EQ(inName,"__connect") ) { outValue = _hx___connect_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addMappings") ) { outValue = addMappings_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__disconnect") ) { outValue = _hx___disconnect_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_gamepad_add_mappings") ) { outValue = lime_gamepad_add_mappings_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_guid") ) { outValue = lime_gamepad_get_device_guid_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_gamepad_get_device_name") ) { outValue = lime_gamepad_get_device_name_dyn(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_add_mappings") ) { outValue = cffi_lime_gamepad_add_mappings; return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_guid") ) { outValue = cffi_lime_gamepad_get_device_guid; return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_name") ) { outValue = cffi_lime_gamepad_get_device_name; return true; }
	}
	return false;
}

hx::Val Gamepad_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< Bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { onAxisMove=inValue.Cast<  ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { onButtonUp=inValue.Cast<  ::lime::app::_Event_lime_ui_GamepadButton_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { onButtonDown=inValue.Cast<  ::lime::app::_Event_lime_ui_GamepadButton_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { onDisconnect=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Gamepad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=ioValue.Cast<  ::lime::app::_Event_lime_ui_Gamepad_Void >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_add_mappings") ) { cffi_lime_gamepad_add_mappings=ioValue.Cast< ::cpp::Function<  void( ::hx::Object *) > >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_guid") ) { cffi_lime_gamepad_get_device_guid=ioValue.Cast< ::cpp::Function<   ::hx::Object *(Int) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_gamepad_get_device_name") ) { cffi_lime_gamepad_get_device_name=ioValue.Cast< ::cpp::Function<   ::hx::Object *(Int) > >(); return true; }
	}
	return false;
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"));
	outFields->push(HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"));
	outFields->push(HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"));
	outFields->push(HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Gamepad_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Gamepad_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsInt,(int)offsetof(Gamepad_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_GamepadAxis_Float_Void*/ ,(int)offsetof(Gamepad_obj,onAxisMove),HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_GamepadButton_Void*/ ,(int)offsetof(Gamepad_obj,onButtonDown),HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_GamepadButton_Void*/ ,(int)offsetof(Gamepad_obj,onButtonUp),HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Gamepad_obj,onDisconnect),HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Gamepad_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Gamepad_obj::devices,HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_Gamepad_Void*/ ,(void *) &Gamepad_obj::onConnect,HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Gamepad_obj::cffi_lime_gamepad_add_mappings,HX_HCSTRING("cffi_lime_gamepad_add_mappings","\xf2","\x1c","\x61","\x57")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Gamepad_obj::cffi_lime_gamepad_get_device_guid,HX_HCSTRING("cffi_lime_gamepad_get_device_guid","\xda","\x49","\xe7","\x1e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Gamepad_obj::cffi_lime_gamepad_get_device_name,HX_HCSTRING("cffi_lime_gamepad_get_device_name","\x9c","\x9e","\x78","\x23")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Gamepad_obj_sMemberFields[] = {
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"),
	HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"),
	HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"),
	HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"),
	HX_HCSTRING("get_guid","\x12","\xd9","\x28","\xc4"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	::String(null()) };

static void Gamepad_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
	HX_MARK_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_add_mappings,"cffi_lime_gamepad_add_mappings");
	HX_MARK_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_get_device_guid,"cffi_lime_gamepad_get_device_guid");
	HX_MARK_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_get_device_name,"cffi_lime_gamepad_get_device_name");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Gamepad_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_add_mappings,"cffi_lime_gamepad_add_mappings");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_get_device_guid,"cffi_lime_gamepad_get_device_guid");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::cffi_lime_gamepad_get_device_name,"cffi_lime_gamepad_get_device_name");
};

#endif

hx::Class Gamepad_obj::__mClass;

static ::String Gamepad_obj_sStaticFields[] = {
	HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7"),
	HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed"),
	HX_HCSTRING("addMappings","\xe6","\x68","\x0d","\xd8"),
	HX_HCSTRING("__connect","\xca","\x8c","\xce","\x96"),
	HX_HCSTRING("__disconnect","\x7c","\xdf","\xd7","\xa1"),
	HX_HCSTRING("lime_gamepad_add_mappings","\x0b","\x39","\xa9","\xd8"),
	HX_HCSTRING("lime_gamepad_get_device_guid","\x61","\x03","\x1f","\x2d"),
	HX_HCSTRING("lime_gamepad_get_device_name","\x23","\x58","\xb0","\x31"),
	HX_HCSTRING("cffi_lime_gamepad_add_mappings","\xf2","\x1c","\x61","\x57"),
	HX_HCSTRING("cffi_lime_gamepad_get_device_guid","\xda","\x49","\xe7","\x1e"),
	HX_HCSTRING("cffi_lime_gamepad_get_device_name","\x9c","\x9e","\x78","\x23"),
	::String(null())
};

void Gamepad_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Gamepad","\x20","\xf1","\xa5","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gamepad_obj::__GetStatic;
	__mClass->mSetStaticField = &Gamepad_obj::__SetStatic;
	__mClass->mMarkFunc = Gamepad_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Gamepad_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Gamepad_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Gamepad_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Gamepad_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Gamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Gamepad_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Gamepad_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.ui.Gamepad","boot",0xb1262e40,"lime.ui.Gamepad.boot","lime/ui/Gamepad.hx",16,0x36bc843e)
HXLINE(  16)		devices =  ::haxe::ds::IntMap_obj::__new();
            	}
{
            	HX_STACK_FRAME("lime.ui.Gamepad","boot",0xb1262e40,"lime.ui.Gamepad.boot","lime/ui/Gamepad.hx",17,0x36bc843e)
HXLINE(  17)		onConnect =  ::lime::app::_Event_lime_ui_Gamepad_Void_obj::__new();
            	}
{
            	HX_STACK_FRAME("lime.ui.Gamepad","boot",0xb1262e40,"lime.ui.Gamepad.boot","lime/ui/Gamepad.hx",112,0x36bc843e)
HXLINE( 112)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_gamepad_add_mappings",0b,39,a9,d8),HX_("ov",27,61,00,00),false);
HXDLIN( 112)		cffi_lime_gamepad_add_mappings = inValue;
            	}
{
            	HX_STACK_FRAME("lime.ui.Gamepad","boot",0xb1262e40,"lime.ui.Gamepad.boot","lime/ui/Gamepad.hx",113,0x36bc843e)
HXLINE( 113)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_gamepad_get_device_guid",61,03,1f,2d),HX_("io",e6,5b,00,00),false);
HXDLIN( 113)		cffi_lime_gamepad_get_device_guid = inValue;
            	}
{
            	HX_STACK_FRAME("lime.ui.Gamepad","boot",0xb1262e40,"lime.ui.Gamepad.boot","lime/ui/Gamepad.hx",114,0x36bc843e)
HXLINE( 114)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_gamepad_get_device_name",23,58,b0,31),HX_("io",e6,5b,00,00),false);
HXDLIN( 114)		cffi_lime_gamepad_get_device_name = inValue;
            	}
}

} // end namespace lime
} // end namespace ui