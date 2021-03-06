// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_motion_easing_ElasticEaseIn
#include <motion/easing/ElasticEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

namespace motion{
namespace easing{

void ElasticEaseIn_obj::__construct(Float a,Float p){
            	HX_STACK_FRAME("motion.easing.ElasticEaseIn","new",0x30f7ccaf,"motion.easing.ElasticEaseIn.new","motion/easing/Elastic.hx",51,0x73ac9cf4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(p,"p")
HXLINE(  53)		this->a = a;
HXLINE(  54)		this->p = p;
            	}

Dynamic ElasticEaseIn_obj::__CreateEmpty() { return new ElasticEaseIn_obj; }

hx::ObjectPtr< ElasticEaseIn_obj > ElasticEaseIn_obj::__new(Float a,Float p)
{
	hx::ObjectPtr< ElasticEaseIn_obj > _hx_result = new ElasticEaseIn_obj();
	_hx_result->__construct(a,p);
	return _hx_result;
}

Dynamic ElasticEaseIn_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ElasticEaseIn_obj > _hx_result = new ElasticEaseIn_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

static ::motion::easing::IEasing_obj _hx_motion_easing_ElasticEaseIn__hx_motion_easing_IEasing= {
	( Float (hx::Object::*)(Float))&::motion::easing::ElasticEaseIn_obj::calculate,
	( Float (hx::Object::*)(Float,Float,Float,Float))&::motion::easing::ElasticEaseIn_obj::ease,
};

void *ElasticEaseIn_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing_ElasticEaseIn__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float ElasticEaseIn_obj::calculate(Float k){
            	HX_STACK_FRAME("motion.easing.ElasticEaseIn","calculate",0xc85336f5,"motion.easing.ElasticEaseIn.calculate","motion/easing/Elastic.hx",59,0x73ac9cf4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(k,"k")
HXLINE(  61)		if ((k == (int)0)) {
HXLINE(  61)			return (int)0;
            		}
HXDLIN(  61)		if ((k == (int)1)) {
HXLINE(  61)			return (int)1;
            		}
HXLINE(  62)		HX_VAR( Float,s);
HXLINE(  63)		Bool _hx_tmp = (this->a < (int)1);
HXDLIN(  63)		if (_hx_tmp) {
HXLINE(  63)			this->a = (int)1;
HXDLIN(  63)			s = ((Float)this->p / (Float)(int)4);
            		}
            		else {
HXLINE(  64)			Float _hx_tmp1 = ((Float)this->p / (Float)((int)2 * ::Math_obj::PI));
HXDLIN(  64)			Float _hx_tmp2 = ((Float)(int)1 / (Float)this->a);
HXDLIN(  64)			Float _hx_tmp3 = ::Math_obj::asin(_hx_tmp2);
HXDLIN(  64)			s = (_hx_tmp1 * _hx_tmp3);
            		}
HXLINE(  65)		Float _hx_tmp4 = this->a;
HXDLIN(  65)		Float _hx_tmp5 = --k;
HXDLIN(  65)		Float _hx_tmp6 = ::Math_obj::pow((int)2,((int)10 * _hx_tmp5));
HXDLIN(  65)		Float _hx_tmp7 = (_hx_tmp4 * _hx_tmp6);
HXDLIN(  65)		Float _hx_tmp8 = ((Float)((k - s) * ((int)2 * ::Math_obj::PI)) / (Float)this->p);
HXDLIN(  65)		Float _hx_tmp9 = ::Math_obj::sin(_hx_tmp8);
HXDLIN(  65)		return -((_hx_tmp7 * _hx_tmp9));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseIn_obj,calculate,return )

Float ElasticEaseIn_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACK_FRAME("motion.easing.ElasticEaseIn","ease",0xa1e554bf,"motion.easing.ElasticEaseIn.ease","motion/easing/Elastic.hx",70,0x73ac9cf4)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
HXLINE(  72)		if ((t == (int)0)) {
HXLINE(  73)			return b;
            		}
HXLINE(  75)		hx::DivEq(t,d);
HXDLIN(  75)		if ((t == (int)1)) {
HXLINE(  76)			return (b + c);
            		}
HXLINE(  78)		HX_VAR( Float,s);
HXLINE(  79)		Float _hx_tmp = this->a;
HXDLIN(  79)		Float _hx_tmp1 = ::Math_obj::abs(c);
HXDLIN(  79)		if ((_hx_tmp < _hx_tmp1)) {
HXLINE(  80)			this->a = c;
HXLINE(  81)			s = ((Float)this->p / (Float)(int)4);
            		}
            		else {
HXLINE(  84)			Float _hx_tmp2 = ((Float)this->p / (Float)((int)2 * ::Math_obj::PI));
HXDLIN(  84)			Float _hx_tmp3 = ((Float)c / (Float)this->a);
HXDLIN(  84)			Float _hx_tmp4 = ::Math_obj::asin(_hx_tmp3);
HXDLIN(  84)			s = (_hx_tmp2 * _hx_tmp4);
            		}
HXLINE(  86)		Float _hx_tmp5 = this->a;
HXDLIN(  86)		Float _hx_tmp6 = --t;
HXDLIN(  86)		Float _hx_tmp7 = ::Math_obj::pow((int)2,((int)10 * _hx_tmp6));
HXDLIN(  86)		Float _hx_tmp8 = (_hx_tmp5 * _hx_tmp7);
HXDLIN(  86)		Float _hx_tmp9 = ((Float)(((t * d) - s) * ((int)2 * ::Math_obj::PI)) / (Float)this->p);
HXDLIN(  86)		Float _hx_tmp10 = ::Math_obj::sin(_hx_tmp9);
HXDLIN(  86)		return (-((_hx_tmp8 * _hx_tmp10)) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseIn_obj,ease,return )


ElasticEaseIn_obj::ElasticEaseIn_obj()
{
}

hx::Val ElasticEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return hx::Val( a); }
		if (HX_FIELD_EQ(inName,"p") ) { return hx::Val( p); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return hx::Val( ease_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return hx::Val( calculate_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ElasticEaseIn_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("p","\x70","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ElasticEaseIn_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ElasticEaseIn_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(ElasticEaseIn_obj,p),HX_HCSTRING("p","\x70","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ElasticEaseIn_obj_sStaticStorageInfo = 0;
#endif

static ::String ElasticEaseIn_obj_sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("p","\x70","\x00","\x00","\x00"),
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void ElasticEaseIn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElasticEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ElasticEaseIn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class ElasticEaseIn_obj::__mClass;

void ElasticEaseIn_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.ElasticEaseIn","\x3d","\x49","\x72","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ElasticEaseIn_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ElasticEaseIn_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ElasticEaseIn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ElasticEaseIn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ElasticEaseIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ElasticEaseIn_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
