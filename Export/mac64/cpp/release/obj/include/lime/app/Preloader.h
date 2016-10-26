// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_app_Preloader
#define INCLUDED_lime_app_Preloader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Preloader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Preloader_obj OBJ_;
		Preloader_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Preloader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.app.Preloader"); }
		static hx::ObjectPtr< Preloader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Preloader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Preloader","\x56","\xc4","\x4e","\x24"); }

		Bool complete;
		 ::lime::app::_Event_Void_Void onComplete;
		 ::lime::app::_Event_Int_Int_Void onProgress;
		void create( ::Dynamic config);
		::Dynamic create_dyn();

		virtual void load(::Array< ::String > urls,::Array< ::String > types);
		::Dynamic load_dyn();

		virtual void start();
		::Dynamic start_dyn();

		virtual void update(Int loaded,Int total);
		::Dynamic update_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Preloader */ 
