// Generated by Haxe 3.3.0
#ifndef INCLUDED_motion_easing_BackEaseInOut
#define INCLUDED_motion_easing_BackEaseInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,BackEaseInOut)
HX_DECLARE_CLASS2(motion,easing,IEasing)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES BackEaseInOut_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BackEaseInOut_obj OBJ_;
		BackEaseInOut_obj();

	public:
		void __construct(Float s);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.BackEaseInOut")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"motion.easing.BackEaseInOut"); }
		static hx::ObjectPtr< BackEaseInOut_obj > __new(Float s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BackEaseInOut_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("BackEaseInOut","\x94","\xf7","\xdc","\x02"); }

		Float s;
		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_BackEaseInOut */ 
