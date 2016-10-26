// Generated by Haxe 3.3.0
#ifndef INCLUDED_motion_MotionPath
#define INCLUDED_motion_MotionPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(motion,ComponentPath)
HX_DECLARE_CLASS1(motion,IComponentPath)
HX_DECLARE_CLASS1(motion,MotionPath)
HX_DECLARE_CLASS1(motion,RotationPath)

namespace motion{


class HXCPP_CLASS_ATTRIBUTES MotionPath_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MotionPath_obj OBJ_;
		MotionPath_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="motion.MotionPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"motion.MotionPath"); }
		static hx::ObjectPtr< MotionPath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MotionPath_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MotionPath","\x1b","\xef","\x17","\x33"); }

		 ::motion::RotationPath rotation;
		::Dynamic x;
		::Dynamic y;
		 ::motion::RotationPath _rotation;
		 ::motion::ComponentPath _x;
		 ::motion::ComponentPath _y;
		 ::motion::MotionPath bezier(Float x,Float y,Float controlX,Float controlY,hx::Null< Float >  strength);
		::Dynamic bezier_dyn();

		 ::motion::MotionPath line(Float x,Float y,hx::Null< Float >  strength);
		::Dynamic line_dyn();

		 ::motion::RotationPath get_rotation();
		::Dynamic get_rotation_dyn();

		::Dynamic get_x();
		::Dynamic get_x_dyn();

		::Dynamic get_y();
		::Dynamic get_y_dyn();

};

} // end namespace motion

#endif /* INCLUDED_motion_MotionPath */ 
