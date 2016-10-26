// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_BounceEaseIn
#include <motion/easing/BounceEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

namespace motion{
namespace easing{

void BounceEaseIn_obj::__construct(){
            	HX_STACK_FRAME("motion.easing.BounceEaseIn","new",0x66965698,"motion.easing.BounceEaseIn.new","motion/easing/Bounce.hx",50,0xc6b45fab)
            	HX_STACK_THIS(this)
            	}

Dynamic BounceEaseIn_obj::__CreateEmpty() { return new BounceEaseIn_obj; }

hx::ObjectPtr< BounceEaseIn_obj > BounceEaseIn_obj::__new()
{
	hx::ObjectPtr< BounceEaseIn_obj > _hx_result = new BounceEaseIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic BounceEaseIn_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BounceEaseIn_obj > _hx_result = new BounceEaseIn_obj();
	_hx_result->__construct();
	return _hx_result;
}

static ::motion::easing::IEasing_obj _hx_motion_easing_BounceEaseIn__hx_motion_easing_IEasing= {
	( Float (hx::Object::*)(Float))&::motion::easing::BounceEaseIn_obj::calculate,
	( Float (hx::Object::*)(Float,Float,Float,Float))&::motion::easing::BounceEaseIn_obj::ease,
};

void *BounceEaseIn_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing_BounceEaseIn__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float BounceEaseIn_obj::calculate(Float k){
            	HX_STACK_FRAME("motion.easing.BounceEaseIn","calculate",0xde07959e,"motion.easing.BounceEaseIn.calculate","motion/easing/Bounce.hx",57,0xc6b45fab)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(k,"k")
HXLINE(  57)		HX_VARI( Float,t) = ((int)1 - k);
HXDLIN(  57)		Float _hx_tmp;
HXDLIN(  57)		hx::DivEq(t,(int)1);
HXDLIN(  57)		Bool _hx_tmp1 = (t < ((Float)0.363636363636363646));
HXDLIN(  57)		if (_hx_tmp1) {
HXLINE(  57)			_hx_tmp = ((((Float)7.5625) * t) * t);
            		}
            		else {
HXLINE(  57)			Bool _hx_tmp2 = (t < ((Float)0.727272727272727293));
HXDLIN(  57)			if (_hx_tmp2) {
HXLINE(  57)				hx::SubEq(t,((Float)0.545454545454545414));
HXDLIN(  57)				_hx_tmp = (((((Float)7.5625) * t) * t) + ((Float).75));
            			}
            			else {
HXLINE(  57)				Bool _hx_tmp3 = (t < ((Float)0.909090909090909061));
HXDLIN(  57)				if (_hx_tmp3) {
HXLINE(  57)					hx::SubEq(t,((Float)0.818181818181818232));
HXDLIN(  57)					_hx_tmp = (((((Float)7.5625) * t) * t) + ((Float).9375));
            				}
            				else {
HXLINE(  57)					hx::SubEq(t,((Float)0.954545454545454586));
HXDLIN(  57)					_hx_tmp = (((((Float)7.5625) * t) * t) + ((Float).984375));
            				}
            			}
            		}
HXDLIN(  57)		return ((int)1 - _hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BounceEaseIn_obj,calculate,return )

Float BounceEaseIn_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACK_FRAME("motion.easing.BounceEaseIn","ease",0x56ff76b6,"motion.easing.BounceEaseIn.ease","motion/easing/Bounce.hx",62,0xc6b45fab)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
HXLINE(  62)		HX_VARI_NAME( Float,t1,"t") = (d - t);
HXDLIN(  62)		Float _hx_tmp;
HXDLIN(  62)		hx::DivEq(t1,d);
HXDLIN(  62)		Bool _hx_tmp1 = (t1 < ((Float)0.363636363636363646));
HXDLIN(  62)		if (_hx_tmp1) {
HXLINE(  62)			_hx_tmp = (c * ((((Float)7.5625) * t1) * t1));
            		}
            		else {
HXLINE(  62)			Bool _hx_tmp2 = (t1 < ((Float)0.727272727272727293));
HXDLIN(  62)			if (_hx_tmp2) {
HXLINE(  62)				hx::SubEq(t1,((Float)0.545454545454545414));
HXDLIN(  62)				_hx_tmp = (c * (((((Float)7.5625) * t1) * t1) + ((Float).75)));
            			}
            			else {
HXLINE(  62)				Bool _hx_tmp3 = (t1 < ((Float)0.909090909090909061));
HXDLIN(  62)				if (_hx_tmp3) {
HXLINE(  62)					hx::SubEq(t1,((Float)0.818181818181818232));
HXDLIN(  62)					_hx_tmp = (c * (((((Float)7.5625) * t1) * t1) + ((Float).9375)));
            				}
            				else {
HXLINE(  62)					hx::SubEq(t1,((Float)0.954545454545454586));
HXDLIN(  62)					_hx_tmp = (c * (((((Float)7.5625) * t1) * t1) + ((Float).984375)));
            				}
            			}
            		}
HXDLIN(  62)		return ((c - _hx_tmp) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(BounceEaseIn_obj,ease,return )

Float BounceEaseIn_obj::_ease(Float t,Float b,Float c,Float d){
            	HX_STACK_FRAME("motion.easing.BounceEaseIn","_ease",0x56b82c05,"motion.easing.BounceEaseIn._ease","motion/easing/Bounce.hx",66,0xc6b45fab)
            	HX_STACK_ARG(t,"t")
            	HX_STACK_ARG(b,"b")
            	HX_STACK_ARG(c,"c")
            	HX_STACK_ARG(d,"d")
HXLINE(  66)		HX_VARI_NAME( Float,t1,"t") = (d - t);
HXDLIN(  66)		Float _hx_tmp;
HXDLIN(  66)		hx::DivEq(t1,d);
HXDLIN(  66)		Bool _hx_tmp1 = (t1 < ((Float)0.363636363636363646));
HXDLIN(  66)		if (_hx_tmp1) {
HXLINE(  66)			_hx_tmp = (c * ((((Float)7.5625) * t1) * t1));
            		}
            		else {
HXLINE(  66)			Bool _hx_tmp2 = (t1 < ((Float)0.727272727272727293));
HXDLIN(  66)			if (_hx_tmp2) {
HXLINE(  66)				hx::SubEq(t1,((Float)0.545454545454545414));
HXDLIN(  66)				_hx_tmp = (c * (((((Float)7.5625) * t1) * t1) + ((Float).75)));
            			}
            			else {
HXLINE(  66)				Bool _hx_tmp3 = (t1 < ((Float)0.909090909090909061));
HXDLIN(  66)				if (_hx_tmp3) {
HXLINE(  66)					hx::SubEq(t1,((Float)0.818181818181818232));
HXDLIN(  66)					_hx_tmp = (c * (((((Float)7.5625) * t1) * t1) + ((Float).9375)));
            				}
            				else {
HXLINE(  66)					hx::SubEq(t1,((Float)0.954545454545454586));
HXDLIN(  66)					_hx_tmp = (c * (((((Float)7.5625) * t1) * t1) + ((Float).984375)));
            				}
            			}
            		}
HXDLIN(  66)		return ((c - _hx_tmp) + b);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(BounceEaseIn_obj,_ease,return )


BounceEaseIn_obj::BounceEaseIn_obj()
{
}

hx::Val BounceEaseIn_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return hx::Val( ease_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return hx::Val( calculate_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool BounceEaseIn_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { outValue = _ease_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *BounceEaseIn_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *BounceEaseIn_obj_sStaticStorageInfo = 0;
#endif

static ::String BounceEaseIn_obj_sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void BounceEaseIn_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BounceEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BounceEaseIn_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BounceEaseIn_obj::__mClass,"__mClass");
};

#endif

hx::Class BounceEaseIn_obj::__mClass;

static ::String BounceEaseIn_obj_sStaticFields[] = {
	HX_HCSTRING("_ease","\xcd","\xa7","\x1d","\xf6"),
	::String(null())
};

void BounceEaseIn_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.BounceEaseIn","\xa6","\x6a","\x59","\x19");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BounceEaseIn_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BounceEaseIn_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BounceEaseIn_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BounceEaseIn_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BounceEaseIn_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BounceEaseIn_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BounceEaseIn_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BounceEaseIn_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing