// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_
#define INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,ui,_GamepadAxis,GamepadAxis_Impl_)

namespace lime{
namespace ui{
namespace _GamepadAxis{


class HXCPP_CLASS_ATTRIBUTES GamepadAxis_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GamepadAxis_Impl__obj OBJ_;
		GamepadAxis_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.ui._GamepadAxis.GamepadAxis_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.ui._GamepadAxis.GamepadAxis_Impl_"); }
		static hx::ObjectPtr< GamepadAxis_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamepadAxis_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GamepadAxis_Impl_","\xe2","\x1f","\x75","\xf1"); }

		static void __boot();
		static Int LEFT_X;
		static Int LEFT_Y;
		static Int RIGHT_X;
		static Int RIGHT_Y;
		static Int TRIGGER_LEFT;
		static Int TRIGGER_RIGHT;
		static ::String toString(Int this1);
		static ::Dynamic toString_dyn();

};

} // end namespace lime
} // end namespace ui
} // end namespace _GamepadAxis

#endif /* INCLUDED_lime_ui__GamepadAxis_GamepadAxis_Impl_ */ 
