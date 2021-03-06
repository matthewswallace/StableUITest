// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#define INCLUDED_lime_graphics_opengl_GLObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)

namespace lime{
namespace graphics{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLObject_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLObject_obj OBJ_;
		GLObject_obj();

	public:
		void __construct(Int version, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.graphics.opengl.GLObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.graphics.opengl.GLObject"); }
		static hx::ObjectPtr< GLObject_obj > __new(Int version, ::Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLObject","\xc4","\xda","\x30","\x7f"); }

		 ::Dynamic id;
		Bool invalidated;
		Bool valid;
		Int version;
		virtual ::String getType();
		::Dynamic getType_dyn();

		void invalidate();
		::Dynamic invalidate_dyn();

		virtual Bool isValid();
		::Dynamic isValid_dyn();

		Bool isInvalid();
		::Dynamic isInvalid_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		Bool get_invalidated();
		::Dynamic get_invalidated_dyn();

		Bool get_valid();
		::Dynamic get_valid_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_GLObject */ 
