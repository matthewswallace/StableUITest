// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_audio_ALAudioContext
#define INCLUDED_lime_audio_ALAudioContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,audio,ALAudioContext)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace audio{


class HXCPP_CLASS_ATTRIBUTES ALAudioContext_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ALAudioContext_obj OBJ_;
		ALAudioContext_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.audio.ALAudioContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.audio.ALAudioContext"); }
		static hx::ObjectPtr< ALAudioContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ALAudioContext_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ALAudioContext","\x44","\x65","\x2c","\x10"); }

		Int NONE;
		Int FALSE;
		Int TRUE;
		Int SOURCE_RELATIVE;
		Int CONE_INNER_ANGLE;
		Int CONE_OUTER_ANGLE;
		Int PITCH;
		Int POSITION;
		Int DIRECTION;
		Int VELOCITY;
		Int LOOPING;
		Int BUFFER;
		Int GAIN;
		Int MIN_GAIN;
		Int MAX_GAIN;
		Int ORIENTATION;
		Int SOURCE_STATE;
		Int INITIAL;
		Int PLAYING;
		Int PAUSED;
		Int STOPPED;
		Int BUFFERS_QUEUED;
		Int BUFFERS_PROCESSED;
		Int REFERENCE_DISTANCE;
		Int ROLLOFF_FACTOR;
		Int CONE_OUTER_GAIN;
		Int MAX_DISTANCE;
		Int SEC_OFFSET;
		Int SAMPLE_OFFSET;
		Int BYTE_OFFSET;
		Int SOURCE_TYPE;
		Int STATIC;
		Int STREAMING;
		Int UNDETERMINED;
		Int FORMAT_MONO8;
		Int FORMAT_MONO16;
		Int FORMAT_STEREO8;
		Int FORMAT_STEREO16;
		Int FREQUENCY;
		Int BITS;
		Int CHANNELS;
		Int SIZE;
		Int NO_ERROR;
		Int INVALID_NAME;
		Int INVALID_ENUM;
		Int INVALID_VALUE;
		Int INVALID_OPERATION;
		Int OUT_OF_MEMORY;
		Int VENDOR;
		Int VERSION;
		Int RENDERER;
		Int EXTENSIONS;
		Int DOPPLER_FACTOR;
		Int SPEED_OF_SOUND;
		Int DOPPLER_VELOCITY;
		Int DISTANCE_MODEL;
		Int INVERSE_DISTANCE;
		Int INVERSE_DISTANCE_CLAMPED;
		Int LINEAR_DISTANCE;
		Int LINEAR_DISTANCE_CLAMPED;
		Int EXPONENT_DISTANCE;
		Int EXPONENT_DISTANCE_CLAMPED;
		void bufferData( ::Dynamic buffer,Int format, ::lime::utils::ArrayBufferView data,Int size,Int freq);
		::Dynamic bufferData_dyn();

		void buffer3f( ::Dynamic buffer,Int param,Float value1,Float value2,Float value3);
		::Dynamic buffer3f_dyn();

		void buffer3i( ::Dynamic buffer,Int param,Int value1,Int value2,Int value3);
		::Dynamic buffer3i_dyn();

		void bufferf( ::Dynamic buffer,Int param,Float value);
		::Dynamic bufferf_dyn();

		void bufferfv( ::Dynamic buffer,Int param,::Array< Float > values);
		::Dynamic bufferfv_dyn();

		void bufferi( ::Dynamic buffer,Int param,Int value);
		::Dynamic bufferi_dyn();

		void bufferiv( ::Dynamic buffer,Int param,::Array< Int > values);
		::Dynamic bufferiv_dyn();

		void deleteBuffer( ::Dynamic buffer);
		::Dynamic deleteBuffer_dyn();

		void deleteBuffers(::cpp::VirtualArray buffers);
		::Dynamic deleteBuffers_dyn();

		void deleteSource( ::Dynamic source);
		::Dynamic deleteSource_dyn();

		void deleteSources(::cpp::VirtualArray sources);
		::Dynamic deleteSources_dyn();

		void disable(Int capability);
		::Dynamic disable_dyn();

		void distanceModel(Int distanceModel);
		::Dynamic distanceModel_dyn();

		void dopplerFactor(Float value);
		::Dynamic dopplerFactor_dyn();

		void dopplerVelocity(Float value);
		::Dynamic dopplerVelocity_dyn();

		void enable(Int capability);
		::Dynamic enable_dyn();

		 ::Dynamic genSource();
		::Dynamic genSource_dyn();

		::cpp::VirtualArray genSources(Int n);
		::Dynamic genSources_dyn();

		 ::Dynamic genBuffer();
		::Dynamic genBuffer_dyn();

		::cpp::VirtualArray genBuffers(Int n);
		::Dynamic genBuffers_dyn();

		Bool getBoolean(Int param);
		::Dynamic getBoolean_dyn();

		::Array< Bool > getBooleanv(Int param,hx::Null< Int >  count);
		::Dynamic getBooleanv_dyn();

		::Array< Float > getBuffer3f( ::Dynamic buffer,Int param);
		::Dynamic getBuffer3f_dyn();

		::Array< Int > getBuffer3i( ::Dynamic buffer,Int param);
		::Dynamic getBuffer3i_dyn();

		Float getBufferf( ::Dynamic buffer,Int param);
		::Dynamic getBufferf_dyn();

		::Array< Float > getBufferfv( ::Dynamic buffer,Int param,hx::Null< Int >  count);
		::Dynamic getBufferfv_dyn();

		Int getBufferi( ::Dynamic buffer,Int param);
		::Dynamic getBufferi_dyn();

		::Array< Int > getBufferiv( ::Dynamic buffer,Int param,hx::Null< Int >  count);
		::Dynamic getBufferiv_dyn();

		Float getDouble(Int param);
		::Dynamic getDouble_dyn();

		::Array< Float > getDoublev(Int param,hx::Null< Int >  count);
		::Dynamic getDoublev_dyn();

		Int getEnumValue(::String ename);
		::Dynamic getEnumValue_dyn();

		Int getError();
		::Dynamic getError_dyn();

		::String getErrorString();
		::Dynamic getErrorString_dyn();

		Float getFloat(Int param);
		::Dynamic getFloat_dyn();

		::Array< Float > getFloatv(Int param,hx::Null< Int >  count);
		::Dynamic getFloatv_dyn();

		Int getInteger(Int param);
		::Dynamic getInteger_dyn();

		::Array< Int > getIntegerv(Int param,hx::Null< Int >  count);
		::Dynamic getIntegerv_dyn();

		::Array< Float > getListener3f(Int param);
		::Dynamic getListener3f_dyn();

		::Array< Int > getListener3i(Int param);
		::Dynamic getListener3i_dyn();

		Float getListenerf(Int param);
		::Dynamic getListenerf_dyn();

		::Array< Float > getListenerfv(Int param,hx::Null< Int >  count);
		::Dynamic getListenerfv_dyn();

		Int getListeneri(Int param);
		::Dynamic getListeneri_dyn();

		::Array< Int > getListeneriv(Int param,hx::Null< Int >  count);
		::Dynamic getListeneriv_dyn();

		 ::Dynamic getProcAddress(::String fname);
		::Dynamic getProcAddress_dyn();

		::Array< Float > getSource3f( ::Dynamic source,Int param);
		::Dynamic getSource3f_dyn();

		Float getSourcef( ::Dynamic source,Int param);
		::Dynamic getSourcef_dyn();

		::Array< Int > getSource3i( ::Dynamic source,Int param);
		::Dynamic getSource3i_dyn();

		::Array< Float > getSourcefv( ::Dynamic source,Int param,hx::Null< Int >  count);
		::Dynamic getSourcefv_dyn();

		 ::Dynamic getSourcei( ::Dynamic source,Int param);
		::Dynamic getSourcei_dyn();

		::Array< Int > getSourceiv( ::Dynamic source,Int param,hx::Null< Int >  count);
		::Dynamic getSourceiv_dyn();

		::String getString(Int param);
		::Dynamic getString_dyn();

		Bool isBuffer( ::Dynamic buffer);
		::Dynamic isBuffer_dyn();

		Bool isEnabled(Int capability);
		::Dynamic isEnabled_dyn();

		Bool isExtensionPresent(::String extname);
		::Dynamic isExtensionPresent_dyn();

		Bool isSource( ::Dynamic source);
		::Dynamic isSource_dyn();

		void listener3f(Int param,Float value1,Float value2,Float value3);
		::Dynamic listener3f_dyn();

		void listener3i(Int param,Int value1,Int value2,Int value3);
		::Dynamic listener3i_dyn();

		void listenerf(Int param,Float value);
		::Dynamic listenerf_dyn();

		void listenerfv(Int param,::Array< Float > values);
		::Dynamic listenerfv_dyn();

		void listeneri(Int param,Int value);
		::Dynamic listeneri_dyn();

		void listeneriv(Int param,::Array< Int > values);
		::Dynamic listeneriv_dyn();

		void source3f( ::Dynamic source,Int param,Float value1,Float value2,Float value3);
		::Dynamic source3f_dyn();

		void source3i( ::Dynamic source,Int param,Int value1,Int value2,Int value3);
		::Dynamic source3i_dyn();

		void sourcef( ::Dynamic source,Int param,Float value);
		::Dynamic sourcef_dyn();

		void sourcefv( ::Dynamic source,Int param,::Array< Float > values);
		::Dynamic sourcefv_dyn();

		void sourcei( ::Dynamic source,Int param, ::Dynamic value);
		::Dynamic sourcei_dyn();

		void sourceiv( ::Dynamic source,Int param,::Array< Int > values);
		::Dynamic sourceiv_dyn();

		void sourcePlay( ::Dynamic source);
		::Dynamic sourcePlay_dyn();

		void sourcePlayv(::cpp::VirtualArray sources);
		::Dynamic sourcePlayv_dyn();

		void sourceStop( ::Dynamic source);
		::Dynamic sourceStop_dyn();

		void sourceStopv(::cpp::VirtualArray sources);
		::Dynamic sourceStopv_dyn();

		void sourceRewind( ::Dynamic source);
		::Dynamic sourceRewind_dyn();

		void sourceRewindv(::cpp::VirtualArray sources);
		::Dynamic sourceRewindv_dyn();

		void sourcePause( ::Dynamic source);
		::Dynamic sourcePause_dyn();

		void sourcePausev(::cpp::VirtualArray sources);
		::Dynamic sourcePausev_dyn();

		void sourceQueueBuffer( ::Dynamic source, ::Dynamic buffer);
		::Dynamic sourceQueueBuffer_dyn();

		void sourceQueueBuffers( ::Dynamic source,Int nb,::cpp::VirtualArray buffers);
		::Dynamic sourceQueueBuffers_dyn();

		Int sourceUnqueueBuffer( ::Dynamic source);
		::Dynamic sourceUnqueueBuffer_dyn();

		::cpp::VirtualArray sourceUnqueueBuffers( ::Dynamic source,Int nb);
		::Dynamic sourceUnqueueBuffers_dyn();

		void speedOfSound(Float value);
		::Dynamic speedOfSound_dyn();

};

} // end namespace lime
} // end namespace audio

#endif /* INCLUDED_lime_audio_ALAudioContext */ 
