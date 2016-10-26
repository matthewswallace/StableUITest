// Generated by Haxe 3.3.0
#ifndef INCLUDED_DefaultAssetLibrary
#define INCLUDED_DefaultAssetLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
HX_DECLARE_CLASS0(DefaultAssetLibrary)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(lime,AssetLibrary)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,audio,AudioBuffer)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,utils,Bytes)



class HXCPP_CLASS_ATTRIBUTES DefaultAssetLibrary_obj : public  ::lime::AssetLibrary_obj
{
	public:
		typedef  ::lime::AssetLibrary_obj super;
		typedef DefaultAssetLibrary_obj OBJ_;
		DefaultAssetLibrary_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DefaultAssetLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"DefaultAssetLibrary"); }
		static hx::ObjectPtr< DefaultAssetLibrary_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultAssetLibrary_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"); }

		 ::haxe::ds::StringMap className;
		 ::haxe::ds::StringMap path;
		 ::haxe::ds::StringMap type;
		Float lastModified;
		 ::haxe::Timer timer;
		::String rootPath;
		Bool exists(::String id,::String type);

		 ::lime::audio::AudioBuffer getAudioBuffer(::String id);

		 ::lime::utils::Bytes getBytes(::String id);

		 ::lime::text::Font getFont(::String id);

		 ::lime::graphics::Image getImage(::String id);

		::String getPath(::String id);

		::String getText(::String id);

		Bool isLocal(::String id,::String type);

		::Array< ::String > list(::String type);

		 ::lime::app::Future loadAudioBuffer(::String id);

		 ::lime::app::Future loadBytes(::String id);

		 ::lime::app::Future loadImage(::String id);

		void loadManifest();
		::Dynamic loadManifest_dyn();

		 ::lime::app::Future loadText(::String id);

};


#endif /* INCLUDED_DefaultAssetLibrary */ 