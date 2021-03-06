// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_text__TextDirection_TextDirection_Impl_
#define INCLUDED_lime_text__TextDirection_TextDirection_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,text,_TextDirection,TextDirection_Impl_)

namespace lime{
namespace text{
namespace _TextDirection{


class HXCPP_CLASS_ATTRIBUTES TextDirection_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextDirection_Impl__obj OBJ_;
		TextDirection_Impl__obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text._TextDirection.TextDirection_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.text._TextDirection.TextDirection_Impl_"); }
		static hx::ObjectPtr< TextDirection_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextDirection_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextDirection_Impl_","\xd2","\x55","\x68","\x6e"); }

		static void __boot();
		static Int INVALID;
		static Int LEFT_TO_RIGHT;
		static Int RIGHT_TO_LEFT;
		static Int TOP_TO_BOTTOM;
		static Int BOTTOM_TO_TOP;
		static void reverse(Int this1);
		static ::Dynamic reverse_dyn();

		static ::String toString(Int this1);
		static ::Dynamic toString_dyn();

		static Bool get_backward(Int this1);
		static ::Dynamic get_backward_dyn();

		static Bool get_forward(Int this1);
		static ::Dynamic get_forward_dyn();

		static Bool get_horizontal(Int this1);
		static ::Dynamic get_horizontal_dyn();

		static Bool get_vertical(Int this1);
		static ::Dynamic get_vertical_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace _TextDirection

#endif /* INCLUDED_lime_text__TextDirection_TextDirection_Impl_ */ 
