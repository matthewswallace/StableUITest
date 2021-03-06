// Generated by Haxe 3.3.0
#ifndef INCLUDED_motion_easing_QuintEaseOut
#define INCLUDED_motion_easing_QuintEaseOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,QuintEaseOut)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES QuintEaseOut_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef QuintEaseOut_obj OBJ_;
		QuintEaseOut_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.QuintEaseOut")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"motion.easing.QuintEaseOut"); }
		static hx::ObjectPtr< QuintEaseOut_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuintEaseOut_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("QuintEaseOut","\x15","\x50","\x55","\x98"); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_QuintEaseOut */ 
