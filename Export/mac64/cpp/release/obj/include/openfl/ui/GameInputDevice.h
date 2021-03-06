// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_ui_GameInputDevice
#define INCLUDED_openfl_ui_GameInputDevice

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,ui,GameInputControl)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES GameInputDevice_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GameInputDevice_obj OBJ_;
		GameInputDevice_obj();

	public:
		void __construct(::String id,::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.ui.GameInputDevice")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.ui.GameInputDevice"); }
		static hx::ObjectPtr< GameInputDevice_obj > __new(::String id,::String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameInputDevice_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameInputDevice","\x4e","\xe5","\xcf","\x03"); }

		static void __boot();
		static Int MAX_BUFFER_SIZE;
		Bool enabled;
		::String id;
		::String name;
		Int sampleInterval;
		 ::haxe::ds::IntMap _hx___axis;
		 ::haxe::ds::IntMap _hx___button;
		::Array< ::Dynamic> _hx___controls;
		 ::lime::ui::Gamepad _hx___gamepad;
		Int getCachedSamples( ::openfl::utils::ByteArrayData data,hx::Null< Bool >  append);
		::Dynamic getCachedSamples_dyn();

		 ::openfl::ui::GameInputControl getControlAt(Int i);
		::Dynamic getControlAt_dyn();

		void startCachingSamples(Int numSamples, ::openfl::_Vector::ObjectVector controls);
		::Dynamic startCachingSamples_dyn();

		void stopCachingSamples();
		::Dynamic stopCachingSamples_dyn();

		Int get_numControls();
		::Dynamic get_numControls_dyn();

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_GameInputDevice */ 
