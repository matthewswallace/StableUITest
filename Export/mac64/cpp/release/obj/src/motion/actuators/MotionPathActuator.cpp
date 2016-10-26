// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_motion_IComponentPath
#include <motion/IComponentPath.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_MotionPathActuator
#include <motion/actuators/MotionPathActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyPathDetails
#include <motion/actuators/PropertyPathDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif

namespace motion{
namespace actuators{

void MotionPathActuator_obj::__construct( ::Dynamic target,Float duration, ::Dynamic properties){
            	HX_STACK_FRAME("motion.actuators.MotionPathActuator","new",0x45f2d072,"motion.actuators.MotionPathActuator.new","motion/actuators/MotionPathActuator.hx",12,0x51ab64bc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(target,"target")
            	HX_STACK_ARG(duration,"duration")
            	HX_STACK_ARG(properties,"properties")
HXLINE(  12)		super::__construct(target,duration,properties);
            	}

Dynamic MotionPathActuator_obj::__CreateEmpty() { return new MotionPathActuator_obj; }

hx::ObjectPtr< MotionPathActuator_obj > MotionPathActuator_obj::__new( ::Dynamic target,Float duration, ::Dynamic properties)
{
	hx::ObjectPtr< MotionPathActuator_obj > _hx_result = new MotionPathActuator_obj();
	_hx_result->__construct(target,duration,properties);
	return _hx_result;
}

Dynamic MotionPathActuator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MotionPathActuator_obj > _hx_result = new MotionPathActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

void MotionPathActuator_obj::apply(){
            	HX_STACK_FRAME("motion.actuators.MotionPathActuator","apply",0x4fa82e00,"motion.actuators.MotionPathActuator.apply","motion/actuators/MotionPathActuator.hx",19,0x51ab64bc)
            	HX_STACK_THIS(this)
HXLINE(  19)		HX_VARI( Int,_g) = (int)0;
HXDLIN(  19)		HX_VARI( ::Array< ::String >,_g1) = ::Reflect_obj::fields(this->properties);
HXDLIN(  19)		while((_g < _g1->length)){
HXLINE(  19)			HX_VARI( ::String,propertyName) = _g1->__get(_g);
HXDLIN(  19)			++_g;
HXLINE(  23)			Bool _hx_tmp = ::Reflect_obj::hasField(this->target,propertyName);
HXDLIN(  23)			if (_hx_tmp) {
HXLINE(  25)				Float _hx_tmp1 = ::motion::IComponentPath_obj::get_end(::Reflect_obj::field(this->properties,propertyName));
HXDLIN(  25)				::Reflect_obj::setField(this->target,propertyName,_hx_tmp1);
            			}
            			else {
HXLINE(  29)				Float _hx_tmp2 = ::motion::IComponentPath_obj::get_end(::Reflect_obj::field(this->properties,propertyName));
HXDLIN(  29)				::Reflect_obj::setProperty(this->target,propertyName,_hx_tmp2);
            			}
            		}
            	}


void MotionPathActuator_obj::initialize(){
            	HX_STACK_FRAME("motion.actuators.MotionPathActuator","initialize",0x2e88377e,"motion.actuators.MotionPathActuator.initialize","motion/actuators/MotionPathActuator.hx",44,0x51ab64bc)
            	HX_STACK_THIS(this)
HXLINE(  46)		HX_VAR(  ::motion::actuators::PropertyPathDetails,details);
HXLINE(  47)		HX_VAR( ::Dynamic,path);
HXLINE(  49)		{
HXLINE(  49)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  49)			HX_VARI( ::Array< ::String >,_g1) = ::Reflect_obj::fields(this->properties);
HXDLIN(  49)			while((_g < _g1->length)){
HXLINE(  49)				HX_VARI( ::String,propertyName) = _g1->__get(_g);
HXDLIN(  49)				++_g;
HXLINE(  51)				path = ::Reflect_obj::field(this->properties,propertyName);
HXLINE(  53)				Bool _hx_tmp = hx::IsNotNull( path );
HXDLIN(  53)				if (_hx_tmp) {
HXLINE(  55)					HX_VARI( Bool,isField) = true;
HXLINE(  59)					Bool _hx_tmp1 = ::Reflect_obj::hasField(this->target,propertyName);
HXDLIN(  59)					if (_hx_tmp1) {
HXLINE(  61)						path->__SetField(HX_("start",62,74,0b,84),::Reflect_obj::field(this->target,propertyName),hx::paccDynamic);
            					}
            					else {
HXLINE(  65)						isField = false;
HXLINE(  66)						path->__SetField(HX_("start",62,74,0b,84),::Reflect_obj::getProperty(this->target,propertyName),hx::paccDynamic);
            					}
HXLINE(  76)					details =  ::motion::actuators::PropertyPathDetails_obj::__new(this->target,propertyName,path,isField);
HXLINE(  77)					this->propertyDetails->push(details);
            				}
            			}
            		}
HXLINE(  83)		this->detailsLength = this->propertyDetails->length;
HXLINE(  84)		this->initialized = true;
            	}


void MotionPathActuator_obj::update(Float currentTime){
            	HX_STACK_FRAME("motion.actuators.MotionPathActuator","update",0x5aac5d37,"motion.actuators.MotionPathActuator.update","motion/actuators/MotionPathActuator.hx",91,0x51ab64bc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(currentTime,"currentTime")
HXLINE(  91)		Bool _hx_tmp = !(this->paused);
HXDLIN(  91)		if (_hx_tmp) {
HXLINE(  94)			HX_VAR( Float,easing);
HXLINE(  96)			HX_VARI( Float,tweenPosition) = ((Float)(currentTime - this->timeOffset) / (Float)this->duration);
HXLINE(  98)			Bool _hx_tmp1 = (tweenPosition > (int)1);
HXDLIN(  98)			if (_hx_tmp1) {
HXLINE( 100)				tweenPosition = (int)1;
            			}
HXLINE( 104)			Bool _hx_tmp2 = !(this->initialized);
HXDLIN( 104)			if (_hx_tmp2) {
HXLINE( 106)				this->initialize();
            			}
HXLINE( 110)			Bool _hx_tmp3 = !(this->special);
HXDLIN( 110)			if (_hx_tmp3) {
HXLINE( 112)				easing = ::motion::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
HXLINE( 114)				{
HXLINE( 114)					HX_VARI( Int,_g) = (int)0;
HXDLIN( 114)					HX_VARI( ::Array< ::Dynamic>,_g1) = this->propertyDetails;
HXDLIN( 114)					while((_g < _g1->length)){
HXLINE( 114)						HX_VARI(  ::motion::actuators::PropertyDetails,details) = _g1->__get(_g).StaticCast<  ::motion::actuators::PropertyDetails >();
HXDLIN( 114)						++_g;
HXLINE( 116)						Bool _hx_tmp4 = details->isField;
HXDLIN( 116)						if (_hx_tmp4) {
HXLINE( 118)							Float _hx_tmp5 = ::motion::IComponentPath_obj::calculate(hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details)->path,easing);
HXDLIN( 118)							::Reflect_obj::setField(details->target,details->propertyName,_hx_tmp5);
            						}
            						else {
HXLINE( 123)							Float _hx_tmp6 = ::motion::IComponentPath_obj::calculate(hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details)->path,easing);
HXDLIN( 123)							::Reflect_obj::setProperty(details->target,details->propertyName,_hx_tmp6);
            						}
            					}
            				}
            			}
            			else {
HXLINE( 132)				Bool _hx_tmp7 = !(this->_reverse);
HXDLIN( 132)				if (_hx_tmp7) {
HXLINE( 134)					easing = ::motion::easing::IEasing_obj::calculate(this->_ease,tweenPosition);
            				}
            				else {
HXLINE( 138)					easing = ::motion::easing::IEasing_obj::calculate(this->_ease,((int)1 - tweenPosition));
            				}
HXLINE( 144)				{
HXLINE( 144)					HX_VARI_NAME( Int,_g2,"_g") = (int)0;
HXDLIN( 144)					HX_VARI_NAME( ::Array< ::Dynamic>,_g11,"_g1") = this->propertyDetails;
HXDLIN( 144)					while((_g2 < _g11->length)){
HXLINE( 144)						HX_VARI_NAME(  ::motion::actuators::PropertyDetails,details1,"details") = _g11->__get(_g2).StaticCast<  ::motion::actuators::PropertyDetails >();
HXDLIN( 144)						++_g2;
HXLINE( 146)						Bool _hx_tmp8 = !(this->_snapping);
HXDLIN( 146)						if (_hx_tmp8) {
HXLINE( 148)							Bool _hx_tmp9 = details1->isField;
HXDLIN( 148)							if (_hx_tmp9) {
HXLINE( 150)								Float _hx_tmp10 = ::motion::IComponentPath_obj::calculate(hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details1)->path,easing);
HXDLIN( 150)								::Reflect_obj::setField(details1->target,details1->propertyName,_hx_tmp10);
            							}
            							else {
HXLINE( 155)								Float _hx_tmp11 = ::motion::IComponentPath_obj::calculate(hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details1)->path,easing);
HXDLIN( 155)								::Reflect_obj::setProperty(details1->target,details1->propertyName,_hx_tmp11);
            							}
            						}
            						else {
HXLINE( 162)							Bool _hx_tmp12 = details1->isField;
HXDLIN( 162)							if (_hx_tmp12) {
HXLINE( 164)								Float _hx_tmp13 = ::motion::IComponentPath_obj::calculate(hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details1)->path,easing);
HXDLIN( 164)								Int _hx_tmp14 = ::Math_obj::round(_hx_tmp13);
HXDLIN( 164)								::Reflect_obj::setField(details1->target,details1->propertyName,_hx_tmp14);
            							}
            							else {
HXLINE( 169)								Float _hx_tmp15 = ::motion::IComponentPath_obj::calculate(hx::TCast<  ::motion::actuators::PropertyPathDetails >::cast(details1)->path,easing);
HXDLIN( 169)								Int _hx_tmp16 = ::Math_obj::round(_hx_tmp15);
HXDLIN( 169)								::Reflect_obj::setProperty(details1->target,details1->propertyName,_hx_tmp16);
            							}
            						}
            					}
            				}
            			}
HXLINE( 181)			if ((tweenPosition == (int)1)) {
HXLINE( 183)				Bool _hx_tmp17 = (this->_repeat == (int)0);
HXDLIN( 183)				if (_hx_tmp17) {
HXLINE( 185)					this->active = false;
HXLINE( 187)					Bool _hx_tmp18;
HXDLIN( 187)					Bool _hx_tmp19 = this->toggleVisible;
HXDLIN( 187)					if (_hx_tmp19) {
HXLINE( 187)						HX_VARI(  ::Dynamic,target) = this->target;
HXDLIN( 187)						HX_VARI(  ::Dynamic,value) = null();
HXDLIN( 187)						Bool _hx_tmp20 = ::Reflect_obj::hasField(target,HX_("alpha",5e,a7,96,21));
HXDLIN( 187)						if (_hx_tmp20) {
HXLINE( 187)							value = ::Reflect_obj::field(target,HX_("alpha",5e,a7,96,21));
            						}
            						else {
HXLINE( 187)							value = ::Reflect_obj::getProperty(target,HX_("alpha",5e,a7,96,21));
            						}
HXDLIN( 187)						_hx_tmp18 = hx::IsEq( value,(int)0 );
            					}
            					else {
HXLINE( 187)						_hx_tmp18 = false;
            					}
HXDLIN( 187)					if (_hx_tmp18) {
HXLINE( 189)						HX_VARI_NAME(  ::Dynamic,target1,"target") = this->target;
HXDLIN( 189)						Bool _hx_tmp21 = ::Reflect_obj::hasField(target1,HX_("visible",72,78,24,a3));
HXDLIN( 189)						if (_hx_tmp21) {
HXLINE( 189)							::Reflect_obj::setField(target1,HX_("visible",72,78,24,a3),false);
            						}
            						else {
HXLINE( 189)							::Reflect_obj::setProperty(target1,HX_("visible",72,78,24,a3),false);
            						}
            					}
HXLINE( 193)					this->complete(true);
HXLINE( 194)					return;
            				}
            				else {
HXLINE( 198)					Bool _hx_tmp22 = hx::IsNotNull( this->_onRepeat );
HXDLIN( 198)					if (_hx_tmp22) {
HXLINE( 200)						HX_VARI(  ::Dynamic,method) = this->_onRepeat;
HXDLIN( 200)						HX_VARI( ::cpp::VirtualArray,params) = this->_onRepeatParams;
HXDLIN( 200)						Bool _hx_tmp23 = hx::IsNull( params );
HXDLIN( 200)						if (_hx_tmp23) {
HXLINE( 200)							params = ::cpp::VirtualArray_obj::__new(0);
            						}
HXDLIN( 200)						::Reflect_obj::callMethod(method,method,params);
            					}
HXLINE( 204)					Bool _hx_tmp24 = this->_reflect;
HXDLIN( 204)					if (_hx_tmp24) {
HXLINE( 206)						this->_reverse = !(this->_reverse);
            					}
HXLINE( 210)					this->startTime = currentTime;
HXLINE( 211)					this->timeOffset = (this->startTime + this->_delay);
HXLINE( 213)					Bool _hx_tmp25 = (this->_repeat > (int)0);
HXDLIN( 213)					if (_hx_tmp25) {
HXLINE( 215)						this->_repeat--;
            					}
            				}
            			}
HXLINE( 223)			Bool _hx_tmp26 = this->sendChange;
HXDLIN( 223)			if (_hx_tmp26) {
HXLINE( 225)				this->change();
            			}
            		}
            	}



MotionPathActuator_obj::MotionPathActuator_obj()
{
}

hx::Val MotionPathActuator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return hx::Val( apply_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *MotionPathActuator_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *MotionPathActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String MotionPathActuator_obj_sMemberFields[] = {
	HX_HCSTRING("apply","\x6e","\x85","\x3b","\x24"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void MotionPathActuator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MotionPathActuator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MotionPathActuator_obj::__mClass,"__mClass");
};

#endif

hx::Class MotionPathActuator_obj::__mClass;

void MotionPathActuator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.actuators.MotionPathActuator","\x80","\x6f","\x09","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MotionPathActuator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MotionPathActuator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MotionPathActuator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MotionPathActuator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MotionPathActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MotionPathActuator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace actuators
