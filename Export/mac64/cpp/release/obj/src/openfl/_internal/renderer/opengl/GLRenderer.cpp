// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#include <openfl/_internal/renderer/opengl/GLBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#include <openfl/_internal/renderer/opengl/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#include <openfl/_internal/renderer/opengl/GLShaderManager.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLRenderer_obj::__construct( ::openfl::display::Stage stage, ::lime::graphics::GLRenderContext gl){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","new",0xb6a82d5e,"openfl._internal.renderer.opengl.GLRenderer.new","openfl/_internal/renderer/opengl/GLRenderer.hx",32,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(stage,"stage")
            	HX_STACK_ARG(gl,"gl")
HXLINE(  34)		super::__construct(stage);
HXLINE(  36)		this->gl = gl;
HXLINE(  37)		this->matrix = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());
HXLINE(  38)		this->values = ::Array_obj< Float >::__new();
HXLINE(  40)		this->renderSession =  ::openfl::_internal::renderer::RenderSession_obj::__new();
HXLINE(  41)		this->renderSession->gl = gl;
HXLINE(  42)		this->renderSession->roundPixels = true;
HXLINE(  43)		this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
HXLINE(  44)		this->renderSession->blendModeManager =  ::openfl::_internal::renderer::opengl::GLBlendModeManager_obj::__new(gl);
HXLINE(  45)		this->renderSession->filterManager =  ::openfl::_internal::renderer::opengl::GLFilterManager_obj::__new(this->renderSession);
HXLINE(  46)		this->renderSession->shaderManager =  ::openfl::_internal::renderer::opengl::GLShaderManager_obj::__new(gl);
HXLINE(  47)		this->renderSession->maskManager =  ::openfl::_internal::renderer::opengl::GLMaskManager_obj::__new(this->renderSession);
HXLINE(  49)		Bool _hx_tmp = hx::IsNotNull( stage->window );
HXDLIN(  49)		if (_hx_tmp) {
HXLINE(  51)			this->resize(stage->window->_hx___width,stage->window->_hx___height);
            		}
            	}

Dynamic GLRenderer_obj::__CreateEmpty() { return new GLRenderer_obj; }

hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new( ::openfl::display::Stage stage, ::lime::graphics::GLRenderContext gl)
{
	hx::ObjectPtr< GLRenderer_obj > _hx_result = new GLRenderer_obj();
	_hx_result->__construct(stage,gl);
	return _hx_result;
}

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLRenderer_obj > _hx_result = new GLRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

void GLRenderer_obj::clear(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","clear",0x823f8a0b,"openfl._internal.renderer.opengl.GLRenderer.clear","openfl/_internal/renderer/opengl/GLRenderer.hx",58,0xb2b97130)
            	HX_STACK_THIS(this)
HXLINE(  60)		Bool _hx_tmp = this->stage->_hx___transparent;
HXDLIN(  60)		if (_hx_tmp) {
HXLINE(  62)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color((int)0,(int)0,(int)0,(int)0);
            		}
            		else {
HXLINE(  66)			Float _hx_tmp1 = this->stage->_hx___colorSplit->__get((int)0);
HXDLIN(  66)			Float _hx_tmp2 = this->stage->_hx___colorSplit->__get((int)1);
HXDLIN(  66)			Float _hx_tmp3 = this->stage->_hx___colorSplit->__get((int)2);
HXDLIN(  66)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color(_hx_tmp1,_hx_tmp2,_hx_tmp3,(int)1);
            		}
HXLINE(  70)		{
HXLINE(  70)			Int mask = this->gl->COLOR_BUFFER_BIT;
HXDLIN(  70)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear(mask);
            		}
HXLINE(  72)		{
HXLINE(  72)			HX_VARI( Int,_g) = (int)0;
HXDLIN(  72)			HX_VARI(  ::openfl::_Vector::ObjectVector,_g1) = this->stage->stage3Ds;
HXDLIN(  72)			while(true){
HXLINE(  72)				Int _hx_tmp4 = _g1->get_length();
HXDLIN(  72)				if (!((_g < _hx_tmp4))) {
HXLINE(  72)					goto _hx_goto_0;
            				}
HXDLIN(  72)				HX_VARI(  ::openfl::display::Stage3D,stage3D) = _g1->get(_g).StaticCast<  ::openfl::display::Stage3D >();
HXDLIN(  72)				++_g;
HXLINE(  74)				stage3D->_hx___renderGL(this->stage,this->renderSession);
            			}
            			_hx_goto_0:;
            		}
            	}


::Array< Float > GLRenderer_obj::getMatrix( ::openfl::geom::Matrix transform){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","getMatrix",0x5e6beef5,"openfl._internal.renderer.opengl.GLRenderer.getMatrix","openfl/_internal/renderer/opengl/GLRenderer.hx",81,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(transform,"transform")
HXLINE(  83)		HX_VARI(  ::openfl::geom::Matrix,_matrix) = ::openfl::geom::Matrix_obj::_hx___temp;
HXLINE(  84)		_matrix->copyFrom(transform);
HXLINE(  85)		_matrix->concat(this->displayMatrix);
HXLINE(  87)		Bool _hx_tmp = this->renderSession->roundPixels;
HXDLIN(  87)		if (_hx_tmp) {
HXLINE(  89)			_matrix->tx = ::Math_obj::round(_matrix->tx);
HXLINE(  90)			_matrix->ty = ::Math_obj::round(_matrix->ty);
            		}
HXLINE(  94)		::lime::math::_Matrix4::Matrix4_Impl__obj::identity(this->matrix);
HXLINE(  95)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)0,_matrix->a);
HXLINE(  96)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)1,_matrix->b);
HXLINE(  97)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)4,_matrix->c);
HXLINE(  98)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)5,_matrix->d);
HXLINE(  99)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)12,_matrix->tx);
HXLINE( 100)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)13,_matrix->ty);
HXLINE( 101)		::lime::math::_Matrix4::Matrix4_Impl__obj::append(this->matrix,this->projection);
HXLINE( 103)		{
HXLINE( 103)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 103)			while((_g < (int)16)){
HXLINE( 103)				HX_VARI( Int,i) = _g++;
HXLINE( 105)				Float _hx_tmp1 = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(this->matrix,i);
HXDLIN( 105)				this->values[i] = _hx_tmp1;
            			}
            		}
HXLINE( 109)		return this->values;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,getMatrix,return )

void GLRenderer_obj::render(){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","render",0x72dac118,"openfl._internal.renderer.opengl.GLRenderer.render","openfl/_internal/renderer/opengl/GLRenderer.hx",114,0xb2b97130)
            	HX_STACK_THIS(this)
HXLINE( 116)		{
HXLINE( 116)			Int x = this->offsetX;
HXDLIN( 116)			Int y = this->offsetY;
HXDLIN( 116)			Int width = this->displayWidth;
HXDLIN( 116)			Int height = this->displayHeight;
HXDLIN( 116)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_viewport(x,y,width,height);
            		}
HXLINE( 118)		this->renderSession->allowSmoothing = hx::IsNotEq( this->stage->quality,(int)2 );
HXLINE( 119)		Bool _hx_tmp;
HXDLIN( 119)		if ((this->displayMatrix->a == (int)1)) {
HXLINE( 119)			_hx_tmp = (this->displayMatrix->d != (int)1);
            		}
            		else {
HXLINE( 119)			_hx_tmp = true;
            		}
HXDLIN( 119)		this->renderSession->upscaled = _hx_tmp;
HXLINE( 121)		this->stage->_hx___renderGL(this->renderSession);
HXLINE( 123)		Bool _hx_tmp1;
HXDLIN( 123)		if ((this->offsetX <= (int)0)) {
HXLINE( 123)			_hx_tmp1 = (this->offsetY > (int)0);
            		}
            		else {
HXLINE( 123)			_hx_tmp1 = true;
            		}
HXDLIN( 123)		if (_hx_tmp1) {
HXLINE( 125)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color((int)0,(int)0,(int)0,(int)1);
HXLINE( 126)			{
HXLINE( 126)				Int cap = this->gl->SCISSOR_TEST;
HXDLIN( 126)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable(cap);
            			}
HXLINE( 128)			Bool _hx_tmp2 = (this->offsetX > (int)0);
HXDLIN( 128)			if (_hx_tmp2) {
HXLINE( 130)				{
HXLINE( 130)					Int width1 = this->offsetX;
HXDLIN( 130)					Int height1 = this->height;
HXDLIN( 130)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor((int)0,(int)0,width1,height1);
            				}
HXLINE( 131)				{
HXLINE( 131)					Int mask = this->gl->COLOR_BUFFER_BIT;
HXDLIN( 131)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear(mask);
            				}
HXLINE( 133)				{
HXLINE( 133)					Int x1 = (this->offsetX + this->displayWidth);
HXDLIN( 133)					Int width2 = this->width;
HXDLIN( 133)					Int height2 = this->height;
HXDLIN( 133)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor(x1,(int)0,width2,height2);
            				}
HXLINE( 134)				{
HXLINE( 134)					Int mask1 = this->gl->COLOR_BUFFER_BIT;
HXDLIN( 134)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear(mask1);
            				}
            			}
HXLINE( 138)			Bool _hx_tmp3 = (this->offsetY > (int)0);
HXDLIN( 138)			if (_hx_tmp3) {
HXLINE( 140)				{
HXLINE( 140)					Int width3 = this->width;
HXDLIN( 140)					Int height3 = this->offsetY;
HXDLIN( 140)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor((int)0,(int)0,width3,height3);
            				}
HXLINE( 141)				{
HXLINE( 141)					Int mask2 = this->gl->COLOR_BUFFER_BIT;
HXDLIN( 141)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear(mask2);
            				}
HXLINE( 143)				{
HXLINE( 143)					Int y1 = (this->offsetY + this->displayHeight);
HXDLIN( 143)					Int width4 = this->width;
HXDLIN( 143)					Int height4 = this->height;
HXDLIN( 143)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor((int)0,y1,width4,height4);
            				}
HXLINE( 144)				{
HXLINE( 144)					Int mask3 = this->gl->COLOR_BUFFER_BIT;
HXDLIN( 144)					::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear(mask3);
            				}
            			}
HXLINE( 148)			{
HXLINE( 148)				Int cap1 = this->gl->SCISSOR_TEST;
HXDLIN( 148)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable(cap1);
            			}
            		}
            	}


void GLRenderer_obj::resize(Int width,Int height){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLRenderer","resize",0x762cafb6,"openfl._internal.renderer.opengl.GLRenderer.resize","openfl/_internal/renderer/opengl/GLRenderer.hx",155,0xb2b97130)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(width,"width")
            	HX_STACK_ARG(height,"height")
HXLINE( 157)		this->super::resize(width,height);
HXLINE( 159)		this->displayMatrix = this->stage->_hx___displayMatrix;
HXLINE( 161)		HX_VARI(  ::openfl::geom::Matrix,_this) = this->displayMatrix;
HXDLIN( 161)		Float _hx_tmp = ((((int)0 * _this->a) + ((int)0 * _this->c)) + _this->tx);
HXDLIN( 161)		this->offsetX = ::Math_obj::round(_hx_tmp);
HXLINE( 162)		HX_VARI_NAME(  ::openfl::geom::Matrix,_this1,"_this") = this->displayMatrix;
HXDLIN( 162)		Float _hx_tmp1 = ((((int)0 * _this1->b) + ((int)0 * _this1->d)) + _this1->ty);
HXDLIN( 162)		this->offsetY = ::Math_obj::round(_hx_tmp1);
HXLINE( 163)		HX_VARI_NAME(  ::openfl::geom::Matrix,_this2,"_this") = this->displayMatrix;
HXDLIN( 163)		Float _hx_tmp2 = ((((this->stage->stageWidth * _this2->a) + ((int)0 * _this2->c)) + _this2->tx) - this->offsetX);
HXDLIN( 163)		this->displayWidth = ::Math_obj::round(_hx_tmp2);
HXLINE( 164)		HX_VARI_NAME(  ::openfl::geom::Matrix,_this3,"_this") = this->displayMatrix;
HXDLIN( 164)		Float _hx_tmp3 = (((((int)0 * _this3->b) + (this->stage->stageHeight * _this3->d)) + _this3->ty) - this->offsetY);
HXDLIN( 164)		this->displayHeight = ::Math_obj::round(_hx_tmp3);
HXLINE( 166)		Int _hx_tmp4 = this->offsetX;
HXDLIN( 166)		Int _hx_tmp5 = (this->displayWidth + this->offsetX);
HXDLIN( 166)		Int _hx_tmp6 = (this->displayHeight + this->offsetY);
HXDLIN( 166)		this->projection = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho(_hx_tmp4,_hx_tmp5,_hx_tmp6,this->offsetY,(int)-1000,(int)1000);
            	}



GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(displayHeight,"displayHeight");
	HX_MARK_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_MARK_MEMBER_NAME(displayWidth,"displayWidth");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(values,"values");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(displayHeight,"displayHeight");
	HX_VISIT_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_VISIT_MEMBER_NAME(displayWidth,"displayWidth");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(values,"values");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix); }
		if (HX_FIELD_EQ(inName,"values") ) { return hx::Val( values); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn()); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return hx::Val( offsetX); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return hx::Val( offsetY); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return hx::Val( getMatrix_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return hx::Val( projection); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { return hx::Val( displayWidth); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { return hx::Val( displayHeight); }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { return hx::Val( displayMatrix); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::graphics::GLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { displayWidth=inValue.Cast< Int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { displayHeight=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { displayMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"));
	outFields->push(HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"));
	outFields->push(HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"));
	outFields->push(HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,projection),HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayHeight),HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLRenderer_obj,displayMatrix),HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayWidth),HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6")},
	{hx::fsObject /*::lime::graphics::GLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLRenderer_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String GLRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"),
	HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"),
	HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"),
	HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getMatrix","\x77","\xbf","\x1e","\x38"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void GLRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderer_obj::__mClass;

void GLRenderer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLRenderer","\x6c","\xe6","\x3a","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
