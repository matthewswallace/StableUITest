// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events__EventDispatcher_DispatchIterator
#include <openfl/events/_EventDispatcher/DispatchIterator.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif

namespace openfl{
namespace events{
namespace _EventDispatcher{

void DispatchIterator_obj::__construct(::Array< ::Dynamic> list){
            	HX_STACK_FRAME("openfl.events._EventDispatcher.DispatchIterator","new",0x76c2678f,"openfl.events._EventDispatcher.DispatchIterator.new","openfl/events/EventDispatcher.hx",256,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(list,"list")
HXLINE( 258)		this->list = list;
HXLINE( 259)		this->index = list->length;
            	}

Dynamic DispatchIterator_obj::__CreateEmpty() { return new DispatchIterator_obj; }

hx::ObjectPtr< DispatchIterator_obj > DispatchIterator_obj::__new(::Array< ::Dynamic> list)
{
	hx::ObjectPtr< DispatchIterator_obj > _hx_result = new DispatchIterator_obj();
	_hx_result->__construct(list);
	return _hx_result;
}

Dynamic DispatchIterator_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DispatchIterator_obj > _hx_result = new DispatchIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void DispatchIterator_obj::copy(){
            	HX_STACK_FRAME("openfl.events._EventDispatcher.DispatchIterator","copy",0x6c1a6da6,"openfl.events._EventDispatcher.DispatchIterator.copy","openfl/events/EventDispatcher.hx",266,0xe2270714)
            	HX_STACK_THIS(this)
HXLINE( 266)		Bool _hx_tmp;
HXDLIN( 266)		if ((this->index < this->list->length)) {
HXLINE( 266)			_hx_tmp = !(this->isCopy);
            		}
            		else {
HXLINE( 266)			_hx_tmp = false;
            		}
HXDLIN( 266)		if (_hx_tmp) {
HXLINE( 268)			this->list = this->list->copy();
HXLINE( 269)			this->isCopy = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,copy,(void))

Bool DispatchIterator_obj::hasNext(){
            	HX_STACK_FRAME("openfl.events._EventDispatcher.DispatchIterator","hasNext",0xef22001c,"openfl.events._EventDispatcher.DispatchIterator.hasNext","openfl/events/EventDispatcher.hx",278,0xe2270714)
            	HX_STACK_THIS(this)
HXLINE( 278)		Bool _hx_tmp = (this->index < this->list->length);
HXDLIN( 278)		if (_hx_tmp) {
HXLINE( 280)			return true;
            		}
            		else {
HXLINE( 284)			this->active = false;
HXLINE( 285)			return false;
            		}
HXLINE( 278)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,hasNext,return )

 ::openfl::events::_EventDispatcher::Listener DispatchIterator_obj::next(){
            	HX_STACK_FRAME("openfl.events._EventDispatcher.DispatchIterator","next",0x735836e4,"openfl.events._EventDispatcher.DispatchIterator.next","openfl/events/EventDispatcher.hx",294,0xe2270714)
            	HX_STACK_THIS(this)
HXLINE( 294)		return this->list->__get(this->index++).StaticCast<  ::openfl::events::_EventDispatcher::Listener >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,next,return )

void DispatchIterator_obj::remove( ::openfl::events::_EventDispatcher::Listener listener){
            	HX_STACK_FRAME("openfl.events._EventDispatcher.DispatchIterator","remove",0xb5236c75,"openfl.events._EventDispatcher.DispatchIterator.remove","openfl/events/EventDispatcher.hx",301,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(listener,"listener")
HXLINE( 301)		Bool _hx_tmp;
HXDLIN( 301)		if (this->active) {
HXLINE( 301)			_hx_tmp = this->isCopy;
            		}
            		else {
HXLINE( 301)			_hx_tmp = false;
            		}
HXDLIN( 301)		if (_hx_tmp) {
HXLINE( 303)			HX_VARI( Int,_g1) = this->index;
HXDLIN( 303)			HX_VARI( Int,_g) = this->list->length;
HXDLIN( 303)			while((_g1 < _g)){
HXLINE( 303)				HX_VARI( Int,i) = _g1++;
HXLINE( 305)				Bool _hx_tmp1 = hx::IsEq( this->list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >(),listener );
HXDLIN( 305)				if (_hx_tmp1) {
HXLINE( 307)					this->list->removeRange(i,(int)1);
HXLINE( 308)					goto _hx_goto_0;
            				}
            			}
            			_hx_goto_0:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DispatchIterator_obj,remove,(void))

void DispatchIterator_obj::reset(::Array< ::Dynamic> list){
            	HX_STACK_FRAME("openfl.events._EventDispatcher.DispatchIterator","reset",0xc76e4abe,"openfl.events._EventDispatcher.DispatchIterator.reset","openfl/events/EventDispatcher.hx",319,0xe2270714)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(list,"list")
HXLINE( 321)		this->list = list;
HXLINE( 323)		this->active = true;
HXLINE( 324)		this->index = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DispatchIterator_obj,reset,(void))


DispatchIterator_obj::DispatchIterator_obj()
{
}

void DispatchIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DispatchIterator);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(isCopy,"isCopy");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void DispatchIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(isCopy,"isCopy");
	HX_VISIT_MEMBER_NAME(list,"list");
}

hx::Val DispatchIterator_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return hx::Val( list); }
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn()); }
		if (HX_FIELD_EQ(inName,"next") ) { return hx::Val( next_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active); }
		if (HX_FIELD_EQ(inName,"isCopy") ) { return hx::Val( isCopy); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hx::Val( hasNext_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DispatchIterator_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< Int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isCopy") ) { isCopy=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DispatchIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("isCopy","\xbf","\x80","\x2b","\x5f"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DispatchIterator_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DispatchIterator_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsInt,(int)offsetof(DispatchIterator_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsBool,(int)offsetof(DispatchIterator_obj,isCopy),HX_HCSTRING("isCopy","\xbf","\x80","\x2b","\x5f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DispatchIterator_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DispatchIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String DispatchIterator_obj_sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("isCopy","\xbf","\x80","\x2b","\x5f"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("hasNext","\x6d","\xa5","\x46","\x18"),
	HX_HCSTRING("next","\xf3","\x84","\x02","\x49"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	::String(null()) };

static void DispatchIterator_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DispatchIterator_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DispatchIterator_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DispatchIterator_obj::__mClass,"__mClass");
};

#endif

hx::Class DispatchIterator_obj::__mClass;

void DispatchIterator_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events._EventDispatcher.DispatchIterator","\x1d","\xf4","\x5d","\x6d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DispatchIterator_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DispatchIterator_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DispatchIterator_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DispatchIterator_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DispatchIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DispatchIterator_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace events
} // end namespace _EventDispatcher
