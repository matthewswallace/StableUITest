// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_JoystickEventInfo
#include <lime/_backend/native/_NativeApplication/JoystickEventInfo.h>
#endif

namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

void JoystickEventInfo_obj::__construct( ::Dynamic type,hx::Null< Int >  __o_id,hx::Null< Int >  __o_index,hx::Null< Float >  __o_value,hx::Null< Int >  __o_x,hx::Null< Int >  __o_y){
Int id = __o_id.Default(0);
Int index = __o_index.Default(0);
Float value = __o_value.Default(0);
Int x = __o_x.Default(0);
Int y = __o_y.Default(0);
            	HX_STACK_FRAME("lime._backend.native._NativeApplication.JoystickEventInfo","new",0x2df84fa1,"lime._backend.native._NativeApplication.JoystickEventInfo.new","lime/_backend/native/NativeApplication.hx",776,0xb13849fd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(value,"value")
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE( 778)		this->type = type;
HXLINE( 779)		this->id = id;
HXLINE( 780)		this->index = index;
HXLINE( 781)		this->value = value;
HXLINE( 782)		this->x = x;
HXLINE( 783)		this->y = y;
            	}

Dynamic JoystickEventInfo_obj::__CreateEmpty() { return new JoystickEventInfo_obj; }

hx::ObjectPtr< JoystickEventInfo_obj > JoystickEventInfo_obj::__new( ::Dynamic type,hx::Null< Int >  __o_id,hx::Null< Int >  __o_index,hx::Null< Float >  __o_value,hx::Null< Int >  __o_x,hx::Null< Int >  __o_y)
{
	hx::ObjectPtr< JoystickEventInfo_obj > _hx_result = new JoystickEventInfo_obj();
	_hx_result->__construct(type,__o_id,__o_index,__o_value,__o_x,__o_y);
	return _hx_result;
}

Dynamic JoystickEventInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JoystickEventInfo_obj > _hx_result = new JoystickEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

 ::lime::_backend::native::_NativeApplication::JoystickEventInfo JoystickEventInfo_obj::clone(){
            	HX_STACK_FRAME("lime._backend.native._NativeApplication.JoystickEventInfo","clone",0x8796a4de,"lime._backend.native._NativeApplication.JoystickEventInfo.clone","lime/_backend/native/NativeApplication.hx",790,0xb13849fd)
            	HX_STACK_THIS(this)
HXLINE( 790)		return  ::lime::_backend::native::_NativeApplication::JoystickEventInfo_obj::__new(this->type,this->id,this->index,this->value,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(JoystickEventInfo_obj,clone,return )


JoystickEventInfo_obj::JoystickEventInfo_obj()
{
}

hx::Val JoystickEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index); }
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val JoystickEventInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< Int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoystickEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JoystickEventInfo_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(JoystickEventInfo_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(JoystickEventInfo_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JoystickEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String JoystickEventInfo_obj_sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void JoystickEventInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JoystickEventInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class JoystickEventInfo_obj::__mClass;

void JoystickEventInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.JoystickEventInfo","\x2f","\xeb","\x95","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JoystickEventInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JoystickEventInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JoystickEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JoystickEventInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JoystickEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JoystickEventInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
