// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_graphics_Image
#define INCLUDED_lime_graphics_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,crypto,BaseCode)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,ImageBuffer)
HX_DECLARE_CLASS2(lime,graphics,ImageChannel)
HX_DECLARE_CLASS2(lime,graphics,ImageType)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES Image_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Image_obj OBJ_;
		Image_obj();

	public:
		void __construct( ::lime::graphics::ImageBuffer buffer,hx::Null< Int >  __o_offsetX,hx::Null< Int >  __o_offsetY,hx::Null< Int >  __o_width,hx::Null< Int >  __o_height, ::Dynamic color,::hx::EnumBase type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.graphics.Image")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.graphics.Image"); }
		static hx::ObjectPtr< Image_obj > __new( ::lime::graphics::ImageBuffer buffer,hx::Null< Int >  __o_offsetX,hx::Null< Int >  __o_offsetY,hx::Null< Int >  __o_width,hx::Null< Int >  __o_height, ::Dynamic color,::hx::EnumBase type);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Image_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Image","\x3b","\x8f","\x96","\x50"); }

		static void __boot();
		static ::String _hx___base64Chars;
		static  ::haxe::crypto::BaseCode _hx___base64Encoder;
		static  ::lime::graphics::Image fromBase64(::String base64,::String type, ::Dynamic onload);
		static ::Dynamic fromBase64_dyn();

		static  ::lime::graphics::Image fromBitmapData( ::Dynamic bitmapData);
		static ::Dynamic fromBitmapData_dyn();

		static  ::lime::graphics::Image fromBytes( ::haxe::io::Bytes bytes, ::Dynamic onload);
		static ::Dynamic fromBytes_dyn();

		static  ::lime::graphics::Image fromCanvas( ::Dynamic canvas);
		static ::Dynamic fromCanvas_dyn();

		static  ::lime::graphics::Image fromFile(::String path, ::Dynamic onload, ::Dynamic onerror);
		static ::Dynamic fromFile_dyn();

		static  ::lime::graphics::Image fromImageElement( ::Dynamic image);
		static ::Dynamic fromImageElement_dyn();

		static ::String _hx___base64Encode( ::haxe::io::Bytes bytes);
		static ::Dynamic _hx___base64Encode_dyn();

		static Bool _hx___isJPG( ::haxe::io::Bytes bytes);
		static ::Dynamic _hx___isJPG_dyn();

		static Bool _hx___isPNG( ::haxe::io::Bytes bytes);
		static ::Dynamic _hx___isPNG_dyn();

		static Bool _hx___isGIF( ::haxe::io::Bytes bytes);
		static ::Dynamic _hx___isGIF_dyn();

		static  ::Dynamic lime_image_load( ::Dynamic data, ::Dynamic buffer);
		static ::Dynamic lime_image_load_dyn();

		static ::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > cffi_lime_image_load;
		static ::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *) > &cffi_lime_image_load_dyn() { return cffi_lime_image_load;}
		 ::lime::graphics::ImageBuffer buffer;
		Bool dirty;
		Int height;
		Int offsetX;
		Int offsetY;
		 ::lime::math::Rectangle rect;
		::hx::EnumBase type;
		Int version;
		Int width;
		Float x;
		Float y;
		 ::lime::graphics::Image clone();
		::Dynamic clone_dyn();

		void colorTransform( ::lime::math::Rectangle rect, ::lime::utils::ArrayBufferView colorMatrix);
		::Dynamic colorTransform_dyn();

		void copyChannel( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,::hx::EnumBase sourceChannel,::hx::EnumBase destChannel);
		::Dynamic copyChannel_dyn();

		void copyPixels( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint, ::lime::graphics::Image alphaImage, ::lime::math::Vector2 alphaPoint,hx::Null< Bool >  mergeAlpha);
		::Dynamic copyPixels_dyn();

		 ::haxe::io::Bytes encode(::String format,hx::Null< Int >  quality);
		::Dynamic encode_dyn();

		void fillRect( ::lime::math::Rectangle rect,Int color, ::Dynamic format);
		::Dynamic fillRect_dyn();

		void floodFill(Int x,Int y,Int color, ::Dynamic format);
		::Dynamic floodFill_dyn();

		 ::lime::math::Rectangle getColorBoundsRect(Int mask,Int color,hx::Null< Bool >  findColor, ::Dynamic format);
		::Dynamic getColorBoundsRect_dyn();

		Int getPixel(Int x,Int y, ::Dynamic format);
		::Dynamic getPixel_dyn();

		Int getPixel32(Int x,Int y, ::Dynamic format);
		::Dynamic getPixel32_dyn();

		 ::haxe::io::Bytes getPixels( ::lime::math::Rectangle rect, ::Dynamic format);
		::Dynamic getPixels_dyn();

		void merge( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,Int redMultiplier,Int greenMultiplier,Int blueMultiplier,Int alphaMultiplier);
		::Dynamic merge_dyn();

		void resize(Int newWidth,Int newHeight);
		::Dynamic resize_dyn();

		void scroll(Int x,Int y);
		::Dynamic scroll_dyn();

		void setPixel(Int x,Int y,Int color, ::Dynamic format);
		::Dynamic setPixel_dyn();

		void setPixel32(Int x,Int y,Int color, ::Dynamic format);
		::Dynamic setPixel32_dyn();

		void setPixels( ::lime::math::Rectangle rect, ::haxe::io::Bytes bytes, ::Dynamic format);
		::Dynamic setPixels_dyn();

		Int threshold( ::lime::graphics::Image sourceImage, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,::String operation,Int threshold,hx::Null< Int >  color,hx::Null< Int >  mask,hx::Null< Bool >  copySource, ::Dynamic format);
		::Dynamic threshold_dyn();

		 ::lime::math::Rectangle _hx___clipRect( ::lime::math::Rectangle r);
		::Dynamic _hx___clipRect_dyn();

		void _hx___fromBase64(::String base64,::String type, ::Dynamic onload);
		::Dynamic _hx___fromBase64_dyn();

		void _hx___fromBytes( ::haxe::io::Bytes bytes, ::Dynamic onload);
		::Dynamic _hx___fromBytes_dyn();

		void _hx___fromFile(::String path, ::Dynamic onload, ::Dynamic onerror);
		::Dynamic _hx___fromFile_dyn();

		void _hx___fromImageBuffer( ::lime::graphics::ImageBuffer buffer);
		::Dynamic _hx___fromImageBuffer_dyn();

		 ::lime::utils::ArrayBufferView get_data();
		::Dynamic get_data_dyn();

		 ::lime::utils::ArrayBufferView set_data( ::lime::utils::ArrayBufferView value);
		::Dynamic set_data_dyn();

		Int get_format();
		::Dynamic get_format_dyn();

		Int set_format(Int value);
		::Dynamic set_format_dyn();

		Bool get_powerOfTwo();
		::Dynamic get_powerOfTwo_dyn();

		Bool set_powerOfTwo(Bool value);
		::Dynamic set_powerOfTwo_dyn();

		Bool get_premultiplied();
		::Dynamic get_premultiplied_dyn();

		Bool set_premultiplied(Bool value);
		::Dynamic set_premultiplied_dyn();

		 ::lime::math::Rectangle get_rect();
		::Dynamic get_rect_dyn();

		 ::Dynamic get_src();
		::Dynamic get_src_dyn();

		 ::Dynamic set_src( ::Dynamic value);
		::Dynamic set_src_dyn();

		Bool get_transparent();
		::Dynamic get_transparent_dyn();

		Bool set_transparent(Bool value);
		::Dynamic set_transparent_dyn();

};

} // end namespace lime
} // end namespace graphics

#endif /* INCLUDED_lime_graphics_Image */ 