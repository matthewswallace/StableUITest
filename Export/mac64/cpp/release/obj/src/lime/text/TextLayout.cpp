// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_text_GlyphPosition
#include <lime/text/GlyphPosition.h>
#endif
#ifndef INCLUDED_lime_text_TextLayout
#include <lime/text/TextLayout.h>
#endif

namespace lime{
namespace text{

void TextLayout_obj::__construct(::String __o_text, ::lime::text::Font font,hx::Null< Int >  __o_size,hx::Null< Int >  __o_direction,::String __o_script,::String __o_language){
::String text = __o_text.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Int size = __o_size.Default(12);
Int direction = __o_direction.Default(4);
::String script = __o_script.Default(HX_HCSTRING("Zyyy","\x7f","\x6e","\xd9","\x3b"));
::String language = __o_language.Default(HX_HCSTRING("en","\x69","\x58","\x00","\x00"));
            	HX_STACK_FRAME("lime.text.TextLayout","new",0xa8c39291,"lime.text.TextLayout.new","lime/text/TextLayout.hx",36,0x8df0119f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(text,"text")
            	HX_STACK_ARG(font,"font")
            	HX_STACK_ARG(size,"size")
            	HX_STACK_ARG(direction,"direction")
            	HX_STACK_ARG(script,"script")
            	HX_STACK_ARG(language,"language")
HXLINE(  38)		this->set_text(text);
HXLINE(  39)		this->set_font(font);
HXLINE(  40)		this->set_size(size);
HXLINE(  41)		this->_hx___direction = direction;
HXLINE(  42)		this->_hx___script = script;
HXLINE(  43)		this->_hx___language = language;
HXLINE(  45)		this->positions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  46)		this->_hx___dirty = true;
HXLINE(  49)		Int direction1 = this->_hx___direction;
HXDLIN(  49)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::text::TextLayout_obj::cffi_lime_text_layout_create(direction1,this->_hx___script,this->_hx___language)) );
HXDLIN(  49)		 ::Dynamic _hx_tmp = Dynamic(hx::DynamicPtr(inVal));
HXDLIN(  49)		this->_hx___handle = _hx_tmp;
            	}

Dynamic TextLayout_obj::__CreateEmpty() { return new TextLayout_obj; }

hx::ObjectPtr< TextLayout_obj > TextLayout_obj::__new(::String __o_text, ::lime::text::Font font,hx::Null< Int >  __o_size,hx::Null< Int >  __o_direction,::String __o_script,::String __o_language)
{
	hx::ObjectPtr< TextLayout_obj > _hx_result = new TextLayout_obj();
	_hx_result->__construct(__o_text,font,__o_size,__o_direction,__o_script,__o_language);
	return _hx_result;
}

Dynamic TextLayout_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextLayout_obj > _hx_result = new TextLayout_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

void TextLayout_obj::_hx___position(){
            	HX_STACK_FRAME("lime.text.TextLayout","__position",0x6ec769b8,"lime.text.TextLayout.__position","lime/text/TextLayout.hx",54,0x8df0119f)
            	HX_STACK_THIS(this)
HXLINE(  56)		this->positions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  60)		Bool _hx_tmp;
HXDLIN(  60)		Bool _hx_tmp1;
HXDLIN(  60)		Bool _hx_tmp2;
HXDLIN(  60)		Bool _hx_tmp3;
HXDLIN(  60)		Bool _hx_tmp4 = hx::IsNotNull( this->_hx___handle );
HXDLIN(  60)		if (_hx_tmp4) {
HXLINE(  60)			_hx_tmp3 = hx::IsNotNull( this->text );
            		}
            		else {
HXLINE(  60)			_hx_tmp3 = false;
            		}
HXDLIN(  60)		if (_hx_tmp3) {
HXLINE(  60)			_hx_tmp2 = (this->text != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  60)			_hx_tmp2 = false;
            		}
HXDLIN(  60)		if (_hx_tmp2) {
HXLINE(  60)			_hx_tmp1 = hx::IsNotNull( this->font );
            		}
            		else {
HXLINE(  60)			_hx_tmp1 = false;
            		}
HXDLIN(  60)		if (_hx_tmp1) {
HXLINE(  60)			_hx_tmp = hx::IsNotNull( this->font->src );
            		}
            		else {
HXLINE(  60)			_hx_tmp = false;
            		}
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  62)			Bool _hx_tmp5 = hx::IsNull( this->_hx___buffer );
HXDLIN(  62)			if (_hx_tmp5) {
HXLINE(  64)				this->_hx___buffer = ::haxe::io::Bytes_obj::alloc((int)1);
            			}
HXLINE(  69)			 ::Dynamic textHandle = this->_hx___handle;
HXDLIN(  69)			 ::Dynamic fontHandle = this->font->src;
HXDLIN(  69)			Int size = this->size;
HXDLIN(  69)			 ::hx::Object * _hx_tmp6 = hx::DynamicPtr(textHandle);
HXDLIN(  69)			 ::hx::Object * _hx_tmp7 = hx::DynamicPtr(fontHandle);
HXDLIN(  69)			 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::text::TextLayout_obj::cffi_lime_text_layout_position(_hx_tmp6,_hx_tmp7,size,this->text,hx::DynamicPtr(this->_hx___buffer))) );
HXDLIN(  69)			Dynamic(hx::DynamicPtr(inVal));
HXLINE(  70)			HX_VARI( Int,position) = (int)0;
HXLINE(  72)			Bool _hx_tmp8 = (this->_hx___buffer->length > (int)4);
HXDLIN(  72)			if (_hx_tmp8) {
HXLINE(  74)				HX_VARI(  ::haxe::io::Bytes,_this) = this->_hx___buffer;
HXDLIN(  74)				HX_VARI( Int,count) = ((int)((int)((int)_this->b->__get((int)0) | (int)((int)_this->b->__get((int)1) << (int)(int)8)) | (int)((int)_this->b->__get((int)2) << (int)(int)16)) | (int)((int)_this->b->__get((int)3) << (int)(int)24));
HXDLIN(  74)				position = (int)4;
HXLINE(  75)				HX_VAR( Int,index);
HXDLIN(  75)				HX_VAR( Float,advanceX);
HXDLIN(  75)				HX_VAR( Float,advanceY);
HXDLIN(  75)				HX_VAR( Float,offsetX);
HXDLIN(  75)				HX_VAR( Float,offsetY);
HXLINE(  77)				{
HXLINE(  77)					HX_VARI( Int,_g1) = (int)0;
HXDLIN(  77)					while((_g1 < count)){
HXLINE(  77)						++_g1;
HXLINE(  79)						HX_VARI_NAME(  ::haxe::io::Bytes,_this1,"_this") = this->_hx___buffer;
HXDLIN(  79)						index = ((int)((int)((int)_this1->b->__get(position) | (int)((int)_this1->b->__get((position + (int)1)) << (int)(int)8)) | (int)((int)_this1->b->__get((position + (int)2)) << (int)(int)16)) | (int)((int)_this1->b->__get((position + (int)3)) << (int)(int)24));
HXDLIN(  79)						hx::AddEq(position,(int)4);
HXLINE(  80)						HX_VARI_NAME(  ::haxe::io::Bytes,_this2,"_this") = this->_hx___buffer;
HXDLIN(  80)						Bool _hx_tmp9;
HXDLIN(  80)						if ((position >= (int)0)) {
HXLINE(  80)							_hx_tmp9 = ((position + (int)4) > _this2->length);
            						}
            						else {
HXLINE(  80)							_hx_tmp9 = true;
            						}
HXDLIN(  80)						if (_hx_tmp9) {
HXLINE(  80)							HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            						}
HXDLIN(  80)						advanceX = ::__hxcpp_memory_get_float(_this2->b,position);
HXDLIN(  80)						hx::AddEq(position,(int)4);
HXLINE(  81)						HX_VARI_NAME(  ::haxe::io::Bytes,_this3,"_this") = this->_hx___buffer;
HXDLIN(  81)						Bool _hx_tmp10;
HXDLIN(  81)						if ((position >= (int)0)) {
HXLINE(  81)							_hx_tmp10 = ((position + (int)4) > _this3->length);
            						}
            						else {
HXLINE(  81)							_hx_tmp10 = true;
            						}
HXDLIN(  81)						if (_hx_tmp10) {
HXLINE(  81)							HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            						}
HXDLIN(  81)						advanceY = ::__hxcpp_memory_get_float(_this3->b,position);
HXDLIN(  81)						hx::AddEq(position,(int)4);
HXLINE(  82)						HX_VARI_NAME(  ::haxe::io::Bytes,_this4,"_this") = this->_hx___buffer;
HXDLIN(  82)						Bool _hx_tmp11;
HXDLIN(  82)						if ((position >= (int)0)) {
HXLINE(  82)							_hx_tmp11 = ((position + (int)4) > _this4->length);
            						}
            						else {
HXLINE(  82)							_hx_tmp11 = true;
            						}
HXDLIN(  82)						if (_hx_tmp11) {
HXLINE(  82)							HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            						}
HXDLIN(  82)						offsetX = ::__hxcpp_memory_get_float(_this4->b,position);
HXDLIN(  82)						hx::AddEq(position,(int)4);
HXLINE(  83)						HX_VARI_NAME(  ::haxe::io::Bytes,_this5,"_this") = this->_hx___buffer;
HXDLIN(  83)						Bool _hx_tmp12;
HXDLIN(  83)						if ((position >= (int)0)) {
HXLINE(  83)							_hx_tmp12 = ((position + (int)4) > _this5->length);
            						}
            						else {
HXLINE(  83)							_hx_tmp12 = true;
            						}
HXDLIN(  83)						if (_hx_tmp12) {
HXLINE(  83)							HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            						}
HXDLIN(  83)						offsetY = ::__hxcpp_memory_get_float(_this5->b,position);
HXDLIN(  83)						hx::AddEq(position,(int)4);
HXLINE(  85)						::Array< ::Dynamic> _hx_tmp13 = this->get_positions();
HXDLIN(  85)						_hx_tmp13->push( ::lime::text::GlyphPosition_obj::__new(index, ::lime::math::Vector2_obj::__new(advanceX,advanceY), ::lime::math::Vector2_obj::__new(offsetX,offsetY)));
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,_hx___position,(void))

::Array< ::Dynamic> TextLayout_obj::get_positions(){
            	HX_STACK_FRAME("lime.text.TextLayout","get_positions",0xf2be90f2,"lime.text.TextLayout.get_positions","lime/text/TextLayout.hx",104,0x8df0119f)
            	HX_STACK_THIS(this)
HXLINE( 106)		Bool _hx_tmp = this->_hx___dirty;
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 108)			this->_hx___dirty = false;
HXLINE( 109)			this->_hx___position();
            		}
HXLINE( 113)		return this->positions;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_positions,return )

Int TextLayout_obj::get_direction(){
            	HX_STACK_FRAME("lime.text.TextLayout","get_direction",0x32acff87,"lime.text.TextLayout.get_direction","lime/text/TextLayout.hx",120,0x8df0119f)
            	HX_STACK_THIS(this)
HXLINE( 120)		return this->_hx___direction;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_direction,return )

Int TextLayout_obj::set_direction(Int value){
            	HX_STACK_FRAME("lime.text.TextLayout","set_direction",0x77b2e193,"lime.text.TextLayout.set_direction","lime/text/TextLayout.hx",125,0x8df0119f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 127)		if ((value == this->_hx___direction)) {
HXLINE( 127)			return value;
            		}
HXLINE( 129)		this->_hx___direction = value;
HXLINE( 132)		{
HXLINE( 132)			 ::Dynamic textHandle = this->_hx___handle;
HXDLIN( 132)			::lime::text::TextLayout_obj::cffi_lime_text_layout_set_direction(hx::DynamicPtr(textHandle),value);
            		}
HXLINE( 135)		this->_hx___dirty = true;
HXLINE( 137)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_direction,return )

 ::lime::text::Font TextLayout_obj::set_font( ::lime::text::Font value){
            	HX_STACK_FRAME("lime.text.TextLayout","set_font",0xaa861efb,"lime.text.TextLayout.set_font","lime/text/TextLayout.hx",142,0x8df0119f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 144)		if (hx::IsEq( value,this->font )) {
HXLINE( 144)			return value;
            		}
HXLINE( 146)		this->font = value;
HXLINE( 147)		this->_hx___dirty = true;
HXLINE( 148)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_font,return )

::Array< Int > TextLayout_obj::get_glyphs(){
            	HX_STACK_FRAME("lime.text.TextLayout","get_glyphs",0x9f74beff,"lime.text.TextLayout.get_glyphs","lime/text/TextLayout.hx",153,0x8df0119f)
            	HX_STACK_THIS(this)
HXLINE( 155)		HX_VARI( ::Array< Int >,glyphs) = ::Array_obj< Int >::__new(0);
HXLINE( 157)		{
HXLINE( 157)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 157)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->get_positions();
HXDLIN( 157)			while((_g < _g1->length)){
HXLINE( 157)				HX_VARI(  ::lime::text::GlyphPosition,position) = _g1->__get(_g).StaticCast<  ::lime::text::GlyphPosition >();
HXDLIN( 157)				++_g;
HXLINE( 159)				glyphs->push(position->glyph);
            			}
            		}
HXLINE( 163)		return glyphs;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_glyphs,return )

::String TextLayout_obj::get_language(){
            	HX_STACK_FRAME("lime.text.TextLayout","get_language",0xbdf42410,"lime.text.TextLayout.get_language","lime/text/TextLayout.hx",170,0x8df0119f)
            	HX_STACK_THIS(this)
HXLINE( 170)		return this->_hx___language;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_language,return )

::String TextLayout_obj::set_language(::String value){
            	HX_STACK_FRAME("lime.text.TextLayout","set_language",0xd2ed4784,"lime.text.TextLayout.set_language","lime/text/TextLayout.hx",175,0x8df0119f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 177)		if ((value == this->_hx___language)) {
HXLINE( 177)			return value;
            		}
HXLINE( 179)		this->_hx___language = value;
HXLINE( 182)		{
HXLINE( 182)			 ::Dynamic textHandle = this->_hx___handle;
HXDLIN( 182)			::lime::text::TextLayout_obj::cffi_lime_text_layout_set_language(hx::DynamicPtr(textHandle),value);
            		}
HXLINE( 185)		this->_hx___dirty = true;
HXLINE( 187)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_language,return )

::String TextLayout_obj::get_script(){
            	HX_STACK_FRAME("lime.text.TextLayout","get_script",0x387c13c3,"lime.text.TextLayout.get_script","lime/text/TextLayout.hx",194,0x8df0119f)
            	HX_STACK_THIS(this)
HXLINE( 194)		return this->_hx___script;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextLayout_obj,get_script,return )

::String TextLayout_obj::set_script(::String value){
            	HX_STACK_FRAME("lime.text.TextLayout","set_script",0x3bf9b237,"lime.text.TextLayout.set_script","lime/text/TextLayout.hx",199,0x8df0119f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 201)		if ((value == this->_hx___script)) {
HXLINE( 201)			return value;
            		}
HXLINE( 203)		this->_hx___script = value;
HXLINE( 206)		{
HXLINE( 206)			 ::Dynamic textHandle = this->_hx___handle;
HXDLIN( 206)			::lime::text::TextLayout_obj::cffi_lime_text_layout_set_script(hx::DynamicPtr(textHandle),value);
            		}
HXLINE( 209)		this->_hx___dirty = true;
HXLINE( 211)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_script,return )

Int TextLayout_obj::set_size(Int value){
            	HX_STACK_FRAME("lime.text.TextLayout","set_size",0xb31961ed,"lime.text.TextLayout.set_size","lime/text/TextLayout.hx",216,0x8df0119f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 218)		if ((value == this->size)) {
HXLINE( 218)			return value;
            		}
HXLINE( 220)		this->size = value;
HXLINE( 221)		this->_hx___dirty = true;
HXLINE( 222)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_size,return )

::String TextLayout_obj::set_text(::String value){
            	HX_STACK_FRAME("lime.text.TextLayout","set_text",0xb3bf8dd9,"lime.text.TextLayout.set_text","lime/text/TextLayout.hx",227,0x8df0119f)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE( 229)		if ((value == this->text)) {
HXLINE( 229)			return value;
            		}
HXLINE( 231)		this->text = value;
HXLINE( 232)		this->_hx___dirty = true;
HXLINE( 233)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TextLayout_obj,set_text,return )

 ::Dynamic TextLayout_obj::lime_text_layout_create(Int direction,::String script,::String language){
            	HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_create",0x00c1b3ba,"lime.text.TextLayout.lime_text_layout_create","lime/text/TextLayout.hx",246,0x8df0119f)
            	HX_STACK_ARG(direction,"direction")
            	HX_STACK_ARG(script,"script")
            	HX_STACK_ARG(language,"language")
HXLINE( 246)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::text::TextLayout_obj::cffi_lime_text_layout_create(direction,script,language)) );
HXDLIN( 246)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TextLayout_obj,lime_text_layout_create,return )

 ::Dynamic TextLayout_obj::lime_text_layout_position( ::Dynamic textHandle, ::Dynamic fontHandle,Int size,::String textString, ::Dynamic data){
            	HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_position",0x9a6818e7,"lime.text.TextLayout.lime_text_layout_position","lime/text/TextLayout.hx",247,0x8df0119f)
            	HX_STACK_ARG(textHandle,"textHandle")
            	HX_STACK_ARG(fontHandle,"fontHandle")
            	HX_STACK_ARG(size,"size")
            	HX_STACK_ARG(textString,"textString")
            	HX_STACK_ARG(data,"data")
HXLINE( 247)		 ::hx::Object * _hx_tmp = hx::DynamicPtr(textHandle);
HXDLIN( 247)		 ::hx::Object * _hx_tmp1 = hx::DynamicPtr(fontHandle);
HXDLIN( 247)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::text::TextLayout_obj::cffi_lime_text_layout_position(_hx_tmp,_hx_tmp1,size,textString,hx::DynamicPtr(data))) );
HXDLIN( 247)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TextLayout_obj,lime_text_layout_position,return )

void TextLayout_obj::lime_text_layout_set_direction( ::Dynamic textHandle,Int direction){
            	HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_set_direction",0xd989ff24,"lime.text.TextLayout.lime_text_layout_set_direction","lime/text/TextLayout.hx",248,0x8df0119f)
            	HX_STACK_ARG(textHandle,"textHandle")
            	HX_STACK_ARG(direction,"direction")
HXLINE( 248)		::lime::text::TextLayout_obj::cffi_lime_text_layout_set_direction(hx::DynamicPtr(textHandle),direction);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextLayout_obj,lime_text_layout_set_direction,(void))

void TextLayout_obj::lime_text_layout_set_language( ::Dynamic textHandle,::String language){
            	HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_set_language",0x9685c713,"lime.text.TextLayout.lime_text_layout_set_language","lime/text/TextLayout.hx",249,0x8df0119f)
            	HX_STACK_ARG(textHandle,"textHandle")
            	HX_STACK_ARG(language,"language")
HXLINE( 249)		::lime::text::TextLayout_obj::cffi_lime_text_layout_set_language(hx::DynamicPtr(textHandle),language);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextLayout_obj,lime_text_layout_set_language,(void))

void TextLayout_obj::lime_text_layout_set_script( ::Dynamic textHandle,::String script){
            	HX_STACK_FRAME("lime.text.TextLayout","lime_text_layout_set_script",0xdb4fe006,"lime.text.TextLayout.lime_text_layout_set_script","lime/text/TextLayout.hx",250,0x8df0119f)
            	HX_STACK_ARG(textHandle,"textHandle")
            	HX_STACK_ARG(script,"script")
HXLINE( 250)		::lime::text::TextLayout_obj::cffi_lime_text_layout_set_script(hx::DynamicPtr(textHandle),script);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TextLayout_obj,lime_text_layout_set_script,(void))

::cpp::Function<   ::hx::Object *(Int,::String,::String) > TextLayout_obj::cffi_lime_text_layout_create;

::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *,Int,::String, ::hx::Object *) > TextLayout_obj::cffi_lime_text_layout_position;

::cpp::Function<  void( ::hx::Object *,Int) > TextLayout_obj::cffi_lime_text_layout_set_direction;

::cpp::Function<  void( ::hx::Object *,::String) > TextLayout_obj::cffi_lime_text_layout_set_language;

::cpp::Function<  void( ::hx::Object *,::String) > TextLayout_obj::cffi_lime_text_layout_set_script;


TextLayout_obj::TextLayout_obj()
{
}

void TextLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextLayout);
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(glyphs,"glyphs");
	HX_MARK_MEMBER_NAME(positions,"positions");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_MARK_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_MARK_MEMBER_NAME(_hx___direction,"__direction");
	HX_MARK_MEMBER_NAME(_hx___handle,"__handle");
	HX_MARK_MEMBER_NAME(_hx___language,"__language");
	HX_MARK_MEMBER_NAME(_hx___script,"__script");
	HX_MARK_END_CLASS();
}

void TextLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(glyphs,"glyphs");
	HX_VISIT_MEMBER_NAME(positions,"positions");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_hx___dirty,"__dirty");
	HX_VISIT_MEMBER_NAME(_hx___buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(_hx___direction,"__direction");
	HX_VISIT_MEMBER_NAME(_hx___handle,"__handle");
	HX_VISIT_MEMBER_NAME(_hx___language,"__language");
	HX_VISIT_MEMBER_NAME(_hx___script,"__script");
}

hx::Val TextLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return hx::Val( font); }
		if (HX_FIELD_EQ(inName,"size") ) { return hx::Val( size); }
		if (HX_FIELD_EQ(inName,"text") ) { return hx::Val( text); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { return hx::Val( inCallProp == hx::paccAlways ? get_glyphs() : glyphs); }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_script()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { return hx::Val( _hx___dirty); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_language()); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return hx::Val( _hx___buffer); }
		if (HX_FIELD_EQ(inName,"__handle") ) { return hx::Val( _hx___handle); }
		if (HX_FIELD_EQ(inName,"__script") ) { return hx::Val( _hx___script); }
		if (HX_FIELD_EQ(inName,"set_font") ) { return hx::Val( set_font_dyn()); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return hx::Val( set_size_dyn()); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_direction()); }
		if (HX_FIELD_EQ(inName,"positions") ) { return hx::Val( inCallProp == hx::paccAlways ? get_positions() : positions); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { return hx::Val( _hx___language); }
		if (HX_FIELD_EQ(inName,"__position") ) { return hx::Val( _hx___position_dyn()); }
		if (HX_FIELD_EQ(inName,"get_glyphs") ) { return hx::Val( get_glyphs_dyn()); }
		if (HX_FIELD_EQ(inName,"get_script") ) { return hx::Val( get_script_dyn()); }
		if (HX_FIELD_EQ(inName,"set_script") ) { return hx::Val( set_script_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { return hx::Val( _hx___direction); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_language") ) { return hx::Val( get_language_dyn()); }
		if (HX_FIELD_EQ(inName,"set_language") ) { return hx::Val( set_language_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_positions") ) { return hx::Val( get_positions_dyn()); }
		if (HX_FIELD_EQ(inName,"get_direction") ) { return hx::Val( get_direction_dyn()); }
		if (HX_FIELD_EQ(inName,"set_direction") ) { return hx::Val( set_direction_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextLayout_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"lime_text_layout_create") ) { outValue = lime_text_layout_create_dyn(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_text_layout_position") ) { outValue = lime_text_layout_position_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_script") ) { outValue = lime_text_layout_set_script_dyn(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_create") ) { outValue = cffi_lime_text_layout_create; return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_language") ) { outValue = lime_text_layout_set_language_dyn(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_text_layout_set_direction") ) { outValue = lime_text_layout_set_direction_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_position") ) { outValue = cffi_lime_text_layout_position; return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_script") ) { outValue = cffi_lime_text_layout_set_script; return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_language") ) { outValue = cffi_lime_text_layout_set_language; return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_direction") ) { outValue = cffi_lime_text_layout_set_direction; return true; }
	}
	return false;
}

hx::Val TextLayout_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_font(inValue) );font=inValue.Cast<  ::lime::text::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_size(inValue) );size=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_text(inValue) );text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"glyphs") ) { glyphs=inValue.Cast< ::Array< Int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"script") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_script(inValue) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__dirty") ) { _hx___dirty=inValue.Cast< Bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"language") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_language(inValue) ); }
		if (HX_FIELD_EQ(inName,"__buffer") ) { _hx___buffer=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__handle") ) { _hx___handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__script") ) { _hx___script=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_direction(inValue) ); }
		if (HX_FIELD_EQ(inName,"positions") ) { positions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__language") ) { _hx___language=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__direction") ) { _hx___direction=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextLayout_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_create") ) { cffi_lime_text_layout_create=ioValue.Cast< ::cpp::Function<   ::hx::Object *(Int,::String,::String) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_position") ) { cffi_lime_text_layout_position=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *, ::hx::Object *,Int,::String, ::hx::Object *) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_script") ) { cffi_lime_text_layout_set_script=ioValue.Cast< ::cpp::Function<  void( ::hx::Object *,::String) > >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_language") ) { cffi_lime_text_layout_set_language=ioValue.Cast< ::cpp::Function<  void( ::hx::Object *,::String) > >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_text_layout_set_direction") ) { cffi_lime_text_layout_set_direction=ioValue.Cast< ::cpp::Function<  void( ::hx::Object *,Int) > >(); return true; }
	}
	return false;
}

void TextLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("direction","\x3f","\x62","\x40","\x10"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"));
	outFields->push(HX_HCSTRING("language","\x58","\x80","\x11","\x7a"));
	outFields->push(HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"));
	outFields->push(HX_HCSTRING("script","\x0b","\x4e","\x60","\x47"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d"));
	outFields->push(HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TextLayout_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::text::Font*/ ,(int)offsetof(TextLayout_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TextLayout_obj,glyphs),HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TextLayout_obj,positions),HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,size),HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c")},
	{hx::fsString,(int)offsetof(TextLayout_obj,text),HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c")},
	{hx::fsBool,(int)offsetof(TextLayout_obj,_hx___dirty),HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44")},
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(TextLayout_obj,_hx___buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsInt,(int)offsetof(TextLayout_obj,_hx___direction),HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TextLayout_obj,_hx___handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsString,(int)offsetof(TextLayout_obj,_hx___language),HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d")},
	{hx::fsString,(int)offsetof(TextLayout_obj,_hx___script),HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TextLayout_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_create,HX_HCSTRING("cffi_lime_text_layout_create","\x30","\x9f","\x85","\x5c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_position,HX_HCSTRING("cffi_lime_text_layout_position","\xdd","\x4d","\x96","\x5f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_set_direction,HX_HCSTRING("cffi_lime_text_layout_set_direction","\x6e","\x0e","\x2a","\x78")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_set_language,HX_HCSTRING("cffi_lime_text_layout_set_language","\x09","\xaf","\x70","\x05")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextLayout_obj::cffi_lime_text_layout_set_script,HX_HCSTRING("cffi_lime_text_layout_set_script","\x7c","\xbe","\x2d","\xf0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TextLayout_obj_sMemberFields[] = {
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("glyphs","\x47","\xf9","\x58","\xae"),
	HX_HCSTRING("positions","\xaa","\xf3","\x51","\xd0"),
	HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"),
	HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"),
	HX_HCSTRING("__dirty","\xf2","\xa8","\x2e","\x44"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__direction","\x1f","\xab","\x6c","\x3e"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__language","\x78","\xf3","\x49","\x1d"),
	HX_HCSTRING("__script","\x2b","\xb9","\x8f","\xef"),
	HX_HCSTRING("__position","\xc9","\x13","\x33","\x6e"),
	HX_HCSTRING("get_positions","\x81","\xc7","\xb5","\x91"),
	HX_HCSTRING("get_direction","\x16","\x36","\xa4","\xd1"),
	HX_HCSTRING("set_direction","\x22","\x18","\xaa","\x16"),
	HX_HCSTRING("set_font","\xcc","\x72","\xd8","\x71"),
	HX_HCSTRING("get_glyphs","\x10","\x69","\xe0","\x9e"),
	HX_HCSTRING("get_language","\x61","\x34","\x2b","\x2f"),
	HX_HCSTRING("set_language","\xd5","\x57","\x24","\x44"),
	HX_HCSTRING("get_script","\xd4","\xbd","\xe7","\x37"),
	HX_HCSTRING("set_script","\x48","\x5c","\x65","\x3b"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	::String(null()) };

static void TextLayout_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_create,"cffi_lime_text_layout_create");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_position,"cffi_lime_text_layout_position");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_direction,"cffi_lime_text_layout_set_direction");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_language,"cffi_lime_text_layout_set_language");
	HX_MARK_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_script,"cffi_lime_text_layout_set_script");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextLayout_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLayout_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_create,"cffi_lime_text_layout_create");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_position,"cffi_lime_text_layout_position");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_direction,"cffi_lime_text_layout_set_direction");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_language,"cffi_lime_text_layout_set_language");
	HX_VISIT_MEMBER_NAME(TextLayout_obj::cffi_lime_text_layout_set_script,"cffi_lime_text_layout_set_script");
};

#endif

hx::Class TextLayout_obj::__mClass;

static ::String TextLayout_obj_sStaticFields[] = {
	HX_HCSTRING("lime_text_layout_create","\x09","\x53","\x56","\x81"),
	HX_HCSTRING("lime_text_layout_position","\xf6","\x69","\xde","\xe0"),
	HX_HCSTRING("lime_text_layout_set_direction","\xb5","\x77","\xe8","\x4e"),
	HX_HCSTRING("lime_text_layout_set_language","\xa2","\x4b","\xfb","\x67"),
	HX_HCSTRING("lime_text_layout_set_script","\xd5","\xd2","\xc7","\x68"),
	HX_HCSTRING("cffi_lime_text_layout_create","\x30","\x9f","\x85","\x5c"),
	HX_HCSTRING("cffi_lime_text_layout_position","\xdd","\x4d","\x96","\x5f"),
	HX_HCSTRING("cffi_lime_text_layout_set_direction","\x6e","\x0e","\x2a","\x78"),
	HX_HCSTRING("cffi_lime_text_layout_set_language","\x09","\xaf","\x70","\x05"),
	HX_HCSTRING("cffi_lime_text_layout_set_script","\x7c","\xbe","\x2d","\xf0"),
	::String(null())
};

void TextLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.text.TextLayout","\x1f","\xf6","\xe8","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextLayout_obj::__GetStatic;
	__mClass->mSetStaticField = &TextLayout_obj::__SetStatic;
	__mClass->mMarkFunc = TextLayout_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TextLayout_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextLayout_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextLayout_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextLayout_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextLayout_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextLayout_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.text.TextLayout","boot",0xfa75ace1,"lime.text.TextLayout.boot","lime/text/TextLayout.hx",246,0x8df0119f)
HXLINE( 246)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_text_layout_create",09,53,56,81),HX_("isso",06,0f,bf,45),false);
HXDLIN( 246)		cffi_lime_text_layout_create = inValue;
            	}
{
            	HX_STACK_FRAME("lime.text.TextLayout","boot",0xfa75ace1,"lime.text.TextLayout.boot","lime/text/TextLayout.hx",247,0x8df0119f)
HXLINE( 247)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_text_layout_position",f6,69,de,e0),HX_("ooisoo",aa,7c,d6,90),false);
HXDLIN( 247)		cffi_lime_text_layout_position = inValue;
            	}
{
            	HX_STACK_FRAME("lime.text.TextLayout","boot",0xfa75ace1,"lime.text.TextLayout.boot","lime/text/TextLayout.hx",248,0x8df0119f)
HXLINE( 248)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_text_layout_set_direction",b5,77,e8,4e),HX_("oiv",1c,96,54,00),false);
HXDLIN( 248)		cffi_lime_text_layout_set_direction = inValue;
            	}
{
            	HX_STACK_FRAME("lime.text.TextLayout","boot",0xfa75ace1,"lime.text.TextLayout.boot","lime/text/TextLayout.hx",249,0x8df0119f)
HXLINE( 249)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_text_layout_set_language",a2,4b,fb,67),HX_("osv",d2,9e,54,00),false);
HXDLIN( 249)		cffi_lime_text_layout_set_language = inValue;
            	}
{
            	HX_STACK_FRAME("lime.text.TextLayout","boot",0xfa75ace1,"lime.text.TextLayout.boot","lime/text/TextLayout.hx",250,0x8df0119f)
HXLINE( 250)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_text_layout_set_script",d5,d2,c7,68),HX_("osv",d2,9e,54,00),false);
HXDLIN( 250)		cffi_lime_text_layout_set_script = inValue;
            	}
}

} // end namespace lime
} // end namespace text
