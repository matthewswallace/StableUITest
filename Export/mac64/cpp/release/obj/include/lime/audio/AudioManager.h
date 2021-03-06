// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_audio_AudioManager
#define INCLUDED_lime_audio_AudioManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,audio,AudioContext)
HX_DECLARE_CLASS2(lime,audio,AudioManager)

namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES AudioManager_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef AudioManager_obj OBJ_;
		AudioManager_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.audio.AudioManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.audio.AudioManager"); }
		static hx::ObjectPtr< AudioManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AudioManager_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AudioManager","\x57","\xf4","\x4e","\xe7"); }

		static ::hx::EnumBase context;
		static void init(::hx::EnumBase context);
		static ::Dynamic init_dyn();

		static void resume();
		static ::Dynamic resume_dyn();

		static void shutdown();
		static ::Dynamic shutdown_dyn();

		static void suspend();
		static ::Dynamic suspend_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_AudioManager */ 
