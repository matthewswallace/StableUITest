// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#define INCLUDED_lime_graphics_opengl_GLProgram

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLProgram)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLShader)

namespace lime{
namespace graphics{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLProgram_obj : public  ::lime::graphics::opengl::GLObject_obj
{
	public:
		typedef  ::lime::graphics::opengl::GLObject_obj super;
		typedef GLProgram_obj OBJ_;
		GLProgram_obj();

	public:
		void __construct(Int version, ::Dynamic id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.graphics.opengl.GLProgram")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.graphics.opengl.GLProgram"); }
		static hx::ObjectPtr< GLProgram_obj > __new(Int version, ::Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLProgram_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GLProgram","\xdf","\x72","\x38","\x3d"); }

		::Array< ::Dynamic> shaders;
		void attach( ::lime::graphics::opengl::GLShader shader);
		::Dynamic attach_dyn();

		::Array< ::Dynamic> getShaders();
		::Dynamic getShaders_dyn();

		::String getType();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_GLProgram */ 
