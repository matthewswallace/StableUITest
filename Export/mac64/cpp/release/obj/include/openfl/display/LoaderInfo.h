// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display_LoaderInfo
#define INCLUDED_openfl_display_LoaderInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Loader)
HX_DECLARE_CLASS2(openfl,display,LoaderInfo)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,UncaughtErrorEvents)
HX_DECLARE_CLASS2(openfl,_hx_system,ApplicationDomain)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES LoaderInfo_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef LoaderInfo_obj OBJ_;
		LoaderInfo_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.LoaderInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.LoaderInfo"); }
		static hx::ObjectPtr< LoaderInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoaderInfo_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LoaderInfo","\x41","\xb6","\x95","\xad"); }

		static void __boot();
		static ::String _hx___rootURL;
		static  ::openfl::display::LoaderInfo create( ::openfl::display::Loader loader);
		static ::Dynamic create_dyn();

		 ::openfl::_hx_system::ApplicationDomain applicationDomain;
		 ::openfl::utils::ByteArrayData bytes;
		Int bytesLoaded;
		Int bytesTotal;
		Bool childAllowsParent;
		 ::openfl::display::DisplayObject content;
		::String contentType;
		Float frameRate;
		Int height;
		 ::openfl::display::Loader loader;
		::String loaderURL;
		 ::Dynamic parameters;
		Bool parentAllowsChild;
		Bool sameDomain;
		 ::openfl::events::EventDispatcher sharedEvents;
		 ::openfl::events::UncaughtErrorEvents uncaughtErrorEvents;
		::String url;
		Int width;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_LoaderInfo */ 
