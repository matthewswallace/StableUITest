// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__List_ListNode
#include <_List/ListNode.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_easing_Back
#include <motion/easing/Back.h>
#endif
#ifndef INCLUDED_motion_easing_Bounce
#include <motion/easing/Bounce.h>
#endif
#ifndef INCLUDED_motion_easing_Cubic
#include <motion/easing/Cubic.h>
#endif
#ifndef INCLUDED_motion_easing_Elastic
#include <motion/easing/Elastic.h>
#endif
#ifndef INCLUDED_motion_easing_Expo
#include <motion/easing/Expo.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_motion_easing_Quad
#include <motion/easing/Quad.h>
#endif
#ifndef INCLUDED_motion_easing_Quart
#include <motion/easing/Quart.h>
#endif
#ifndef INCLUDED_motion_easing_Quint
#include <motion/easing/Quint.h>
#endif
#ifndef INCLUDED_motion_easing_Sine
#include <motion/easing/Sine.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_ru_stablex_TweenSprite
#include <ru/stablex/TweenSprite.h>
#endif

namespace ru{
namespace stablex{

void TweenSprite_obj::__construct(){
            	HX_STACK_FRAME("ru.stablex.TweenSprite","new",0xc43762e6,"ru.stablex.TweenSprite.new","ru/stablex/TweenSprite.hx",25,0x04d763cc)
            	HX_STACK_THIS(this)
HXLINE(  25)		super::__construct();
            	}

Dynamic TweenSprite_obj::__CreateEmpty() { return new TweenSprite_obj; }

hx::ObjectPtr< TweenSprite_obj > TweenSprite_obj::__new()
{
	hx::ObjectPtr< TweenSprite_obj > _hx_result = new TweenSprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic TweenSprite_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TweenSprite_obj > _hx_result = new TweenSprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

void TweenSprite_obj::addEventListener(::String type, ::Dynamic listener,hx::Null< Bool >  __o_useCapture,hx::Null< Int >  __o_priority,hx::Null< Bool >  __o_useWeakReference){
Bool useCapture = __o_useCapture.Default(false);
Int priority = __o_priority.Default(0);
Bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACK_FRAME("ru.stablex.TweenSprite","addEventListener",0xfbe6dd87,"ru.stablex.TweenSprite.addEventListener","ru/stablex/TweenSprite.hx",39,0x04d763cc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
            	HX_STACK_ARG(priority,"priority")
            	HX_STACK_ARG(useWeakReference,"useWeakReference")
HXLINE(  41)		Bool _hx_tmp = hx::IsNull( this->_listeners );
HXDLIN(  41)		if (_hx_tmp) {
HXLINE(  43)			this->_listeners =  ::haxe::ds::StringMap_obj::__new();
            		}
HXLINE(  49)		HX_VARI(  ::List,listeners) = this->_listeners->get(type).StaticCast<  ::List >();
HXLINE(  52)		Bool _hx_tmp1 = hx::IsNull( listeners );
HXDLIN(  52)		if (_hx_tmp1) {
HXLINE(  53)			listeners =  ::List_obj::__new();
HXLINE(  54)			listeners->add(listener);
HXLINE(  55)			this->_listeners->set(type,listeners);
            		}
            		else {
HXLINE(  59)			listeners->add(listener);
            		}
HXLINE(  62)		this->super::addEventListener(type,listener,false,priority,useWeakReference);
            	}


Bool TweenSprite_obj::addUniqueListener(::String type, ::Dynamic listener,hx::Null< Bool >  __o_useCapture,hx::Null< Int >  __o_priority,hx::Null< Bool >  __o_useWeakReference){
Bool useCapture = __o_useCapture.Default(false);
Int priority = __o_priority.Default(0);
Bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACK_FRAME("ru.stablex.TweenSprite","addUniqueListener",0x6a9097ac,"ru.stablex.TweenSprite.addUniqueListener","ru/stablex/TweenSprite.hx",72,0x04d763cc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
            	HX_STACK_ARG(priority,"priority")
            	HX_STACK_ARG(useWeakReference,"useWeakReference")
HXLINE(  73)		Bool _hx_tmp = this->hasListener(type,listener);
HXDLIN(  73)		if (_hx_tmp) {
HXLINE(  74)			return false;
            		}
HXLINE(  77)		this->addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE(  78)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC5(TweenSprite_obj,addUniqueListener,return )

void TweenSprite_obj::removeEventListener(::String type, ::Dynamic listener,hx::Null< Bool >  __o_useCapture){
Bool useCapture = __o_useCapture.Default(false);
            	HX_STACK_FRAME("ru.stablex.TweenSprite","removeEventListener",0xe8bd0650,"ru.stablex.TweenSprite.removeEventListener","ru/stablex/TweenSprite.hx",86,0x04d763cc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(listener,"listener")
            	HX_STACK_ARG(useCapture,"useCapture")
HXLINE(  88)		Bool _hx_tmp = hx::IsNotNull( this->_listeners );
HXDLIN(  88)		if (_hx_tmp) {
HXLINE(  89)			Bool _hx_tmp1 = this->_listeners->exists(type);
HXDLIN(  89)			if (_hx_tmp1) {
HXLINE(  89)				this->_listeners->get(type).StaticCast<  ::List >()->remove(listener);
            			}
            		}
HXLINE(  92)		this->super::removeEventListener(type,listener,false);
            	}


void TweenSprite_obj::clearEvent(::String type){
            	HX_STACK_FRAME("ru.stablex.TweenSprite","clearEvent",0xcec97187,"ru.stablex.TweenSprite.clearEvent","ru/stablex/TweenSprite.hx",101,0x04d763cc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
HXLINE( 101)		Bool _hx_tmp = hx::IsNotNull( this->_listeners );
HXDLIN( 101)		if (_hx_tmp) {
HXLINE( 102)			HX_VARI(  ::List,listeners) = this->_listeners->get(type).StaticCast<  ::List >();
HXLINE( 103)			Bool _hx_tmp1 = hx::IsNotNull( listeners );
HXDLIN( 103)			if (_hx_tmp1) {
HXLINE( 104)				while((listeners->length > (int)0)){
HXLINE( 105)					 ::Dynamic _hx_tmp2 = listeners->first();
HXDLIN( 105)					this->removeEventListener(type,_hx_tmp2,null());
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TweenSprite_obj,clearEvent,(void))

Bool TweenSprite_obj::hasListener(::String event, ::Dynamic listener){
            	HX_STACK_FRAME("ru.stablex.TweenSprite","hasListener",0x020b6e74,"ru.stablex.TweenSprite.hasListener","ru/stablex/TweenSprite.hx",116,0x04d763cc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(event,"event")
            	HX_STACK_ARG(listener,"listener")
HXLINE( 117)		Bool _hx_tmp = hx::IsNull( this->_listeners );
HXDLIN( 117)		if (_hx_tmp) {
HXLINE( 117)			return false;
            		}
HXLINE( 119)		HX_VARI(  ::List,lst) = this->_listeners->get(event).StaticCast<  ::List >();
HXLINE( 120)		Bool _hx_tmp1 = hx::IsNull( lst );
HXDLIN( 120)		if (_hx_tmp1) {
HXLINE( 120)			return false;
            		}
HXLINE( 122)		{
HXLINE( 122)			HX_VARI(  ::_List::ListNode,_g_head) = lst->h;
HXDLIN( 122)			while(true){
HXLINE( 122)				Bool _hx_tmp2 = !(hx::IsNotNull( _g_head ));
HXDLIN( 122)				if (_hx_tmp2) {
HXLINE( 122)					goto _hx_goto_1;
            				}
HXDLIN( 122)				HX_VARI(  ::Dynamic,val) = _g_head->item;
HXLINE( 116)				_g_head = _g_head->next;
HXLINE( 123)				if (hx::IsEq( val,listener )) {
HXLINE( 123)					return true;
            				}
            			}
            			_hx_goto_1:;
            		}
HXLINE( 126)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(TweenSprite_obj,hasListener,return )

 ::motion::actuators::GenericActuator TweenSprite_obj::tween(Float duration, ::Dynamic properties,::String __o_easing,hx::Null< Bool >  __o_overwrite,hx::Class customActuator){
::String easing = __o_easing.Default(HX_HCSTRING("Linear.easeNone","\x4f","\x09","\xc7","\x02"));
Bool overwrite = __o_overwrite.Default(true);
            	HX_STACK_FRAME("ru.stablex.TweenSprite","tween",0x4b426a71,"ru.stablex.TweenSprite.tween","ru/stablex/TweenSprite.hx",136,0x04d763cc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(duration,"duration")
            	HX_STACK_ARG(properties,"properties")
            	HX_STACK_ARG(easing,"easing")
            	HX_STACK_ARG(overwrite,"overwrite")
            	HX_STACK_ARG(customActuator,"customActuator")
HXLINE( 136)		::String _hx_switch_0 = easing;
            		if (  (_hx_switch_0==HX_("Back.easeIn",ba,da,15,92)) ){
HXLINE( 154)			 ::motion::actuators::GenericActuator _hx_tmp = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 154)			return _hx_tmp->ease(::motion::easing::Back_obj::get_easeIn());
HXDLIN( 154)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Back.easeInOut",f4,6d,bc,bc)) ){
HXLINE( 152)			 ::motion::actuators::GenericActuator _hx_tmp1 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 152)			return _hx_tmp1->ease(::motion::easing::Back_obj::get_easeInOut());
HXDLIN( 152)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Back.easeOut",19,1c,0e,41)) ){
HXLINE( 153)			 ::motion::actuators::GenericActuator _hx_tmp2 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 153)			return _hx_tmp2->ease(::motion::easing::Back_obj::get_easeOut());
HXDLIN( 153)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Bounce.easeIn",79,85,9f,28)) ){
HXLINE( 145)			 ::motion::actuators::GenericActuator _hx_tmp3 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 145)			return _hx_tmp3->ease(::motion::easing::Bounce_obj::get_easeIn());
HXDLIN( 145)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Bounce.easeInOut",95,c4,58,fe)) ){
HXLINE( 143)			 ::motion::actuators::GenericActuator _hx_tmp4 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 143)			return _hx_tmp4->ease(::motion::easing::Bounce_obj::get_easeInOut());
HXDLIN( 143)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Bounce.easeOut",7a,d8,f9,62)) ){
HXLINE( 144)			 ::motion::actuators::GenericActuator _hx_tmp5 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 144)			return _hx_tmp5->ease(::motion::easing::Bounce_obj::get_easeOut());
HXDLIN( 144)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Cubic.easeIn",37,46,de,5b)) ){
HXLINE( 160)			 ::motion::actuators::GenericActuator _hx_tmp6 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 160)			return _hx_tmp6->ease(::motion::easing::Cubic_obj::get_easeIn());
HXDLIN( 160)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Cubic.easeInOut",97,8e,68,4c)) ){
HXLINE( 158)			 ::motion::actuators::GenericActuator _hx_tmp7 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 158)			return _hx_tmp7->ease(::motion::easing::Cubic_obj::get_easeInOut());
HXDLIN( 158)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Cubic.easeOut",fc,bd,a3,06)) ){
HXLINE( 159)			 ::motion::actuators::GenericActuator _hx_tmp8 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 159)			return _hx_tmp8->ease(::motion::easing::Cubic_obj::get_easeOut());
HXDLIN( 159)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Elastic.easeIn",0c,21,b9,79)) ){
HXLINE( 151)			 ::motion::actuators::GenericActuator _hx_tmp9 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 151)			return _hx_tmp9->ease(::motion::easing::Elastic_obj::get_easeIn());
HXDLIN( 151)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Elastic.easeInOut",e2,66,1c,78)) ){
HXLINE( 149)			 ::motion::actuators::GenericActuator _hx_tmp10 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 149)			return _hx_tmp10->ease(::motion::easing::Elastic_obj::get_easeInOut());
HXDLIN( 149)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Elastic.easeOut",87,5d,48,08)) ){
HXLINE( 150)			 ::motion::actuators::GenericActuator _hx_tmp11 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 150)			return _hx_tmp11->ease(::motion::easing::Elastic_obj::get_easeOut());
HXDLIN( 150)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Expo.easeIn",0f,ff,6d,f6)) ){
HXLINE( 142)			 ::motion::actuators::GenericActuator _hx_tmp12 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 142)			return _hx_tmp12->ease(::motion::easing::Expo_obj::get_easeIn());
HXDLIN( 142)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Expo.easeInOut",bf,ec,41,a3)) ){
HXLINE( 140)			 ::motion::actuators::GenericActuator _hx_tmp13 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 140)			return _hx_tmp13->ease(::motion::easing::Expo_obj::get_easeInOut());
HXDLIN( 140)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Expo.easeOut",24,c2,d5,a9)) ){
HXLINE( 141)			 ::motion::actuators::GenericActuator _hx_tmp14 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 141)			return _hx_tmp14->ease(::motion::easing::Expo_obj::get_easeOut());
HXDLIN( 141)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Linear.easeNone",4f,09,c7,02)) ){
HXLINE( 165)			 ::motion::actuators::GenericActuator _hx_tmp15 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 165)			return _hx_tmp15->ease(::motion::easing::Linear_obj::get_easeNone());
HXDLIN( 165)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Quad.easeIn",1a,90,ab,ee)) ){
HXLINE( 139)			 ::motion::actuators::GenericActuator _hx_tmp16 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 139)			return _hx_tmp16->ease(::motion::easing::Quad_obj::get_easeIn());
HXDLIN( 139)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Quad.easeInOut",94,54,5a,8e)) ){
HXLINE( 137)			 ::motion::actuators::GenericActuator _hx_tmp17 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 137)			return _hx_tmp17->ease(::motion::easing::Quad_obj::get_easeInOut());
HXDLIN( 137)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Quad.easeOut",b9,1a,77,e7)) ){
HXLINE( 138)			 ::motion::actuators::GenericActuator _hx_tmp18 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 138)			return _hx_tmp18->ease(::motion::easing::Quad_obj::get_easeOut());
HXDLIN( 138)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Quart.easeIn",22,12,e2,6a)) ){
HXLINE( 157)			 ::motion::actuators::GenericActuator _hx_tmp19 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 157)			return _hx_tmp19->ease(::motion::easing::Quart_obj::get_easeIn());
HXDLIN( 157)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Quart.easeInOut",8c,c7,ea,0a)) ){
HXLINE( 155)			 ::motion::actuators::GenericActuator _hx_tmp20 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 155)			return _hx_tmp20->ease(::motion::easing::Quart_obj::get_easeInOut());
HXDLIN( 155)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Quart.easeOut",b1,5f,f2,1a)) ){
HXLINE( 156)			 ::motion::actuators::GenericActuator _hx_tmp21 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 156)			return _hx_tmp21->ease(::motion::easing::Quart_obj::get_easeOut());
HXDLIN( 156)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Quint.easeIn",16,2d,70,21)) ){
HXLINE( 148)			 ::motion::actuators::GenericActuator _hx_tmp22 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 148)			return _hx_tmp22->ease(::motion::easing::Quint_obj::get_easeIn());
HXDLIN( 148)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Quint.easeInOut",18,fd,f0,31)) ){
HXLINE( 146)			 ::motion::actuators::GenericActuator _hx_tmp23 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 146)			return _hx_tmp23->ease(::motion::easing::Quint_obj::get_easeInOut());
HXDLIN( 146)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Quint.easeOut",3d,da,bb,20)) ){
HXLINE( 147)			 ::motion::actuators::GenericActuator _hx_tmp24 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 147)			return _hx_tmp24->ease(::motion::easing::Quint_obj::get_easeOut());
HXDLIN( 147)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Sine.easeIn",54,8f,5f,dc)) ){
HXLINE( 163)			 ::motion::actuators::GenericActuator _hx_tmp25 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 163)			return _hx_tmp25->ease(::motion::easing::Sine_obj::get_easeIn());
HXDLIN( 163)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Sine.easeInOut",9a,15,46,a6)) ){
HXLINE( 161)			 ::motion::actuators::GenericActuator _hx_tmp26 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 161)			return _hx_tmp26->ease(::motion::easing::Sine_obj::get_easeInOut());
HXDLIN( 161)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Sine.easeOut",3f,6e,42,f7)) ){
HXLINE( 162)			 ::motion::actuators::GenericActuator _hx_tmp27 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 162)			return _hx_tmp27->ease(::motion::easing::Sine_obj::get_easeOut());
HXDLIN( 162)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE( 166)			 ::motion::actuators::GenericActuator _hx_tmp28 = ::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),duration,properties,overwrite,customActuator);
HXDLIN( 166)			return _hx_tmp28->ease(::motion::easing::Linear_obj::get_easeNone());
            		}
            		_hx_goto_2:;
HXLINE( 136)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC5(TweenSprite_obj,tween,return )

void TweenSprite_obj::tweenStop( ::Dynamic properties,hx::Null< Bool >  __o_complete,hx::Null< Bool >  __o_sendEvent){
Bool complete = __o_complete.Default(false);
Bool sendEvent = __o_sendEvent.Default(false);
            	HX_STACK_FRAME("ru.stablex.TweenSprite","tweenStop",0xd53c1313,"ru.stablex.TweenSprite.tweenStop","ru/stablex/TweenSprite.hx",176,0x04d763cc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(properties,"properties")
            	HX_STACK_ARG(complete,"complete")
            	HX_STACK_ARG(sendEvent,"sendEvent")
HXLINE( 176)		::motion::Actuate_obj::stop(hx::ObjectPtr<OBJ_>(this),properties,complete,sendEvent);
            	}


HX_DEFINE_DYNAMIC_FUNC3(TweenSprite_obj,tweenStop,(void))

void TweenSprite_obj::free(hx::Null< Bool >  __o_recursive){
Bool recursive = __o_recursive.Default(true);
            	HX_STACK_FRAME("ru.stablex.TweenSprite","free",0xe6ff3f66,"ru.stablex.TweenSprite.free","ru/stablex/TweenSprite.hx",184,0x04d763cc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(recursive,"recursive")
HXLINE( 185)		this->tweenStop(null(),null(),null());
HXLINE( 188)		Bool _hx_tmp = hx::IsNotNull( this->_listeners );
HXDLIN( 188)		if (_hx_tmp) {
HXLINE( 189)			HX_VARI(  ::Dynamic,tmp) = this->_listeners->keys();
HXDLIN( 189)			while(true){
HXLINE( 189)				Bool _hx_tmp1 = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 189)				if (_hx_tmp1) {
HXLINE( 189)					goto _hx_goto_3;
            				}
HXDLIN( 189)				HX_VARI( ::String,event) = ( (::String)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 190)				HX_VARI(  ::List,listeners) = this->_listeners->get(event).StaticCast<  ::List >();
HXLINE( 191)				while(true){
HXLINE( 191)					Bool _hx_tmp2 = !(!(listeners->isEmpty()));
HXDLIN( 191)					if (_hx_tmp2) {
HXLINE( 191)						goto _hx_goto_4;
            					}
HXLINE( 192)					 ::Dynamic _hx_tmp3 = listeners->first();
HXDLIN( 192)					this->removeEventListener(event,_hx_tmp3,null());
            				}
            				_hx_goto_4:;
            			}
            			_hx_goto_3:;
            		}
HXLINE( 198)		this->freeChildren(recursive);
HXLINE( 201)		Bool _hx_tmp4 = hx::IsNotNull( this->parent );
HXDLIN( 201)		if (_hx_tmp4) {
HXLINE( 202)			this->parent->removeChild(hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TweenSprite_obj,free,(void))

void TweenSprite_obj::freeChildren(hx::Null< Bool >  __o_recursive){
Bool recursive = __o_recursive.Default(true);
            	HX_STACK_FRAME("ru.stablex.TweenSprite","freeChildren",0x3d21eac5,"ru.stablex.TweenSprite.freeChildren","ru/stablex/TweenSprite.hx",210,0x04d763cc)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(recursive,"recursive")
HXLINE( 211)		HX_VAR(  ::openfl::display::DisplayObject,child);
HXLINE( 212)		while(true){
HXLINE( 212)			Int _hx_tmp = this->get_numChildren();
HXDLIN( 212)			if (!((_hx_tmp > (int)0))) {
HXLINE( 212)				goto _hx_goto_5;
            			}
HXLINE( 213)			child = this->removeChildAt((int)0);
HXLINE( 215)			Bool _hx_tmp1;
HXDLIN( 215)			if (recursive) {
HXLINE( 215)				_hx_tmp1 = ::Std_obj::is(child,hx::ClassOf< ::ru::stablex::TweenSprite >());
            			}
            			else {
HXLINE( 215)				_hx_tmp1 = false;
            			}
HXDLIN( 215)			if (_hx_tmp1) {
HXLINE( 216)				hx::TCast<  ::ru::stablex::TweenSprite >::cast(child)->free(true);
            			}
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TweenSprite_obj,freeChildren,(void))


TweenSprite_obj::TweenSprite_obj()
{
}

void TweenSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TweenSprite);
	HX_MARK_MEMBER_NAME(_listeners,"_listeners");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TweenSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_listeners,"_listeners");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TweenSprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tween") ) { return hx::Val( tween_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tweenStop") ) { return hx::Val( tweenStop_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_listeners") ) { return hx::Val( _listeners); }
		if (HX_FIELD_EQ(inName,"clearEvent") ) { return hx::Val( clearEvent_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasListener") ) { return hx::Val( hasListener_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"freeChildren") ) { return hx::Val( freeChildren_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return hx::Val( addEventListener_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addUniqueListener") ) { return hx::Val( addUniqueListener_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return hx::Val( removeEventListener_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TweenSprite_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_listeners") ) { _listeners=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TweenSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_listeners","\x40","\xe1","\x30","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TweenSprite_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TweenSprite_obj,_listeners),HX_HCSTRING("_listeners","\x40","\xe1","\x30","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *TweenSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String TweenSprite_obj_sMemberFields[] = {
	HX_HCSTRING("_listeners","\x40","\xe1","\x30","\x4f"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("addUniqueListener","\xa6","\xe6","\x9b","\x42"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("clearEvent","\x4d","\x07","\xcf","\x4a"),
	HX_HCSTRING("hasListener","\xee","\xe5","\xe8","\x0a"),
	HX_HCSTRING("tween","\x6b","\xaa","\x70","\x19"),
	HX_HCSTRING("tweenStop","\x0d","\xd8","\x22","\x83"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("freeChildren","\x0b","\xfe","\x0c","\xf6"),
	::String(null()) };

static void TweenSprite_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TweenSprite_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenSprite_obj::__mClass,"__mClass");
};

#endif

hx::Class TweenSprite_obj::__mClass;

void TweenSprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ru.stablex.TweenSprite","\xf4","\xb7","\x8e","\x74");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TweenSprite_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TweenSprite_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TweenSprite_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TweenSprite_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TweenSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TweenSprite_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace ru
} // end namespace stablex