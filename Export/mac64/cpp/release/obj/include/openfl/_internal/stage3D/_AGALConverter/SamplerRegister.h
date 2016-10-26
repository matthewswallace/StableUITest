// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerRegister
#define INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerRegister

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <cpp/Int64.h>
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,ProgramType)
HX_DECLARE_CLASS4(openfl,_internal,stage3D,_AGALConverter,SamplerRegister)

namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{


class HXCPP_CLASS_ATTRIBUTES SamplerRegister_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SamplerRegister_obj OBJ_;
		SamplerRegister_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D._AGALConverter.SamplerRegister")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.stage3D._AGALConverter.SamplerRegister"); }
		static hx::ObjectPtr< SamplerRegister_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SamplerRegister_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SamplerRegister","\x6b","\x77","\xff","\x5c"); }

		static  ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister parse( ::cpp::Int64Struct v,::hx::EnumBase programType);
		static ::Dynamic parse_dyn();

		Int b;
		Int d;
		Int f;
		Int m;
		Int n;
		::hx::EnumBase programType;
		Int s;
		Int t;
		Int type;
		Int w;
		::String toGLSL();
		::Dynamic toGLSL_dyn();

		 ::openfl::_internal::stage3D::SamplerState toSamplerState();
		::Dynamic toSamplerState_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter

#endif /* INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerRegister */ 
