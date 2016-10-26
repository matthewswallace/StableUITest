// Generated by Haxe 3.3.0
#ifndef INCLUDED_sys_io_Process
#define INCLUDED_sys_io_Process

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,io,Process)

namespace sys{
namespace io{


class HXCPP_CLASS_ATTRIBUTES Process_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Process_obj OBJ_;
		Process_obj();

	public:
		void __construct(::String cmd,::Array< ::String > args);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="sys.io.Process")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"sys.io.Process"); }
		static hx::ObjectPtr< Process_obj > __new(::String cmd,::Array< ::String > args);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Process_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Process","\x4f","\xca","\x9b","\xbe"); }

		 ::Dynamic p;
		 ::haxe::io::Input _hx_stdout;
		 ::haxe::io::Input _hx_stderr;
		 ::haxe::io::Output _hx_stdin;
		Int exitCode();
		::Dynamic exitCode_dyn();

		void close();
		::Dynamic close_dyn();

};

} // end namespace sys
} // end namespace io

#endif /* INCLUDED_sys_io_Process */ 
