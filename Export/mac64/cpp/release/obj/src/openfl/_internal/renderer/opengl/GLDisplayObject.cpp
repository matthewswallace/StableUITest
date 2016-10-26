// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
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
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLDisplayObject
#include <openfl/_internal/renderer/opengl/GLDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLDisplayObject_obj::__construct() { }

Dynamic GLDisplayObject_obj::__CreateEmpty() { return new GLDisplayObject_obj; }

hx::ObjectPtr< GLDisplayObject_obj > GLDisplayObject_obj::__new()
{
	hx::ObjectPtr< GLDisplayObject_obj > _hx_result = new GLDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic GLDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLDisplayObject_obj > _hx_result = new GLDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

void GLDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACK_FRAME("openfl._internal.renderer.opengl.GLDisplayObject","render",0xfc18482c,"openfl._internal.renderer.opengl.GLDisplayObject.render","openfl/_internal/renderer/opengl/GLDisplayObject.hx",17,0xe7a796c8)
            	HX_STACK_ARG(displayObject,"displayObject")
            	HX_STACK_ARG(renderSession,"renderSession")
HXLINE(  19)		Bool _hx_tmp;
HXDLIN(  19)		Bool _hx_tmp1 = hx::IsNull( displayObject->opaqueBackground );
HXDLIN(  19)		if (_hx_tmp1) {
HXLINE(  19)			_hx_tmp = hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  19)			_hx_tmp = false;
            		}
HXDLIN(  19)		if (_hx_tmp) {
HXLINE(  19)			return;
            		}
HXLINE(  20)		Bool _hx_tmp2;
HXDLIN(  20)		if (!(!(displayObject->_hx___renderable))) {
HXLINE(  20)			_hx_tmp2 = (displayObject->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  20)			_hx_tmp2 = true;
            		}
HXDLIN(  20)		if (_hx_tmp2) {
HXLINE(  20)			return;
            		}
HXLINE(  22)		Bool _hx_tmp3;
HXDLIN(  22)		Bool _hx_tmp4;
HXDLIN(  22)		Bool _hx_tmp5 = hx::IsNotNull( displayObject->opaqueBackground );
HXDLIN(  22)		if (_hx_tmp5) {
HXLINE(  22)			Float _hx_tmp6 = displayObject->get_width();
HXDLIN(  22)			_hx_tmp4 = (_hx_tmp6 > (int)0);
            		}
            		else {
HXLINE(  22)			_hx_tmp4 = false;
            		}
HXDLIN(  22)		if (_hx_tmp4) {
HXLINE(  22)			Float _hx_tmp7 = displayObject->get_height();
HXDLIN(  22)			_hx_tmp3 = (_hx_tmp7 > (int)0);
            		}
            		else {
HXLINE(  22)			_hx_tmp3 = false;
            		}
HXDLIN(  22)		if (_hx_tmp3) {
HXLINE(  24)			renderSession->maskManager->pushObject(displayObject,null());
HXLINE(  26)			HX_VARI(  ::lime::graphics::GLRenderContext,gl) = renderSession->gl;
HXLINE(  28)			HX_VARI(  ::openfl::geom::Rectangle,rect) = ::openfl::geom::Rectangle_obj::_hx___temp;
HXLINE(  29)			Float _hx_tmp8 = displayObject->get_width();
HXDLIN(  29)			Float _hx_tmp9 = displayObject->get_height();
HXDLIN(  29)			rect->setTo((int)0,(int)0,_hx_tmp8,_hx_tmp9);
HXLINE(  30)			renderSession->maskManager->pushRect(rect,displayObject->_hx___renderTransform);
HXLINE(  32)			HX_VARI( Int,color) = displayObject->opaqueBackground;
HXLINE(  33)			::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color(((Float)((int)hx::UShr(color,(int)16) & (int)(int)255) / (Float)(int)255),((Float)((int)hx::UShr(color,(int)8) & (int)(int)255) / (Float)(int)255),((Float)((int)color & (int)(int)255) / (Float)(int)255),(int)1);
HXLINE(  34)			{
HXLINE(  34)				Int mask = gl->COLOR_BUFFER_BIT;
HXDLIN(  34)				::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear(mask);
            			}
HXLINE(  36)			renderSession->maskManager->popRect();
HXLINE(  37)			renderSession->maskManager->popObject(displayObject,null());
            		}
HXLINE(  41)		Bool _hx_tmp10 = hx::IsNotNull( displayObject->_hx___graphics );
HXDLIN(  41)		if (_hx_tmp10) {
HXLINE(  43)			Bool _hx_tmp11;
HXDLIN(  43)			if (!(!(displayObject->_hx___renderable))) {
HXLINE(  43)				_hx_tmp11 = (displayObject->_hx___worldAlpha <= (int)0);
            			}
            			else {
HXLINE(  43)				_hx_tmp11 = true;
            			}
HXDLIN(  43)			if (!(_hx_tmp11)) {
HXLINE(  43)				HX_VARI(  ::openfl::display::Graphics,graphics) = displayObject->_hx___graphics;
HXDLIN(  43)				Bool _hx_tmp12 = hx::IsNotNull( graphics );
HXDLIN(  43)				if (_hx_tmp12) {
HXLINE(  43)					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(graphics,renderSession,displayObject->_hx___renderTransform);
HXDLIN(  43)					Bool _hx_tmp13;
HXDLIN(  43)					Bool _hx_tmp14 = hx::IsNotNull( graphics->_hx___bitmap );
HXDLIN(  43)					if (_hx_tmp14) {
HXLINE(  43)						_hx_tmp13 = graphics->_hx___visible;
            					}
            					else {
HXLINE(  43)						_hx_tmp13 = false;
            					}
HXDLIN(  43)					if (_hx_tmp13) {
HXLINE(  43)						HX_VARI(  ::openfl::_internal::renderer::opengl::GLRenderer,renderer) = ( ( ::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer) );
HXDLIN(  43)						HX_VARI_NAME(  ::lime::graphics::GLRenderContext,gl1,"gl") = renderSession->gl;
HXDLIN(  43)						 ::Dynamic _hx_tmp15 = displayObject->get_blendMode();
HXDLIN(  43)						renderSession->blendModeManager->setBlendMode(_hx_tmp15);
HXDLIN(  43)						renderSession->maskManager->pushObject(displayObject,null());
HXDLIN(  43)						HX_VARI(  ::openfl::display::Shader,shader) = renderSession->filterManager->pushObject(displayObject);
HXDLIN(  43)						shader->get_data()->uImage0->input = graphics->_hx___bitmap;
HXDLIN(  43)						shader->get_data()->uImage0->smoothing = renderSession->allowSmoothing;
HXDLIN(  43)						shader->get_data()->uMatrix->value = renderer->getMatrix(graphics->_hx___worldTransform);
HXDLIN(  43)						renderSession->shaderManager->setShader(shader);
HXDLIN(  43)						{
HXLINE(  43)							Int target = gl1->ARRAY_BUFFER;
HXDLIN(  43)							HX_VARI(  ::lime::graphics::opengl::GLBuffer,buffer) = graphics->_hx___bitmap->getBuffer(gl1,displayObject->_hx___worldAlpha);
HXDLIN(  43)							{
HXLINE(  43)								 ::Dynamic buffer1;
HXDLIN(  43)								Bool _hx_tmp16 = hx::IsNull( buffer );
HXDLIN(  43)								if (_hx_tmp16) {
HXLINE(  43)									buffer1 = null();
            								}
            								else {
HXLINE(  43)									buffer1 = buffer->id;
            								}
HXDLIN(  43)								::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer(target,hx::DynamicPtr(buffer1));
            							}
            						}
HXDLIN(  43)						{
HXLINE(  43)							Int indx = shader->get_data()->aPosition->index;
HXDLIN(  43)							Int type = gl1->FLOAT;
HXDLIN(  43)							::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer(indx,(int)3,type,false,(int)24,(int)0);
            						}
HXDLIN(  43)						{
HXLINE(  43)							Int indx1 = shader->get_data()->aTexCoord->index;
HXDLIN(  43)							Int type1 = gl1->FLOAT;
HXDLIN(  43)							::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer(indx1,(int)2,type1,false,(int)24,(int)12);
            						}
HXDLIN(  43)						{
HXLINE(  43)							Int indx2 = shader->get_data()->aAlpha->index;
HXDLIN(  43)							Int type2 = gl1->FLOAT;
HXDLIN(  43)							::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer(indx2,(int)1,type2,false,(int)24,(int)20);
            						}
HXDLIN(  43)						{
HXLINE(  43)							Int mode = gl1->TRIANGLE_STRIP;
HXDLIN(  43)							::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays(mode,(int)0,(int)4);
            						}
HXDLIN(  43)						renderSession->filterManager->popObject(displayObject);
HXDLIN(  43)						renderSession->maskManager->popObject(displayObject,null());
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLDisplayObject_obj,render,(void))


GLDisplayObject_obj::GLDisplayObject_obj()
{
}

bool GLDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLDisplayObject_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLDisplayObject_obj_sStaticStorageInfo = 0;
#endif

static void GLDisplayObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLDisplayObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLDisplayObject_obj::__mClass;

static ::String GLDisplayObject_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void GLDisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLDisplayObject","\xd8","\x44","\x6d","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLDisplayObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLDisplayObject_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLDisplayObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLDisplayObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLDisplayObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl