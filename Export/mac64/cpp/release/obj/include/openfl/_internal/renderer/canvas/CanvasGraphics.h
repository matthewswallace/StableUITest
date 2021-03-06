// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#define INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandBuffer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,canvas,CanvasGraphics)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{


class HXCPP_CLASS_ATTRIBUTES CanvasGraphics_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CanvasGraphics_obj OBJ_;
		CanvasGraphics_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.canvas.CanvasGraphics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.canvas.CanvasGraphics"); }
		static hx::ObjectPtr< CanvasGraphics_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasGraphics_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CanvasGraphics","\xe3","\x35","\xd6","\x92"); }

		static void __boot();
		static Float SIN45;
		static Float TAN22;
		static Bool allowSmoothing;
		static  ::openfl::display::BitmapData bitmapFill;
		static  ::openfl::display::BitmapData bitmapStroke;
		static Bool bitmapRepeat;
		static  ::openfl::geom::Rectangle bounds;
		static  ::openfl::_internal::renderer::DrawCommandBuffer fillCommands;
		static  ::openfl::display::Graphics graphics;
		static Bool hasFill;
		static Bool hasStroke;
		static Bool hitTesting;
		static  ::openfl::geom::Matrix inversePendingMatrix;
		static  ::openfl::geom::Matrix pendingMatrix;
		static  ::openfl::_internal::renderer::DrawCommandBuffer strokeCommands;
		static void closePath(hx::Null< Bool >  strokeBefore);
		static ::Dynamic closePath_dyn();

		static  ::Dynamic createBitmapFill( ::openfl::display::BitmapData bitmap,Bool bitmapRepeat,Bool smooth);
		static ::Dynamic createBitmapFill_dyn();

		static void createGradientPattern( ::Dynamic type,::cpp::VirtualArray colors,::cpp::VirtualArray alphas,::cpp::VirtualArray ratios, ::openfl::geom::Matrix matrix, ::Dynamic spreadMethod, ::Dynamic interpolationMethod,Float focalPointRatio);
		static ::Dynamic createGradientPattern_dyn();

		static void createTempPatternCanvas( ::openfl::display::BitmapData bitmap,Bool repeat,Int width,Int height);
		static ::Dynamic createTempPatternCanvas_dyn();

		static void drawRoundRect(Float x,Float y,Float width,Float height,Float ellipseWidth, ::Dynamic ellipseHeight);
		static ::Dynamic drawRoundRect_dyn();

		static void endFill();
		static ::Dynamic endFill_dyn();

		static void endStroke();
		static ::Dynamic endStroke_dyn();

		static Bool hitTest( ::openfl::display::Graphics graphics,Float x,Float y);
		static ::Dynamic hitTest_dyn();

		static Bool isCCW(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3);
		static ::Dynamic isCCW_dyn();

		static  ::Dynamic normalizeUVT( ::openfl::_Vector::FloatVector uvt,hx::Null< Bool >  skipT);
		static ::Dynamic normalizeUVT_dyn();

		static void playCommands( ::openfl::_internal::renderer::DrawCommandBuffer commands,hx::Null< Bool >  stroke);
		static ::Dynamic playCommands_dyn();

		static void render( ::openfl::display::Graphics graphics, ::openfl::_internal::renderer::RenderSession renderSession, ::openfl::geom::Matrix parentTransform);
		static ::Dynamic render_dyn();

		static void renderMask( ::openfl::display::Graphics graphics, ::openfl::_internal::renderer::RenderSession renderSession);
		static ::Dynamic renderMask_dyn();

		static void setSmoothing(Bool smooth);
		static ::Dynamic setSmoothing_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas

#endif /* INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics */ 
