// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display3D_Context3D
#define INCLUDED_openfl_display3D_Context3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLFramebuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLRenderbuffer)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,Context3DStateCache)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,SamplerState)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS3(openfl,display3D,textures,VideoTexture)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES Context3D_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Context3D_obj OBJ_;
		Context3D_obj();

	public:
		void __construct( ::openfl::display::Stage3D stage3D, ::openfl::_internal::renderer::RenderSession renderSession);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Context3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.Context3D"); }
		static hx::ObjectPtr< Context3D_obj > __new( ::openfl::display::Stage3D stage3D, ::openfl::_internal::renderer::RenderSession renderSession);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3D_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Context3D","\x40","\x3c","\xcf","\xb8"); }

		static void __boot();
		static Bool supportsVideoTexture;
		static Int MAX_SAMPLERS;
		static Int MAX_ATTRIBUTES;
		static Int MAX_PROGRAM_REGISTERS;
		static  ::openfl::_internal::stage3D::Context3DStateCache _hx___stateCache;
		Int backBufferHeight;
		Int backBufferWidth;
		::String driverInfo;
		Bool enableErrorChecking;
		Int maxBackBufferHeight;
		Int maxBackBufferWidth;
		 ::Dynamic profile;
		Int totalGPUMemory;
		Int _hx___backBufferAntiAlias;
		Bool _hx___backBufferEnableDepthAndStencil;
		Bool _hx___backBufferWantsBestResolution;
		 ::lime::graphics::opengl::GLRenderbuffer _hx___depthRenderBuffer;
		 ::lime::graphics::opengl::GLRenderbuffer _hx___depthStencilRenderBuffer;
		 ::lime::utils::ArrayBufferView _hx___fragmentConstants;
		 ::lime::graphics::opengl::GLFramebuffer _hx___framebuffer;
		Int _hx___frameCount;
		 ::lime::utils::ArrayBufferView _hx___positionScale;
		 ::openfl::display3D::Program3D _hx___program;
		 ::openfl::_internal::renderer::RenderSession _hx___renderSession;
		 ::openfl::display3D::textures::TextureBase _hx___renderToTexture;
		Bool _hx___rttDepthAndStencil;
		Int _hx___samplerDirty;
		 ::openfl::_Vector::ObjectVector _hx___samplerTextures;
		::Array< ::Dynamic> _hx___samplerStates;
		 ::openfl::geom::Rectangle _hx___scissorRectangle;
		 ::openfl::display::Stage3D _hx___stage3D;
		 ::openfl::_Vector::IntVector _hx___stats;
		 ::openfl::_Vector::IntVector _hx___statsCache;
		 ::Dynamic _hx___stencilCompareMode;
		Int _hx___stencilRef;
		Int _hx___stencilReadMask;
		 ::lime::graphics::opengl::GLRenderbuffer _hx___stencilRenderBuffer;
		Bool _hx___supportsPackedDepthStencil;
		 ::lime::utils::ArrayBufferView _hx___vertexConstants;
		void clear(hx::Null< Float >  red,hx::Null< Float >  green,hx::Null< Float >  blue,hx::Null< Float >  alpha,hx::Null< Float >  depth,hx::Null< Int >  stencil,hx::Null< Int >  mask);
		::Dynamic clear_dyn();

		void configureBackBuffer(Int width,Int height,Int antiAlias,hx::Null< Bool >  enableDepthAndStencil,hx::Null< Bool >  wantsBestResolution,hx::Null< Bool >  wantsBestResolutionOnBrowserZoom);
		::Dynamic configureBackBuffer_dyn();

		 ::openfl::display3D::textures::CubeTexture createCubeTexture(Int size, ::Dynamic format,Bool optimizeForRenderToTexture,hx::Null< Int >  streamingLevels);
		::Dynamic createCubeTexture_dyn();

		 ::openfl::display3D::IndexBuffer3D createIndexBuffer(Int numIndices, ::Dynamic bufferUsage);
		::Dynamic createIndexBuffer_dyn();

		 ::openfl::display3D::Program3D createProgram();
		::Dynamic createProgram_dyn();

		 ::openfl::display3D::textures::RectangleTexture createRectangleTexture(Int width,Int height, ::Dynamic format,Bool optimizeForRenderToTexture);
		::Dynamic createRectangleTexture_dyn();

		 ::openfl::display3D::textures::Texture createTexture(Int width,Int height, ::Dynamic format,Bool optimizeForRenderToTexture,hx::Null< Int >  streamingLevels);
		::Dynamic createTexture_dyn();

		 ::openfl::display3D::VertexBuffer3D createVertexBuffer(Int numVertices,Int data32PerVertex, ::Dynamic bufferUsage);
		::Dynamic createVertexBuffer_dyn();

		 ::openfl::display3D::textures::VideoTexture createVideoTexture();
		::Dynamic createVideoTexture_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void drawToBitmapData( ::openfl::display::BitmapData destination);
		::Dynamic drawToBitmapData_dyn();

		void drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< Int >  firstIndex,hx::Null< Int >  numTriangles);
		::Dynamic drawTriangles_dyn();

		void present();
		::Dynamic present_dyn();

		void setBlendFactors( ::Dynamic sourceFactor, ::Dynamic destinationFactor);
		::Dynamic setBlendFactors_dyn();

		void setColorMask(Bool red,Bool green,Bool blue,Bool alpha);
		::Dynamic setColorMask_dyn();

		void setCulling( ::Dynamic triangleFaceToCull);
		::Dynamic setCulling_dyn();

		void setDepthTest(Bool depthMask, ::Dynamic passCompareMode);
		::Dynamic setDepthTest_dyn();

		void setProgram( ::openfl::display3D::Program3D program);
		::Dynamic setProgram_dyn();

		void setProgramConstantsFromByteArray( ::Dynamic programType,Int firstRegister,Int numRegisters, ::openfl::utils::ByteArrayData data,Int byteArrayOffset);
		::Dynamic setProgramConstantsFromByteArray_dyn();

		void setProgramConstantsFromMatrix( ::Dynamic programType,Int firstRegister, ::openfl::geom::Matrix3D matrix,hx::Null< Bool >  transposedMatrix);
		::Dynamic setProgramConstantsFromMatrix_dyn();

		void setProgramConstantsFromVector( ::Dynamic programType,Int firstRegister, ::openfl::_Vector::FloatVector data,hx::Null< Int >  numRegisters);
		::Dynamic setProgramConstantsFromVector_dyn();

		void setRenderToBackBuffer();
		::Dynamic setRenderToBackBuffer_dyn();

		void setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< Bool >  enableDepthAndStencil,hx::Null< Int >  antiAlias,hx::Null< Int >  surfaceSelector);
		::Dynamic setRenderToTexture_dyn();

		void setSamplerStateAt(Int sampler, ::Dynamic wrap, ::Dynamic filter, ::Dynamic mipfilter);
		::Dynamic setSamplerStateAt_dyn();

		void setScissorRectangle( ::openfl::geom::Rectangle rectangle);
		::Dynamic setScissorRectangle_dyn();

		void setStencilActions( ::Dynamic triangleFace, ::Dynamic compareMode, ::Dynamic actionOnBothPass, ::Dynamic actionOnDepthFail, ::Dynamic actionOnDepthPassStencilFail);
		::Dynamic setStencilActions_dyn();

		void setStencilReferenceValue(Int referenceValue,hx::Null< Int >  readMask,hx::Null< Int >  writeMask);
		::Dynamic setStencilReferenceValue_dyn();

		void setTextureAt(Int sampler, ::openfl::display3D::textures::TextureBase texture);
		::Dynamic setTextureAt_dyn();

		void setVertexBufferAt(Int index, ::openfl::display3D::VertexBuffer3D buffer,hx::Null< Int >  bufferOffset, ::Dynamic format);
		::Dynamic setVertexBufferAt_dyn();

		void _hx___flushSamplerState();
		::Dynamic _hx___flushSamplerState_dyn();

		Int _hx___getGLCompareMode( ::Dynamic compareMode);
		::Dynamic _hx___getGLCompareMode_dyn();

		Int _hx___getGLStencilAction( ::Dynamic stencilAction);
		::Dynamic _hx___getGLStencilAction_dyn();

		Bool _hx___hasGLExtension(::String name);
		::Dynamic _hx___hasGLExtension_dyn();

		void _hx___setViewport(Int originX,Int originY,Int width,Int height);
		::Dynamic _hx___setViewport_dyn();

		Int _hx___statsAdd(Int stat,Int value);
		::Dynamic _hx___statsAdd_dyn();

		void _hx___statsClear(Int stat);
		::Dynamic _hx___statsClear_dyn();

		void _hx___statsDecrement(Int stat);
		::Dynamic _hx___statsDecrement_dyn();

		void _hx___statsIncrement(Int stat);
		::Dynamic _hx___statsIncrement_dyn();

		void _hx___statsSendToTelemetry();
		::Dynamic _hx___statsSendToTelemetry_dyn();

		Int _hx___statsSubtract(Int stat,Int value);
		::Dynamic _hx___statsSubtract_dyn();

		void _hx___updateDepthAndStencilState();
		::Dynamic _hx___updateDepthAndStencilState_dyn();

		void _hx___updateBlendFactors();
		::Dynamic _hx___updateBlendFactors_dyn();

		void _hx___updateScissorRectangle();
		::Dynamic _hx___updateScissorRectangle_dyn();

		void _hx___updateBackbufferViewport();
		::Dynamic _hx___updateBackbufferViewport_dyn();

		Bool set_enableErrorChecking(Bool value);
		::Dynamic set_enableErrorChecking_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3D */ 
