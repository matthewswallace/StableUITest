// Generated by Haxe 3.3.0
#ifndef INCLUDED_haxe_crypto_BaseCode
#define INCLUDED_haxe_crypto_BaseCode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,BaseCode)

namespace haxe{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES BaseCode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BaseCode_obj OBJ_;
		BaseCode_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.crypto.BaseCode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"haxe.crypto.BaseCode"); }
		static hx::ObjectPtr< BaseCode_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BaseCode_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("BaseCode","\xfe","\x5d","\xc4","\xcf"); }

};

} // end namespace haxe
} // end namespace crypto

#endif /* INCLUDED_haxe_crypto_BaseCode */ 
