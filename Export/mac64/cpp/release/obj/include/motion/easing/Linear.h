// Generated by Haxe 3.3.0
#ifndef INCLUDED_motion_easing_Linear
#define INCLUDED_motion_easing_Linear

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,Linear)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES Linear_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Linear_obj OBJ_;
		Linear_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.Linear")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"motion.easing.Linear"); }
		static hx::ObjectPtr< Linear_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Linear_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Linear","\x05","\xc6","\x34","\x21"); }

		static ::Dynamic get_easeNone();
		static ::Dynamic get_easeNone_dyn();

};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_Linear */ 
