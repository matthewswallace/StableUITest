// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_project_NDLL
#define INCLUDED_lime_project_NDLL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,project,Haxelib)
HX_DECLARE_CLASS2(lime,project,NDLL)
HX_DECLARE_CLASS2(lime,project,NDLLType)

namespace lime{
namespace project{


class HXCPP_CLASS_ATTRIBUTES NDLL_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NDLL_obj OBJ_;
		NDLL_obj();

	public:
		void __construct(::String name, ::lime::project::Haxelib haxelib,::hx::EnumBase type,hx::Null< Bool >  __o_registerStatics);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.project.NDLL")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.project.NDLL"); }
		static hx::ObjectPtr< NDLL_obj > __new(::String name, ::lime::project::Haxelib haxelib,::hx::EnumBase type,hx::Null< Bool >  __o_registerStatics);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NDLL_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NDLL","\x36","\x80","\xc2","\x33"); }

		::String extensionPath;
		 ::lime::project::Haxelib haxelib;
		::String name;
		::String path;
		Bool registerStatics;
		::String subdirectory;
		::hx::EnumBase type;
		 ::lime::project::NDLL clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace project

#endif /* INCLUDED_lime_project_NDLL */ 