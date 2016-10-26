// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__internal_text_TextEngine
#define INCLUDED_openfl__internal_text_TextEngine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLTexture)
HX_DECLARE_CLASS2(lime,text,Font)
HX_DECLARE_CLASS2(lime,text,TextLayout)
HX_DECLARE_CLASS3(openfl,_internal,text,TextEngine)
HX_DECLARE_CLASS3(openfl,_internal,text,TextFormatRange)
HX_DECLARE_CLASS3(openfl,_internal,text,TextLayoutGroup)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,text,Font)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace openfl{
namespace _internal{
namespace text{


class HXCPP_CLASS_ATTRIBUTES TextEngine_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextEngine_obj OBJ_;
		TextEngine_obj();

	public:
		void __construct( ::openfl::text::TextField textField);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.text.TextEngine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.text.TextEngine"); }
		static hx::ObjectPtr< TextEngine_obj > __new( ::openfl::text::TextField textField);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextEngine_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TextEngine","\x6f","\xcc","\x25","\x2a"); }

		static void __boot();
		static Int UTF8_TAB;
		static Int UTF8_ENDLINE;
		static Int UTF8_SPACE;
		static Int UTF8_HYPHEN;
		static  ::haxe::ds::StringMap _hx___defaultFonts;
		static  ::openfl::text::Font findFont(::String name);
		static ::Dynamic findFont_dyn();

		static Float getFormatHeight( ::openfl::text::TextFormat format);
		static ::Dynamic getFormatHeight_dyn();

		static ::String getFont( ::openfl::text::TextFormat format);
		static ::Dynamic getFont_dyn();

		static  ::openfl::text::Font getFontInstance( ::openfl::text::TextFormat format);
		static ::Dynamic getFontInstance_dyn();

		 ::Dynamic antiAliasType;
		 ::Dynamic autoSize;
		Bool background;
		Int backgroundColor;
		Bool border;
		Int borderColor;
		Int bottomScrollV;
		 ::openfl::geom::Rectangle bounds;
		Int caretIndex;
		Bool embedFonts;
		 ::Dynamic gridFitType;
		Float height;
		::Array< ::Dynamic> layoutGroups;
		::Array< Float > lineAscents;
		::Array< Int > lineBreaks;
		::Array< Float > lineDescents;
		::Array< Float > lineLeadings;
		::Array< Float > lineHeights;
		::Array< Float > lineWidths;
		Int maxChars;
		Int maxScrollH;
		Int maxScrollV;
		Bool multiline;
		Int numLines;
		::String restrict;
		Int scrollH;
		Int scrollV;
		Bool selectable;
		Float sharpness;
		::String text;
		Float textHeight;
		::Array< ::Dynamic> textFormatRanges;
		Float textWidth;
		 ::Dynamic type;
		Float width;
		Bool wordWrap;
		 ::openfl::text::TextField textField;
		Int _hx___cursorPosition;
		 ::haxe::Timer _hx___cursorTimer;
		Bool _hx___hasFocus;
		Bool _hx___isKeyDown;
		Int _hx___measuredHeight;
		Int _hx___measuredWidth;
		Int _hx___selectionStart;
		Bool _hx___showCursor;
		 ::openfl::text::TextFormat _hx___textFormat;
		 ::lime::text::TextLayout _hx___textLayout;
		 ::lime::graphics::opengl::GLTexture _hx___texture;
		 ::Dynamic _hx___cairoFont;
		 ::openfl::text::Font _hx___font;
		void getBounds();
		::Dynamic getBounds_dyn();

		::String getLine(Int index);
		::Dynamic getLine_dyn();

		Int getLineBreakIndex(hx::Null< Int >  startIndex);
		::Dynamic getLineBreakIndex_dyn();

		void getLineMeasurements();
		::Dynamic getLineMeasurements_dyn();

		void getLayoutGroups();
		::Dynamic getLayoutGroups_dyn();

		void setTextAlignment();
		::Dynamic setTextAlignment_dyn();

		void update();
		::Dynamic update_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace text

#endif /* INCLUDED_openfl__internal_text_TextEngine */ 
