// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_GLUtils
#include <openfl/_internal/stage3D/GLUtils.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

namespace openfl{
namespace display3D{
namespace textures{

void Texture_obj::__construct( ::openfl::display3D::Context3D context,Int width,Int height, ::Dynamic format,Bool optimizeForRenderToTexture,Int streamingLevels){
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","new",0xaee720f0,"openfl.display3D.textures.Texture.new","openfl/display3D/textures/Texture.hx",29,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(context,"context")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(format,"format")
            	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
            	HX_STACK_ARG(streamingLevels,"streamingLevels")
HXLINE(  31)		super::__construct(context,(int)3553);
HXLINE(  33)		this->_hx___width = width;
HXLINE(  34)		this->_hx___height = height;
HXLINE(  36)		this->_hx___optimizeForRenderToTexture = optimizeForRenderToTexture;
HXLINE(  37)		this->_hx___streamingLevels = streamingLevels;
            	}

Dynamic Texture_obj::__CreateEmpty() { return new Texture_obj; }

hx::ObjectPtr< Texture_obj > Texture_obj::__new( ::openfl::display3D::Context3D context,Int width,Int height, ::Dynamic format,Bool optimizeForRenderToTexture,Int streamingLevels)
{
	hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(context,width,height,format,optimizeForRenderToTexture,streamingLevels);
	return _hx_result;
}

Dynamic Texture_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Texture_obj > _hx_result = new Texture_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

void Texture_obj::uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,Int byteArrayOffset,hx::Null< Bool >  __o_async){
Bool async = __o_async.Default(false);
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",44,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
            	HX_STACK_ARG(async,"async")
HXLINE(  44)		HX_VARI(  ::openfl::display3D::textures::Texture,_gthis) = hx::ObjectPtr<OBJ_>(this);
HXLINE(  46)		data->position = byteArrayOffset;
HXLINE(  47)		HX_VARI( ::String,signature) = data->readUTFBytes((int)3);
HXLINE(  48)		data->position = byteArrayOffset;
HXLINE(  50)		if ((signature == HX_("ATF",f3,9b,31,00))) {
HXLINE(  52)			{
HXLINE(  52)				Int target = this->_hx___textureTarget;
HXDLIN(  52)				HX_VARI(  ::lime::graphics::opengl::GLTexture,texture) = this->_hx___textureID;
HXDLIN(  52)				{
HXLINE(  52)					 ::Dynamic texture1;
HXDLIN(  52)					Bool _hx_tmp = hx::IsNull( texture );
HXDLIN(  52)					if (_hx_tmp) {
HXLINE(  52)						texture1 = null();
            					}
            					else {
HXLINE(  52)						texture1 = texture->id;
            					}
HXDLIN(  52)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture(target,hx::DynamicPtr(texture1));
            				}
            			}
HXLINE(  53)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE(  55)			this->_hx___uploadATFTextureFromByteArray(data,byteArrayOffset);
HXLINE(  57)			{
HXLINE(  57)				Int target1 = this->_hx___textureTarget;
HXDLIN(  57)				{
HXLINE(  57)					 ::Dynamic texture2 = null();
HXDLIN(  57)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture(target1,hx::DynamicPtr(texture2));
            				}
            			}
HXLINE(  58)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            		}
            		else {
HXLINE(  64)			{
HXLINE(  64)				Int target2 = this->_hx___textureTarget;
HXDLIN(  64)				{
HXLINE(  64)					 ::Dynamic texture3 = null();
HXDLIN(  64)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture(target2,hx::DynamicPtr(texture3));
            				}
            			}
HXLINE(  65)			::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
            		}
HXLINE(  69)		if (async) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::openfl::display3D::textures::Texture,_gthis) HXARGC(0)
            			void _hx_run(){
            				HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadCompressedTextureFromByteArray",0xe2c5b53e,"openfl.display3D.textures.Texture.uploadCompressedTextureFromByteArray","openfl/display3D/textures/Texture.hx",73,0x3ee19dbf)
HXLINE(  73)				_gthis->dispatchEvent( ::openfl::events::Event_obj::__new(HX_("textureReady",88,4d,5a,df),null(),null()));
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE(  71)			::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(_gthis)),(int)1);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadCompressedTextureFromByteArray,(void))

void Texture_obj::uploadFromBitmapData( ::openfl::display::BitmapData source,hx::Null< Int >  __o_miplevel,hx::Null< Bool >  __o_generateMipmap){
Int miplevel = __o_miplevel.Default(0);
Bool generateMipmap = __o_generateMipmap.Default(false);
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromBitmapData",0x5c4e9314,"openfl.display3D.textures.Texture.uploadFromBitmapData","openfl/display3D/textures/Texture.hx",82,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
            	HX_STACK_ARG(miplevel,"miplevel")
            	HX_STACK_ARG(generateMipmap,"generateMipmap")
HXLINE(  96)		 ::lime::utils::ArrayBufferView _hx_tmp = source->image->get_data();
HXDLIN(  96)		this->uploadFromTypedArray(_hx_tmp,source->width,source->height,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromBitmapData,(void))

void Texture_obj::uploadFromByteArray( ::openfl::utils::ByteArrayData data,Int byteArrayOffset,hx::Null< Int >  __o_miplevel){
Int miplevel = __o_miplevel.Default(0);
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromByteArray",0x0d748876,"openfl.display3D.textures.Texture.uploadFromByteArray","openfl/display3D/textures/Texture.hx",112,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
            	HX_STACK_ARG(miplevel,"miplevel")
HXLINE( 112)		HX_VARI(  ::haxe::io::Bytes,buffer) = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(data);
HXDLIN( 112)		HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this1,"this");
HXDLIN( 112)		Bool _hx_tmp = hx::IsNotNull( buffer );
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 112)			HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
HXDLIN( 112)			if ((byteArrayOffset < (int)0)) {
HXLINE( 112)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 112)			if ((hx::Mod(byteArrayOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 112)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN( 112)			HX_VARI( Int,bufferByteLength) = buffer->length;
HXDLIN( 112)			HX_VARI( Int,newByteLength) = bufferByteLength;
HXDLIN( 112)			{
HXLINE( 112)				newByteLength = (bufferByteLength - byteArrayOffset);
HXDLIN( 112)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 112)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 112)				if ((newByteLength < (int)0)) {
HXLINE( 112)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN( 112)			_this->buffer = buffer;
HXDLIN( 112)			_this->byteOffset = byteArrayOffset;
HXDLIN( 112)			_this->byteLength = newByteLength;
HXDLIN( 112)			Float _hx_tmp1 = ((Float)newByteLength / (Float)_this->bytesPerElement);
HXDLIN( 112)			_this->length = ::Std_obj::_hx_int(_hx_tmp1);
HXDLIN( 112)			this1 = _this;
            		}
            		else {
HXLINE( 112)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN( 112)		this->uploadFromTypedArray(this1,(int)0,(int)0,miplevel);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Texture_obj,uploadFromByteArray,(void))

void Texture_obj::uploadFromTypedArray( ::lime::utils::ArrayBufferView data,hx::Null< Int >  __o_width,hx::Null< Int >  __o_height,hx::Null< Int >  __o_miplevel){
Int width = __o_width.Default(0);
Int height = __o_height.Default(0);
Int miplevel = __o_miplevel.Default(0);
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","uploadFromTypedArray",0x20dd8a2a,"openfl.display3D.textures.Texture.uploadFromTypedArray","openfl/display3D/textures/Texture.hx",117,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
            	HX_STACK_ARG(miplevel,"miplevel")
HXLINE( 119)		Bool _hx_tmp = hx::IsNull( data );
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 119)			return;
            		}
HXLINE( 121)		{
HXLINE( 121)			Int target = this->_hx___textureTarget;
HXDLIN( 121)			HX_VARI(  ::lime::graphics::opengl::GLTexture,texture) = this->_hx___textureID;
HXDLIN( 121)			{
HXLINE( 121)				 ::Dynamic texture1;
HXDLIN( 121)				Bool _hx_tmp1 = hx::IsNull( texture );
HXDLIN( 121)				if (_hx_tmp1) {
HXLINE( 121)					texture1 = null();
            				}
            				else {
HXLINE( 121)					texture1 = texture->id;
            				}
HXDLIN( 121)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture(target,hx::DynamicPtr(texture1));
            			}
            		}
HXLINE( 122)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 124)		Bool _hx_tmp2 = (width == (int)0);
HXDLIN( 124)		if (_hx_tmp2) {
HXLINE( 124)			width = this->_hx___width;
            		}
HXLINE( 125)		Bool _hx_tmp3 = (height == (int)0);
HXDLIN( 125)		if (_hx_tmp3) {
HXLINE( 125)			height = this->_hx___height;
            		}
HXLINE( 127)		{
HXLINE( 127)			Int target1 = this->_hx___textureTarget;
HXDLIN( 127)			Int internalformat = this->_hx___internalFormat;
HXDLIN( 127)			Int format = this->_hx___format;
HXDLIN( 127)			HX_VAR(  ::haxe::io::Bytes,buffer);
HXDLIN( 127)			Bool _hx_tmp4 = hx::IsNull( data );
HXDLIN( 127)			if (_hx_tmp4) {
HXLINE( 127)				buffer = null();
            			}
            			else {
HXLINE( 127)				buffer = data->buffer;
            			}
HXDLIN( 127)			{
HXLINE( 127)				Int byteOffset;
HXDLIN( 127)				Bool _hx_tmp5 = hx::IsNull( data );
HXDLIN( 127)				if (_hx_tmp5) {
HXLINE( 127)					byteOffset = (int)0;
            				}
            				else {
HXLINE( 127)					byteOffset = data->byteOffset;
            				}
HXDLIN( 127)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d(target1,miplevel,internalformat,width,height,(int)0,format,(int)5121,hx::DynamicPtr(buffer),byteOffset);
            			}
            		}
HXLINE( 128)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 130)		{
HXLINE( 130)			Int target2 = this->_hx___textureTarget;
HXDLIN( 130)			{
HXLINE( 130)				 ::Dynamic texture2 = null();
HXDLIN( 130)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture(target2,hx::DynamicPtr(texture2));
            			}
            		}
HXLINE( 131)		::openfl::_internal::stage3D::GLUtils_obj::CheckGLError();
HXLINE( 134)		this->_hx___trackMemoryUsage(((width * height) * (int)4));
            	}


HX_DEFINE_DYNAMIC_FUNC4(Texture_obj,uploadFromTypedArray,(void))

void Texture_obj::_hx___uploadATFTextureFromByteArray( ::openfl::utils::ByteArrayData data,Int byteArrayOffset){
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","__uploadATFTextureFromByteArray",0x7de383ee,"openfl.display3D.textures.Texture.__uploadATFTextureFromByteArray","openfl/display3D/textures/Texture.hx",196,0x3ee19dbf)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
HXLINE( 198)		data->position = byteArrayOffset;
HXLINE( 200)		HX_VARI( Int,version) = ::openfl::display3D::textures::Texture_obj::_hx___getATFVersion(data);
HXLINE( 201)		HX_VAR( Int,length);
HXDLIN( 201)		if ((version == (int)0)) {
HXLINE( 201)			length = ::openfl::display3D::textures::Texture_obj::_hx___readUInt24(data);
            		}
            		else {
HXLINE( 201)			length = ::openfl::display3D::textures::Texture_obj::_hx___readUInt32(data);
            		}
HXLINE( 203)		if (((byteArrayOffset + length) > ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(data))) {
HXLINE( 205)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__new(HX_("ATF length exceeds byte array length",d7,29,45,0f)));
            		}
HXLINE( 209)		HX_VARI( Int,tdata) = data->readUnsignedByte();
HXLINE( 212)		if ((((int)tdata >> (int)(int)7) != (int)0)) {
HXLINE( 214)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__new(HX_("ATF Cube maps are not supported",0a,da,6c,45)));
            		}
HXLINE( 224)		HX_VARI( Int,width) = ((int)(int)1 << (int)data->readUnsignedByte());
HXLINE( 225)		HX_VARI( Int,height) = ((int)(int)1 << (int)data->readUnsignedByte());
HXLINE( 227)		Bool _hx_tmp;
HXDLIN( 227)		if ((width == this->_hx___width)) {
HXLINE( 227)			_hx_tmp = (height != this->_hx___height);
            		}
            		else {
HXLINE( 227)			_hx_tmp = true;
            		}
HXDLIN( 227)		if (_hx_tmp) {
HXLINE( 229)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__new(HX_("ATF width and height dont match",3f,49,15,70)));
            		}
HXLINE( 233)		HX_VARI( Int,mipCount) = data->readUnsignedByte();
HXLINE( 235)		{
HXLINE( 235)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 235)			while((_g1 < mipCount)){
HXLINE( 235)				++_g1;
HXLINE( 237)				{
HXLINE( 237)					HX_VARI( Int,_g2) = (int)0;
HXDLIN( 237)					while((_g2 < (int)3)){
HXLINE( 237)						HX_VARI( Int,gpuFormat) = _g2++;
HXLINE( 239)						HX_VAR( Int,blockLength);
HXDLIN( 239)						if ((version == (int)0)) {
HXLINE( 239)							blockLength = ::openfl::display3D::textures::Texture_obj::_hx___readUInt24(data);
            						}
            						else {
HXLINE( 239)							blockLength = ::openfl::display3D::textures::Texture_obj::_hx___readUInt32(data);
            						}
HXLINE( 247)						HX_VARI( Bool,aNeg) = (blockLength < (int)0);
HXDLIN( 247)						Bool _hx_tmp1;
HXDLIN( 247)						if ((aNeg != false)) {
HXLINE( 247)							_hx_tmp1 = aNeg;
            						}
            						else {
HXLINE( 247)							_hx_tmp1 = (blockLength > (int)0);
            						}
HXLINE( 263)						Int _hx_tmp2 = (data->position + blockLength);
HXDLIN( 263)						data->position = _hx_tmp2;
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Texture_obj,_hx___uploadATFTextureFromByteArray,(void))

Bool Texture_obj::_hx___lowMemoryMode;

Int Texture_obj::_hx___getATFVersion( ::openfl::utils::ByteArrayData data){
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","__getATFVersion",0x0832a0eb,"openfl.display3D.textures.Texture.__getATFVersion","openfl/display3D/textures/Texture.hx",139,0x3ee19dbf)
            	HX_STACK_ARG(data,"data")
HXLINE( 141)		HX_VARI( ::String,signature) = data->readUTFBytes((int)3);
HXLINE( 143)		if ((signature != HX_("ATF",f3,9b,31,00))) {
HXLINE( 145)			HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__new(HX_("ATF signature not found",a0,f7,2f,3a)));
            		}
HXLINE( 149)		HX_VARI( Int,position) = data->position;
HXLINE( 150)		HX_VARI( Int,version) = (int)0;
HXLINE( 152)		HX_VARI( Int,a) = (data->length - data->position);
HXDLIN( 152)		HX_VARI( Bool,aNeg) = (a < (int)0);
HXDLIN( 152)		Bool _hx_tmp;
HXDLIN( 152)		if ((aNeg != false)) {
HXLINE( 152)			_hx_tmp = aNeg;
            		}
            		else {
HXLINE( 152)			_hx_tmp = (a >= (int)5);
            		}
HXDLIN( 152)		if (_hx_tmp) {
HXLINE( 154)			HX_VARI( Int,sig) = ::openfl::display3D::textures::Texture_obj::_hx___readUInt32(data);
HXLINE( 156)			if ((sig == (int)255)) {
HXLINE( 158)				version = data->readUnsignedByte();
            			}
            			else {
HXLINE( 162)				data->position = position;
            			}
            		}
HXLINE( 168)		return version;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_hx___getATFVersion,return )

Int Texture_obj::_hx___readUInt24( ::openfl::utils::ByteArrayData data){
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","__readUInt24",0x2184b642,"openfl.display3D.textures.Texture.__readUInt24","openfl/display3D/textures/Texture.hx",173,0x3ee19dbf)
            	HX_STACK_ARG(data,"data")
HXLINE( 175)		HX_VAR( Int,value);
HXLINE( 176)		Int _hx_tmp = data->readUnsignedByte();
HXDLIN( 176)		value = ((int)_hx_tmp << (int)(int)16);
HXLINE( 177)		Int _hx_tmp1 = data->readUnsignedByte();
HXDLIN( 177)		value = ((int)value | (int)((int)_hx_tmp1 << (int)(int)8));
HXLINE( 178)		Int b = data->readUnsignedByte();
HXDLIN( 178)		value = ((int)value | (int)b);
HXLINE( 179)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_hx___readUInt24,return )

Int Texture_obj::_hx___readUInt32( ::openfl::utils::ByteArrayData data){
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","__readUInt32",0x2184b71f,"openfl.display3D.textures.Texture.__readUInt32","openfl/display3D/textures/Texture.hx",184,0x3ee19dbf)
            	HX_STACK_ARG(data,"data")
HXLINE( 186)		HX_VAR( Int,value);
HXLINE( 187)		Int _hx_tmp = data->readUnsignedByte();
HXDLIN( 187)		value = ((int)_hx_tmp << (int)(int)24);
HXLINE( 188)		Int _hx_tmp1 = data->readUnsignedByte();
HXDLIN( 188)		value = ((int)value | (int)((int)_hx_tmp1 << (int)(int)16));
HXLINE( 189)		Int _hx_tmp2 = data->readUnsignedByte();
HXDLIN( 189)		value = ((int)value | (int)((int)_hx_tmp2 << (int)(int)8));
HXLINE( 190)		Int b = data->readUnsignedByte();
HXDLIN( 190)		value = ((int)value | (int)b);
HXLINE( 191)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Texture_obj,_hx___readUInt32,return )


Texture_obj::Texture_obj()
{
}

hx::Val Texture_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { return hx::Val( _hx___width); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { return hx::Val( _hx___height); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { return hx::Val( _hx___streamingLevels); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"uploadFromByteArray") ) { return hx::Val( uploadFromByteArray_dyn()); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"uploadFromBitmapData") ) { return hx::Val( uploadFromBitmapData_dyn()); }
		if (HX_FIELD_EQ(inName,"uploadFromTypedArray") ) { return hx::Val( uploadFromTypedArray_dyn()); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { return hx::Val( _hx___optimizeForRenderToTexture); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"__uploadATFTextureFromByteArray") ) { return hx::Val( _hx___uploadATFTextureFromByteArray_dyn()); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"uploadCompressedTextureFromByteArray") ) { return hx::Val( uploadCompressedTextureFromByteArray_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool Texture_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"__readUInt24") ) { outValue = _hx___readUInt24_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__readUInt32") ) { outValue = _hx___readUInt32_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { outValue = _hx___lowMemoryMode; return true; }
		if (HX_FIELD_EQ(inName,"__getATFVersion") ) { outValue = _hx___getATFVersion_dyn(); return true; }
	}
	return false;
}

hx::Val Texture_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__width") ) { _hx___width=inValue.Cast< Int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__height") ) { _hx___height=inValue.Cast< Int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__streamingLevels") ) { _hx___streamingLevels=inValue.Cast< Int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"__optimizeForRenderToTexture") ) { _hx___optimizeForRenderToTexture=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Texture_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"__lowMemoryMode") ) { _hx___lowMemoryMode=ioValue.Cast< Bool >(); return true; }
	}
	return false;
}

void Texture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"));
	outFields->push(HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"));
	outFields->push(HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"));
	outFields->push(HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Texture_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Texture_obj,_hx___height),HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa")},
	{hx::fsBool,(int)offsetof(Texture_obj,_hx___optimizeForRenderToTexture),HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3")},
	{hx::fsInt,(int)offsetof(Texture_obj,_hx___streamingLevels),HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07")},
	{hx::fsInt,(int)offsetof(Texture_obj,_hx___width),HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Texture_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Texture_obj::_hx___lowMemoryMode,HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Texture_obj_sMemberFields[] = {
	HX_HCSTRING("__height","\x07","\x73","\x7b","\xaa"),
	HX_HCSTRING("__optimizeForRenderToTexture","\xbe","\xd4","\x90","\xb3"),
	HX_HCSTRING("__streamingLevels","\x51","\xa1","\xde","\x07"),
	HX_HCSTRING("__width","\xe6","\x0e","\xc1","\x34"),
	HX_HCSTRING("uploadCompressedTextureFromByteArray","\xce","\xc7","\x86","\xc5"),
	HX_HCSTRING("uploadFromBitmapData","\xa4","\x85","\x65","\x0d"),
	HX_HCSTRING("uploadFromByteArray","\xe6","\x17","\x1b","\xee"),
	HX_HCSTRING("uploadFromTypedArray","\xba","\x7c","\xf4","\xd1"),
	HX_HCSTRING("__uploadATFTextureFromByteArray","\x5e","\x7b","\xdb","\xc9"),
	::String(null()) };

static void Texture_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Texture_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Texture_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Texture_obj::_hx___lowMemoryMode,"__lowMemoryMode");
};

#endif

hx::Class Texture_obj::__mClass;

static ::String Texture_obj_sStaticFields[] = {
	HX_HCSTRING("__lowMemoryMode","\x98","\x71","\x9e","\x43"),
	HX_HCSTRING("__getATFVersion","\x5b","\xb8","\xa0","\xe5"),
	HX_HCSTRING("__readUInt24","\xd2","\x98","\x1e","\x4b"),
	HX_HCSTRING("__readUInt32","\xaf","\x99","\x1e","\x4b"),
	::String(null())
};

void Texture_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D.textures.Texture","\xfe","\x28","\x30","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Texture_obj::__GetStatic;
	__mClass->mSetStaticField = &Texture_obj::__SetStatic;
	__mClass->mMarkFunc = Texture_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Texture_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Texture_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Texture_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Texture_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Texture_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Texture_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Texture_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl.display3D.textures.Texture","boot",0x536eb1a2,"openfl.display3D.textures.Texture.boot","openfl/display3D/textures/Texture.hx",20,0x3ee19dbf)
HXLINE(  20)		_hx___lowMemoryMode = false;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace textures
