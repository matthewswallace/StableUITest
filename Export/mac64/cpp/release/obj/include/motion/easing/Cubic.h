// Generated by Haxe 3.3.0
#ifndef INCLUDED_motion_easing_Cubic
#define INCLUDED_motion_easing_Cubic

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,Cubic)
HX_DECLARE_CLASS2(motion,easing,IEasing)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES Cubic_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Cubic_obj OBJ_;
		Cubic_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.Cubic")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"motion.easing.Cubic"); }
		static hx::ObjectPtr< Cubic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cubic_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Cubic","\x2a","\x8d","\x79","\xe1"); }

		static ::Dynamic get_easeIn();
		static ::Dynamic get_easeIn_dyn();

		static ::Dynamic get_easeInOut();
		static ::Dynamic get_easeInOut_dyn();

		static ::Dynamic get_easeOut();
		static ::Dynamic get_easeOut_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_Cubic */ 