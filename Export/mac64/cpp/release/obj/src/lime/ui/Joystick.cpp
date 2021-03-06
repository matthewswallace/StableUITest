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
#ifndef INCLUDED_lime_app__Event_Int_Float_Void
#include <lime/app/_Event_Int_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_lime_ui_JoystickHatPosition_Void
#include <lime/app/_Event_Int_lime_ui_JoystickHatPosition_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Joystick_Void
#include <lime/app/_Event_lime_ui_Joystick_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Joystick
#include <lime/ui/Joystick.h>
#endif

namespace lime{
namespace ui{

void Joystick_obj::__construct(Int id){
            	HX_STACK_FRAME("lime.ui.Joystick","new",0xd76b52cf,"lime.ui.Joystick.new","lime/ui/Joystick.hx",11,0x26e848e1)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(  30)		this->onTrackballMove =  ::lime::app::_Event_Int_Float_Void_obj::__new();
HXLINE(  29)		this->onHatMove =  ::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void_obj::__new();
HXLINE(  28)		this->onDisconnect =  ::lime::app::_Event_Void_Void_obj::__new();
HXLINE(  27)		this->onButtonUp =  ::lime::app::_Event_Int_Void_obj::__new();
HXLINE(  26)		this->onButtonDown =  ::lime::app::_Event_Int_Void_obj::__new();
HXLINE(  25)		this->onAxisMove =  ::lime::app::_Event_Int_Float_Void_obj::__new();
HXLINE(  35)		this->id = id;
HXLINE(  36)		this->connected = true;
            	}

Dynamic Joystick_obj::__CreateEmpty() { return new Joystick_obj; }

hx::ObjectPtr< Joystick_obj > Joystick_obj::__new(Int id)
{
	hx::ObjectPtr< Joystick_obj > _hx_result = new Joystick_obj();
	_hx_result->__construct(id);
	return _hx_result;
}

Dynamic Joystick_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Joystick_obj > _hx_result = new Joystick_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

::String Joystick_obj::get_guid(){
            	HX_STACK_FRAME("lime.ui.Joystick","get_guid",0xa0372443,"lime.ui.Joystick.get_guid","lime/ui/Joystick.hx",83,0x26e848e1)
            	HX_STACK_THIS(this)
HXLINE(  83)		Int id = this->id;
HXDLIN(  83)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_device_guid(id)) );
HXDLIN(  83)		return Dynamic(hx::DynamicPtr(inVal));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_guid,return )

::String Joystick_obj::get_name(){
            	HX_STACK_FRAME("lime.ui.Joystick","get_name",0xa4c87905,"lime.ui.Joystick.get_name","lime/ui/Joystick.hx",97,0x26e848e1)
            	HX_STACK_THIS(this)
HXLINE(  97)		Int id = this->id;
HXDLIN(  97)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_device_name(id)) );
HXDLIN(  97)		return Dynamic(hx::DynamicPtr(inVal));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_name,return )

Int Joystick_obj::get_numAxes(){
            	HX_STACK_FRAME("lime.ui.Joystick","get_numAxes",0x6e0a2811,"lime.ui.Joystick.get_numAxes","lime/ui/Joystick.hx",111,0x26e848e1)
            	HX_STACK_THIS(this)
HXLINE( 111)		Int id = this->id;
HXDLIN( 111)		return ( (Int)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_axes(id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numAxes,return )

Int Joystick_obj::get_numButtons(){
            	HX_STACK_FRAME("lime.ui.Joystick","get_numButtons",0x8a7f5ed5,"lime.ui.Joystick.get_numButtons","lime/ui/Joystick.hx",125,0x26e848e1)
            	HX_STACK_THIS(this)
HXLINE( 125)		Int id = this->id;
HXDLIN( 125)		return ( (Int)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_buttons(id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numButtons,return )

Int Joystick_obj::get_numHats(){
            	HX_STACK_FRAME("lime.ui.Joystick","get_numHats",0x72993fa4,"lime.ui.Joystick.get_numHats","lime/ui/Joystick.hx",139,0x26e848e1)
            	HX_STACK_THIS(this)
HXLINE( 139)		Int id = this->id;
HXDLIN( 139)		return ( (Int)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_hats(id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numHats,return )

Int Joystick_obj::get_numTrackballs(){
            	HX_STACK_FRAME("lime.ui.Joystick","get_numTrackballs",0xfaa6bf15,"lime.ui.Joystick.get_numTrackballs","lime/ui/Joystick.hx",150,0x26e848e1)
            	HX_STACK_THIS(this)
HXLINE( 150)		Int id = this->id;
HXDLIN( 150)		return ( (Int)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_trackballs(id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Joystick_obj,get_numTrackballs,return )

 ::haxe::ds::IntMap Joystick_obj::devices;

 ::lime::app::_Event_lime_ui_Joystick_Void Joystick_obj::onConnect;

void Joystick_obj::_hx___connect(Int id){
            	HX_STACK_FRAME("lime.ui.Joystick","__connect",0x47420c79,"lime.ui.Joystick.__connect","lime/ui/Joystick.hx",43,0x26e848e1)
            	HX_STACK_ARG(id,"id")
HXLINE(  43)		Bool _hx_tmp = !(::lime::ui::Joystick_obj::devices->exists(id));
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  45)			HX_VARI(  ::lime::ui::Joystick,joystick) =  ::lime::ui::Joystick_obj::__new(id);
HXLINE(  46)			::lime::ui::Joystick_obj::devices->set(id,joystick);
HXLINE(  47)			::lime::ui::Joystick_obj::onConnect->dispatch(joystick);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,_hx___connect,(void))

void Joystick_obj::_hx___disconnect(Int id){
            	HX_STACK_FRAME("lime.ui.Joystick","__disconnect",0xe10a172d,"lime.ui.Joystick.__disconnect","lime/ui/Joystick.hx",54,0x26e848e1)
            	HX_STACK_ARG(id,"id")
HXLINE(  56)		HX_VARI(  ::lime::ui::Joystick,joystick) = ::lime::ui::Joystick_obj::devices->get(id).StaticCast<  ::lime::ui::Joystick >();
HXLINE(  57)		Bool _hx_tmp = hx::IsNotNull( joystick );
HXDLIN(  57)		if (_hx_tmp) {
HXLINE(  57)			joystick->connected = false;
            		}
HXLINE(  58)		::lime::ui::Joystick_obj::devices->remove(id);
HXLINE(  59)		Bool _hx_tmp1 = hx::IsNotNull( joystick );
HXDLIN(  59)		if (_hx_tmp1) {
HXLINE(  59)			joystick->onDisconnect->dispatch();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,_hx___disconnect,(void))

 ::Dynamic Joystick_obj::lime_joystick_get_device_guid(Int id){
            	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_device_guid",0xfa126abf,"lime.ui.Joystick.lime_joystick_get_device_guid","lime/ui/Joystick.hx",166,0x26e848e1)
            	HX_STACK_ARG(id,"id")
HXLINE( 166)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_device_guid(id)) );
HXDLIN( 166)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_device_guid,return )

 ::Dynamic Joystick_obj::lime_joystick_get_device_name(Int id){
            	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_device_name",0xfea3bf81,"lime.ui.Joystick.lime_joystick_get_device_name","lime/ui/Joystick.hx",167,0x26e848e1)
            	HX_STACK_ARG(id,"id")
HXLINE( 167)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_device_name(id)) );
HXDLIN( 167)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_device_name,return )

Int Joystick_obj::lime_joystick_get_num_axes(Int id){
            	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_num_axes",0x6dd2cd31,"lime.ui.Joystick.lime_joystick_get_num_axes","lime/ui/Joystick.hx",168,0x26e848e1)
            	HX_STACK_ARG(id,"id")
HXLINE( 168)		return ( (Int)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_axes(id)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_num_axes,return )

Int Joystick_obj::lime_joystick_get_num_buttons(Int id){
            	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_num_buttons",0xbd12adb5,"lime.ui.Joystick.lime_joystick_get_num_buttons","lime/ui/Joystick.hx",169,0x26e848e1)
            	HX_STACK_ARG(id,"id")
HXLINE( 169)		return ( (Int)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_buttons(id)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_num_buttons,return )

Int Joystick_obj::lime_joystick_get_num_hats(Int id){
            	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_num_hats",0x7261e4c4,"lime.ui.Joystick.lime_joystick_get_num_hats","lime/ui/Joystick.hx",170,0x26e848e1)
            	HX_STACK_ARG(id,"id")
HXLINE( 170)		return ( (Int)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_hats(id)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_num_hats,return )

Int Joystick_obj::lime_joystick_get_num_trackballs(Int id){
            	HX_STACK_FRAME("lime.ui.Joystick","lime_joystick_get_num_trackballs",0x88a7fc35,"lime.ui.Joystick.lime_joystick_get_num_trackballs","lime/ui/Joystick.hx",171,0x26e848e1)
            	HX_STACK_ARG(id,"id")
HXLINE( 171)		return ( (Int)(::lime::ui::Joystick_obj::cffi_lime_joystick_get_num_trackballs(id)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Joystick_obj,lime_joystick_get_num_trackballs,return )

::cpp::Function<   ::hx::Object *(Int) > Joystick_obj::cffi_lime_joystick_get_device_guid;

::cpp::Function<   ::hx::Object *(Int) > Joystick_obj::cffi_lime_joystick_get_device_name;

::cpp::Function<  Int(Int) > Joystick_obj::cffi_lime_joystick_get_num_axes;

::cpp::Function<  Int(Int) > Joystick_obj::cffi_lime_joystick_get_num_buttons;

::cpp::Function<  Int(Int) > Joystick_obj::cffi_lime_joystick_get_num_hats;

::cpp::Function<  Int(Int) > Joystick_obj::cffi_lime_joystick_get_num_trackballs;


Joystick_obj::Joystick_obj()
{
}

void Joystick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Joystick);
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_MARK_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_MARK_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_MARK_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_MARK_MEMBER_NAME(onHatMove,"onHatMove");
	HX_MARK_MEMBER_NAME(onTrackballMove,"onTrackballMove");
	HX_MARK_END_CLASS();
}

void Joystick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_VISIT_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_VISIT_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_VISIT_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_VISIT_MEMBER_NAME(onHatMove,"onHatMove");
	HX_VISIT_MEMBER_NAME(onTrackballMove,"onTrackballMove");
}

hx::Val Joystick_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_guid()); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_name()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"numAxes") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_numAxes()); }
		if (HX_FIELD_EQ(inName,"numHats") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_numHats()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return hx::Val( get_guid_dyn()); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return hx::Val( get_name_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return hx::Val( connected); }
		if (HX_FIELD_EQ(inName,"onHatMove") ) { return hx::Val( onHatMove); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"numButtons") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_numButtons()); }
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { return hx::Val( onAxisMove); }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { return hx::Val( onButtonUp); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_numAxes") ) { return hx::Val( get_numAxes_dyn()); }
		if (HX_FIELD_EQ(inName,"get_numHats") ) { return hx::Val( get_numHats_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { return hx::Val( onButtonDown); }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { return hx::Val( onDisconnect); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"numTrackballs") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_numTrackballs()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_numButtons") ) { return hx::Val( get_numButtons_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTrackballMove") ) { return hx::Val( onTrackballMove); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_numTrackballs") ) { return hx::Val( get_numTrackballs_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Joystick_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = devices; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { outValue = onConnect; return true; }
		if (HX_FIELD_EQ(inName,"__connect") ) { outValue = _hx___connect_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__disconnect") ) { outValue = _hx___disconnect_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_axes") ) { outValue = lime_joystick_get_num_axes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_hats") ) { outValue = lime_joystick_get_num_hats_dyn(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_joystick_get_device_guid") ) { outValue = lime_joystick_get_device_guid_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_device_name") ) { outValue = lime_joystick_get_device_name_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_buttons") ) { outValue = lime_joystick_get_num_buttons_dyn(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_axes") ) { outValue = cffi_lime_joystick_get_num_axes; return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_hats") ) { outValue = cffi_lime_joystick_get_num_hats; return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_joystick_get_num_trackballs") ) { outValue = lime_joystick_get_num_trackballs_dyn(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_guid") ) { outValue = cffi_lime_joystick_get_device_guid; return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_name") ) { outValue = cffi_lime_joystick_get_device_name; return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_buttons") ) { outValue = cffi_lime_joystick_get_num_buttons; return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_trackballs") ) { outValue = cffi_lime_joystick_get_num_trackballs; return true; }
	}
	return false;
}

hx::Val Joystick_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onHatMove") ) { onHatMove=inValue.Cast<  ::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { onAxisMove=inValue.Cast<  ::lime::app::_Event_Int_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { onButtonUp=inValue.Cast<  ::lime::app::_Event_Int_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { onButtonDown=inValue.Cast<  ::lime::app::_Event_Int_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { onDisconnect=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onTrackballMove") ) { onTrackballMove=inValue.Cast<  ::lime::app::_Event_Int_Float_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Joystick_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=ioValue.Cast<  ::lime::app::_Event_lime_ui_Joystick_Void >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_axes") ) { cffi_lime_joystick_get_num_axes=ioValue.Cast< ::cpp::Function<  Int(Int) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_hats") ) { cffi_lime_joystick_get_num_hats=ioValue.Cast< ::cpp::Function<  Int(Int) > >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_guid") ) { cffi_lime_joystick_get_device_guid=ioValue.Cast< ::cpp::Function<   ::hx::Object *(Int) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_device_name") ) { cffi_lime_joystick_get_device_name=ioValue.Cast< ::cpp::Function<   ::hx::Object *(Int) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_buttons") ) { cffi_lime_joystick_get_num_buttons=ioValue.Cast< ::cpp::Function<  Int(Int) > >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_joystick_get_num_trackballs") ) { cffi_lime_joystick_get_num_trackballs=ioValue.Cast< ::cpp::Function<  Int(Int) > >(); return true; }
	}
	return false;
}

void Joystick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("numAxes","\x8b","\xbe","\xf9","\x93"));
	outFields->push(HX_HCSTRING("numButtons","\x9b","\x90","\x95","\xfa"));
	outFields->push(HX_HCSTRING("numHats","\x1e","\xd6","\x88","\x98"));
	outFields->push(HX_HCSTRING("numTrackballs","\x0f","\x6d","\xa5","\x22"));
	outFields->push(HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"));
	outFields->push(HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"));
	outFields->push(HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"));
	outFields->push(HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"));
	outFields->push(HX_HCSTRING("onHatMove","\xad","\x50","\xb6","\x82"));
	outFields->push(HX_HCSTRING("onTrackballMove","\x9c","\x55","\xf3","\xfd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Joystick_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Joystick_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsInt,(int)offsetof(Joystick_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::app::_Event_Int_Float_Void*/ ,(int)offsetof(Joystick_obj,onAxisMove),HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d")},
	{hx::fsObject /*::lime::app::_Event_Int_Void*/ ,(int)offsetof(Joystick_obj,onButtonDown),HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84")},
	{hx::fsObject /*::lime::app::_Event_Int_Void*/ ,(int)offsetof(Joystick_obj,onButtonUp),HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Joystick_obj,onDisconnect),HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41")},
	{hx::fsObject /*::lime::app::_Event_Int_lime_ui_JoystickHatPosition_Void*/ ,(int)offsetof(Joystick_obj,onHatMove),HX_HCSTRING("onHatMove","\xad","\x50","\xb6","\x82")},
	{hx::fsObject /*::lime::app::_Event_Int_Float_Void*/ ,(int)offsetof(Joystick_obj,onTrackballMove),HX_HCSTRING("onTrackballMove","\x9c","\x55","\xf3","\xfd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Joystick_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Joystick_obj::devices,HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_Joystick_Void*/ ,(void *) &Joystick_obj::onConnect,HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_device_guid,HX_HCSTRING("cffi_lime_joystick_get_device_guid","\xf7","\xbc","\x8f","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_device_name,HX_HCSTRING("cffi_lime_joystick_get_device_name","\xb9","\x11","\x21","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_num_axes,HX_HCSTRING("cffi_lime_joystick_get_num_axes","\xf9","\x67","\x04","\x0c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_num_buttons,HX_HCSTRING("cffi_lime_joystick_get_num_buttons","\xed","\xff","\x8f","\xa2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_num_hats,HX_HCSTRING("cffi_lime_joystick_get_num_hats","\x8c","\x7f","\x93","\x10")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Joystick_obj::cffi_lime_joystick_get_num_trackballs,HX_HCSTRING("cffi_lime_joystick_get_num_trackballs","\xfd","\xdc","\xcd","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Joystick_obj_sMemberFields[] = {
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"),
	HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"),
	HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"),
	HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"),
	HX_HCSTRING("onHatMove","\xad","\x50","\xb6","\x82"),
	HX_HCSTRING("onTrackballMove","\x9c","\x55","\xf3","\xfd"),
	HX_HCSTRING("get_guid","\x12","\xd9","\x28","\xc4"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("get_numAxes","\xa2","\x1e","\xf4","\x19"),
	HX_HCSTRING("get_numButtons","\xe4","\x18","\x8b","\x70"),
	HX_HCSTRING("get_numHats","\x35","\x36","\x83","\x1e"),
	HX_HCSTRING("get_numTrackballs","\x66","\x78","\x15","\x29"),
	::String(null()) };

static void Joystick_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Joystick_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Joystick_obj::onConnect,"onConnect");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_device_guid,"cffi_lime_joystick_get_device_guid");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_device_name,"cffi_lime_joystick_get_device_name");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_axes,"cffi_lime_joystick_get_num_axes");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_buttons,"cffi_lime_joystick_get_num_buttons");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_hats,"cffi_lime_joystick_get_num_hats");
	HX_MARK_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_trackballs,"cffi_lime_joystick_get_num_trackballs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Joystick_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Joystick_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Joystick_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Joystick_obj::onConnect,"onConnect");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_device_guid,"cffi_lime_joystick_get_device_guid");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_device_name,"cffi_lime_joystick_get_device_name");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_axes,"cffi_lime_joystick_get_num_axes");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_buttons,"cffi_lime_joystick_get_num_buttons");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_hats,"cffi_lime_joystick_get_num_hats");
	HX_VISIT_MEMBER_NAME(Joystick_obj::cffi_lime_joystick_get_num_trackballs,"cffi_lime_joystick_get_num_trackballs");
};

#endif

hx::Class Joystick_obj::__mClass;

static ::String Joystick_obj_sStaticFields[] = {
	HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7"),
	HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed"),
	HX_HCSTRING("__connect","\xca","\x8c","\xce","\x96"),
	HX_HCSTRING("__disconnect","\x7c","\xdf","\xd7","\xa1"),
	HX_HCSTRING("lime_joystick_get_device_guid","\x90","\x59","\x1a","\x42"),
	HX_HCSTRING("lime_joystick_get_device_name","\x52","\xae","\xab","\x46"),
	HX_HCSTRING("lime_joystick_get_num_axes","\xc0","\xe1","\xd4","\xa9"),
	HX_HCSTRING("lime_joystick_get_num_buttons","\x86","\x9c","\x1a","\x05"),
	HX_HCSTRING("lime_joystick_get_num_hats","\x53","\xf9","\x63","\xae"),
	HX_HCSTRING("lime_joystick_get_num_trackballs","\x04","\x66","\xee","\x99"),
	HX_HCSTRING("cffi_lime_joystick_get_device_guid","\xf7","\xbc","\x8f","\xdf"),
	HX_HCSTRING("cffi_lime_joystick_get_device_name","\xb9","\x11","\x21","\xe4"),
	HX_HCSTRING("cffi_lime_joystick_get_num_axes","\xf9","\x67","\x04","\x0c"),
	HX_HCSTRING("cffi_lime_joystick_get_num_buttons","\xed","\xff","\x8f","\xa2"),
	HX_HCSTRING("cffi_lime_joystick_get_num_hats","\x8c","\x7f","\x93","\x10"),
	HX_HCSTRING("cffi_lime_joystick_get_num_trackballs","\xfd","\xdc","\xcd","\xc7"),
	::String(null())
};

void Joystick_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Joystick","\x5d","\x3f","\xe0","\x7d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Joystick_obj::__GetStatic;
	__mClass->mSetStaticField = &Joystick_obj::__SetStatic;
	__mClass->mMarkFunc = Joystick_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Joystick_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Joystick_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Joystick_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Joystick_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Joystick_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Joystick_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Joystick_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",14,0x26e848e1)
HXLINE(  14)		devices =  ::haxe::ds::IntMap_obj::__new();
            	}
{
            	HX_STACK_FRAME("lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",15,0x26e848e1)
HXLINE(  15)		onConnect =  ::lime::app::_Event_lime_ui_Joystick_Void_obj::__new();
            	}
{
            	HX_STACK_FRAME("lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",166,0x26e848e1)
HXLINE( 166)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_joystick_get_device_guid",90,59,1a,42),HX_("io",e6,5b,00,00),false);
HXDLIN( 166)		cffi_lime_joystick_get_device_guid = inValue;
            	}
{
            	HX_STACK_FRAME("lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",167,0x26e848e1)
HXLINE( 167)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_joystick_get_device_name",52,ae,ab,46),HX_("io",e6,5b,00,00),false);
HXDLIN( 167)		cffi_lime_joystick_get_device_name = inValue;
            	}
{
            	HX_STACK_FRAME("lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",168,0x26e848e1)
HXLINE( 168)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_joystick_get_num_axes",c0,e1,d4,a9),HX_("ii",e0,5b,00,00),false);
HXDLIN( 168)		cffi_lime_joystick_get_num_axes = inValue;
            	}
{
            	HX_STACK_FRAME("lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",169,0x26e848e1)
HXLINE( 169)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_joystick_get_num_buttons",86,9c,1a,05),HX_("ii",e0,5b,00,00),false);
HXDLIN( 169)		cffi_lime_joystick_get_num_buttons = inValue;
            	}
{
            	HX_STACK_FRAME("lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",170,0x26e848e1)
HXLINE( 170)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_joystick_get_num_hats",53,f9,63,ae),HX_("ii",e0,5b,00,00),false);
HXDLIN( 170)		cffi_lime_joystick_get_num_hats = inValue;
            	}
{
            	HX_STACK_FRAME("lime.ui.Joystick","boot",0x9e9622e3,"lime.ui.Joystick.boot","lime/ui/Joystick.hx",171,0x26e848e1)
HXLINE( 171)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_joystick_get_num_trackballs",04,66,ee,99),HX_("ii",e0,5b,00,00),false);
HXDLIN( 171)		cffi_lime_joystick_get_num_trackballs = inValue;
            	}
}

} // end namespace lime
} // end namespace ui
