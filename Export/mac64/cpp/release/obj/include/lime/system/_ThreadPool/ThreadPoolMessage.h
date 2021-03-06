// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_system__ThreadPool_ThreadPoolMessage
#define INCLUDED_lime_system__ThreadPool_ThreadPoolMessage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_hx_system,_ThreadPool,ThreadPoolMessage)
HX_DECLARE_CLASS3(lime,_hx_system,_ThreadPool,ThreadPoolMessageType)

namespace lime{
namespace _hx_system{
namespace _ThreadPool{


class HXCPP_CLASS_ATTRIBUTES ThreadPoolMessage_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ThreadPoolMessage_obj OBJ_;
		ThreadPoolMessage_obj();

	public:
		void __construct(::hx::EnumBase type, ::Dynamic state);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system._ThreadPool.ThreadPoolMessage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.system._ThreadPool.ThreadPoolMessage"); }
		static hx::ObjectPtr< ThreadPoolMessage_obj > __new(::hx::EnumBase type, ::Dynamic state);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ThreadPoolMessage_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ThreadPoolMessage","\x81","\x8d","\xd9","\xcb"); }

		 ::Dynamic state;
		::hx::EnumBase type;
};

} // end namespace lime
} // end namespace system
} // end namespace _ThreadPool

#endif /* INCLUDED_lime_system__ThreadPool_ThreadPoolMessage */ 
