// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif

namespace openfl{
namespace display{

void GraphicsPath_obj::__construct( ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic winding){
            	HX_STACK_FRAME("openfl.display.GraphicsPath","new",0x778d9d6c,"openfl.display.GraphicsPath.new","openfl/display/GraphicsPath.hx",18,0x0a58fcc2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(commands,"commands")
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(winding,"winding")
HXLINE(  20)		Bool _hx_tmp = hx::IsNull( winding );
HXDLIN(  20)		if (_hx_tmp) {
HXLINE(  22)			winding = (int)0;
            		}
HXLINE(  26)		this->commands = commands;
HXLINE(  27)		this->data = data;
HXLINE(  28)		this->winding = winding;
HXLINE(  29)		this->_hx___graphicsDataType = ::openfl::display::GraphicsDataType_obj::PATH_dyn();
            	}

Dynamic GraphicsPath_obj::__CreateEmpty() { return new GraphicsPath_obj; }

hx::ObjectPtr< GraphicsPath_obj > GraphicsPath_obj::__new( ::openfl::_Vector::IntVector commands, ::openfl::_Vector::FloatVector data, ::Dynamic winding)
{
	hx::ObjectPtr< GraphicsPath_obj > _hx_result = new GraphicsPath_obj();
	_hx_result->__construct(commands,data,winding);
	return _hx_result;
}

Dynamic GraphicsPath_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GraphicsPath_obj > _hx_result = new GraphicsPath_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

static ::openfl::display::IGraphicsData_obj _hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsData= {
};

static ::openfl::display::IGraphicsPath_obj _hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsPath= {
};

void *GraphicsPath_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xc177ee0c: return &_hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsData;
		case (int)0xc9667d87: return &_hx_openfl_display_GraphicsPath__hx_openfl_display_IGraphicsPath;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void GraphicsPath_obj::curveTo(Float controlX,Float controlY,Float anchorX,Float anchorY){
            	HX_STACK_FRAME("openfl.display.GraphicsPath","curveTo",0xe3fba316,"openfl.display.GraphicsPath.curveTo","openfl/display/GraphicsPath.hx",36,0x0a58fcc2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(controlX,"controlX")
            	HX_STACK_ARG(controlY,"controlY")
            	HX_STACK_ARG(anchorX,"anchorX")
            	HX_STACK_ARG(anchorY,"anchorY")
HXLINE(  36)		Bool _hx_tmp;
HXDLIN(  36)		Bool _hx_tmp1 = hx::IsNotNull( this->commands );
HXDLIN(  36)		if (_hx_tmp1) {
HXLINE(  36)			_hx_tmp = hx::IsNotNull( this->data );
            		}
            		else {
HXLINE(  36)			_hx_tmp = false;
            		}
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  38)			this->commands->push((int)3);
HXLINE(  39)			this->data->push(anchorX);
HXLINE(  40)			this->data->push(anchorY);
HXLINE(  41)			this->data->push(controlX);
HXLINE(  42)			this->data->push(controlY);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,curveTo,(void))

void GraphicsPath_obj::lineTo(Float x,Float y){
            	HX_STACK_FRAME("openfl.display.GraphicsPath","lineTo",0x87b32903,"openfl.display.GraphicsPath.lineTo","openfl/display/GraphicsPath.hx",51,0x0a58fcc2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  51)		Bool _hx_tmp;
HXDLIN(  51)		Bool _hx_tmp1 = hx::IsNotNull( this->commands );
HXDLIN(  51)		if (_hx_tmp1) {
HXLINE(  51)			_hx_tmp = hx::IsNotNull( this->data );
            		}
            		else {
HXLINE(  51)			_hx_tmp = false;
            		}
HXDLIN(  51)		if (_hx_tmp) {
HXLINE(  53)			this->commands->push((int)2);
HXLINE(  54)			this->data->push(x);
HXLINE(  55)			this->data->push(y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,lineTo,(void))

void GraphicsPath_obj::moveTo(Float x,Float y){
            	HX_STACK_FRAME("openfl.display.GraphicsPath","moveTo",0x67bfb560,"openfl.display.GraphicsPath.moveTo","openfl/display/GraphicsPath.hx",64,0x0a58fcc2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  64)		Bool _hx_tmp;
HXDLIN(  64)		Bool _hx_tmp1 = hx::IsNotNull( this->commands );
HXDLIN(  64)		if (_hx_tmp1) {
HXLINE(  64)			_hx_tmp = hx::IsNotNull( this->data );
            		}
            		else {
HXLINE(  64)			_hx_tmp = false;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  66)			this->commands->push((int)1);
HXLINE(  67)			this->data->push(x);
HXLINE(  68)			this->data->push(y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,moveTo,(void))

void GraphicsPath_obj::wideLineTo(Float x,Float y){
            	HX_STACK_FRAME("openfl.display.GraphicsPath","wideLineTo",0xae2a1f76,"openfl.display.GraphicsPath.wideLineTo","openfl/display/GraphicsPath.hx",77,0x0a58fcc2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  77)		Bool _hx_tmp;
HXDLIN(  77)		Bool _hx_tmp1 = hx::IsNotNull( this->commands );
HXDLIN(  77)		if (_hx_tmp1) {
HXLINE(  77)			_hx_tmp = hx::IsNotNull( this->data );
            		}
            		else {
HXLINE(  77)			_hx_tmp = false;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  79)			this->commands->push((int)2);
HXLINE(  80)			this->data->push(x);
HXLINE(  81)			this->data->push(y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideLineTo,(void))

void GraphicsPath_obj::wideMoveTo(Float x,Float y){
            	HX_STACK_FRAME("openfl.display.GraphicsPath","wideMoveTo",0x8e36abd3,"openfl.display.GraphicsPath.wideMoveTo","openfl/display/GraphicsPath.hx",90,0x0a58fcc2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(y,"y")
HXLINE(  90)		Bool _hx_tmp;
HXDLIN(  90)		Bool _hx_tmp1 = hx::IsNotNull( this->commands );
HXDLIN(  90)		if (_hx_tmp1) {
HXLINE(  90)			_hx_tmp = hx::IsNotNull( this->data );
            		}
            		else {
HXLINE(  90)			_hx_tmp = false;
            		}
HXDLIN(  90)		if (_hx_tmp) {
HXLINE(  92)			this->commands->push((int)1);
HXLINE(  93)			this->data->push(x);
HXLINE(  94)			this->data->push(y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideMoveTo,(void))


GraphicsPath_obj::GraphicsPath_obj()
{
}

void GraphicsPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsPath);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(winding,"winding");
	HX_MARK_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(winding,"winding");
	HX_VISIT_MEMBER_NAME(_hx___graphicsDataType,"__graphicsDataType");
}

hx::Val GraphicsPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return hx::Val( lineTo_dyn()); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return hx::Val( moveTo_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { return hx::Val( winding); }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return hx::Val( curveTo_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return hx::Val( commands); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wideLineTo") ) { return hx::Val( wideLineTo_dyn()); }
		if (HX_FIELD_EQ(inName,"wideMoveTo") ) { return hx::Val( wideMoveTo_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return hx::Val( _hx___graphicsDataType); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GraphicsPath_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { winding=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { _hx___graphicsDataType=inValue.Cast< ::hx::EnumBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GraphicsPath_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(GraphicsPath_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(GraphicsPath_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GraphicsPath_obj,winding),HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsPath_obj,_hx___graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GraphicsPath_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsPath_obj_sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("wideLineTo","\x02","\xf3","\x82","\xc8"),
	HX_HCSTRING("wideMoveTo","\x5f","\x7f","\x8f","\xa8"),
	::String(null()) };

static void GraphicsPath_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicsPath_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
};

#endif

hx::Class GraphicsPath_obj::__mClass;

void GraphicsPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsPath","\x7a","\xb7","\x47","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GraphicsPath_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GraphicsPath_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicsPath_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsPath_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsPath_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
