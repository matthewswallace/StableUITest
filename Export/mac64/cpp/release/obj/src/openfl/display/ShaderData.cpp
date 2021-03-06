// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
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
namespace display{

void ShaderData_obj::__construct( ::openfl::utils::ByteArrayData byteArray){
            	HX_STACK_FRAME("openfl.display.ShaderData","new",0x6406164b,"openfl.display.ShaderData.new","openfl/display/ShaderData.hx",19,0xa8261943)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(byteArray,"byteArray")
            	}

Dynamic ShaderData_obj::__CreateEmpty() { return new ShaderData_obj; }

hx::ObjectPtr< ShaderData_obj > ShaderData_obj::__new( ::openfl::utils::ByteArrayData byteArray)
{
	hx::ObjectPtr< ShaderData_obj > _hx_result = new ShaderData_obj();
	_hx_result->__construct(byteArray);
	return _hx_result;
}

Dynamic ShaderData_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShaderData_obj > _hx_result = new ShaderData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}


ShaderData_obj::ShaderData_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void ShaderData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderData);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(aAlpha,"aAlpha");
	HX_MARK_MEMBER_NAME(aPosition,"aPosition");
	HX_MARK_MEMBER_NAME(aTexCoord,"aTexCoord");
	HX_MARK_MEMBER_NAME(uImage0,"uImage0");
	HX_MARK_MEMBER_NAME(uMatrix,"uMatrix");
	HX_MARK_END_CLASS();
}

void ShaderData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(aAlpha,"aAlpha");
	HX_VISIT_MEMBER_NAME(aPosition,"aPosition");
	HX_VISIT_MEMBER_NAME(aTexCoord,"aTexCoord");
	HX_VISIT_MEMBER_NAME(uImage0,"uImage0");
	HX_VISIT_MEMBER_NAME(uMatrix,"uMatrix");
}

hx::Val ShaderData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"aAlpha") ) { return hx::Val( aAlpha); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uImage0") ) { return hx::Val( uImage0); }
		if (HX_FIELD_EQ(inName,"uMatrix") ) { return hx::Val( uMatrix); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aPosition") ) { return hx::Val( aPosition); }
		if (HX_FIELD_EQ(inName,"aTexCoord") ) { return hx::Val( aTexCoord); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

hx::Val ShaderData_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"aAlpha") ) { aAlpha=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uImage0") ) { uImage0=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uMatrix") ) { uMatrix=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"aPosition") ) { aPosition=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aTexCoord") ) { aTexCoord=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void ShaderData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("aAlpha","\x3d","\x17","\x62","\x7d"));
	outFields->push(HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"));
	outFields->push(HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2"));
	outFields->push(HX_HCSTRING("uImage0","\xca","\x0a","\x76","\x34"));
	outFields->push(HX_HCSTRING("uMatrix","\x96","\xf0","\xab","\xf1"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ShaderData_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(ShaderData_obj,aAlpha),HX_HCSTRING("aAlpha","\x3d","\x17","\x62","\x7d")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(ShaderData_obj,aPosition),HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(ShaderData_obj,aTexCoord),HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2")},
	{hx::fsObject /*::openfl::display::ShaderInput_openfl_display_BitmapData*/ ,(int)offsetof(ShaderData_obj,uImage0),HX_HCSTRING("uImage0","\xca","\x0a","\x76","\x34")},
	{hx::fsObject /*::openfl::display::ShaderParameter_Float*/ ,(int)offsetof(ShaderData_obj,uMatrix),HX_HCSTRING("uMatrix","\x96","\xf0","\xab","\xf1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ShaderData_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderData_obj_sMemberFields[] = {
	HX_HCSTRING("aAlpha","\x3d","\x17","\x62","\x7d"),
	HX_HCSTRING("aPosition","\x2a","\x26","\x25","\x92"),
	HX_HCSTRING("aTexCoord","\xcf","\x8c","\x5d","\xf2"),
	HX_HCSTRING("uImage0","\xca","\x0a","\x76","\x34"),
	HX_HCSTRING("uMatrix","\x96","\xf0","\xab","\xf1"),
	::String(null()) };

static void ShaderData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderData_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderData_obj::__mClass;

void ShaderData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.ShaderData","\xd9","\x94","\x7c","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShaderData_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ShaderData_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderData_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
