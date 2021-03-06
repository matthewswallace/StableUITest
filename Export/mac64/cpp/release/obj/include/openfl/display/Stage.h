// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display_Stage
#define INCLUDED_openfl_display_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Joystick)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS3(openfl,_internal,renderer,AbstractRenderer)
HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Stage_obj : public  ::openfl::display::DisplayObjectContainer_obj
{
	public:
		typedef  ::openfl::display::DisplayObjectContainer_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();

	public:
		void __construct( ::lime::ui::Window window, ::Dynamic color);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Stage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.Stage"); }
		static hx::ObjectPtr< Stage_obj > __new( ::lime::ui::Window window, ::Dynamic color);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Stage","\x9e","\xda","\x38","\x17"); }

		 ::Dynamic align;
		Bool allowsFullScreen;
		Bool allowsFullScreenInteractive;
		 ::lime::app::Application application;
		 ::Dynamic quality;
		 ::Dynamic scaleMode;
		 ::openfl::_Vector::ObjectVector stage3Ds;
		Bool stageFocusRect;
		Int stageHeight;
		Int stageWidth;
		 ::lime::ui::Window window;
		 ::openfl::display::InteractiveObject _hx___cacheFocus;
		Bool _hx___clearBeforeRender;
		Int _hx___color;
		::Array< Float > _hx___colorSplit;
		::String _hx___colorString;
		Int _hx___deltaTime;
		Bool _hx___dirty;
		 ::openfl::geom::Matrix _hx___displayMatrix;
		 ::Dynamic _hx___displayState;
		 ::openfl::geom::Rectangle _hx___dragBounds;
		 ::openfl::display::Sprite _hx___dragObject;
		Float _hx___dragOffsetX;
		Float _hx___dragOffsetY;
		 ::openfl::display::InteractiveObject _hx___focus;
		Bool _hx___fullscreen;
		Bool _hx___invalidated;
		Int _hx___lastClickTime;
		Int _hx___logicalWidth;
		Int _hx___logicalHeight;
		Bool _hx___macKeyboard;
		 ::openfl::display::InteractiveObject _hx___mouseDownLeft;
		 ::openfl::display::InteractiveObject _hx___mouseDownMiddle;
		 ::openfl::display::InteractiveObject _hx___mouseDownRight;
		 ::openfl::display::InteractiveObject _hx___mouseOverTarget;
		Float _hx___mouseX;
		Float _hx___mouseY;
		 ::lime::ui::Touch _hx___primaryTouch;
		 ::openfl::_internal::renderer::AbstractRenderer _hx___renderer;
		Bool _hx___rendering;
		::Array< ::Dynamic> _hx___rollOutStack;
		::Array< ::Dynamic> _hx___stack;
		Bool _hx___transparent;
		Bool _hx___wasDirty;
		void addRenderer( ::lime::graphics::Renderer renderer);
		::Dynamic addRenderer_dyn();

		void addWindow( ::lime::ui::Window window);
		::Dynamic addWindow_dyn();

		void registerModule( ::lime::app::Application application);
		::Dynamic registerModule_dyn();

		void removeRenderer( ::lime::graphics::Renderer renderer);
		::Dynamic removeRenderer_dyn();

		void removeWindow( ::lime::ui::Window window);
		::Dynamic removeWindow_dyn();

		void setPreloader( ::lime::app::Preloader preloader);
		::Dynamic setPreloader_dyn();

		void unregisterModule( ::lime::app::Application application);
		::Dynamic unregisterModule_dyn();

		 ::openfl::geom::Point globalToLocal( ::openfl::geom::Point pos);

		void invalidate();
		::Dynamic invalidate_dyn();

		 ::openfl::geom::Point localToGlobal( ::openfl::geom::Point pos);

		void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,Int axis,Float value);
		::Dynamic onGamepadAxisMove_dyn();

		void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,Int button);
		::Dynamic onGamepadButtonDown_dyn();

		void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,Int button);
		::Dynamic onGamepadButtonUp_dyn();

		void onGamepadConnect( ::lime::ui::Gamepad gamepad);
		::Dynamic onGamepadConnect_dyn();

		void onGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		::Dynamic onGamepadDisconnect_dyn();

		void onJoystickAxisMove( ::lime::ui::Joystick joystick,Int axis,Float value);
		::Dynamic onJoystickAxisMove_dyn();

		void onJoystickButtonDown( ::lime::ui::Joystick joystick,Int button);
		::Dynamic onJoystickButtonDown_dyn();

		void onJoystickButtonUp( ::lime::ui::Joystick joystick,Int button);
		::Dynamic onJoystickButtonUp_dyn();

		void onJoystickConnect( ::lime::ui::Joystick joystick);
		::Dynamic onJoystickConnect_dyn();

		void onJoystickDisconnect( ::lime::ui::Joystick joystick);
		::Dynamic onJoystickDisconnect_dyn();

		void onJoystickHatMove( ::lime::ui::Joystick joystick,Int hat,Int position);
		::Dynamic onJoystickHatMove_dyn();

		void onJoystickTrackballMove( ::lime::ui::Joystick joystick,Int trackball,Float value);
		::Dynamic onJoystickTrackballMove_dyn();

		void onKeyDown( ::lime::ui::Window window,Int keyCode,Int modifier);
		::Dynamic onKeyDown_dyn();

		void onKeyUp( ::lime::ui::Window window,Int keyCode,Int modifier);
		::Dynamic onKeyUp_dyn();

		void onModuleExit(Int code);
		::Dynamic onModuleExit_dyn();

		void onMouseDown( ::lime::ui::Window window,Float x,Float y,Int button);
		::Dynamic onMouseDown_dyn();

		void onMouseMove( ::lime::ui::Window window,Float x,Float y);
		::Dynamic onMouseMove_dyn();

		void onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y);
		::Dynamic onMouseMoveRelative_dyn();

		void onMouseUp( ::lime::ui::Window window,Float x,Float y,Int button);
		::Dynamic onMouseUp_dyn();

		void onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY);
		::Dynamic onMouseWheel_dyn();

		void onPreloadComplete();
		::Dynamic onPreloadComplete_dyn();

		void onPreloadProgress(Int loaded,Int total);
		::Dynamic onPreloadProgress_dyn();

		void onRenderContextLost( ::lime::graphics::Renderer renderer);
		::Dynamic onRenderContextLost_dyn();

		void onRenderContextRestored( ::lime::graphics::Renderer renderer,::hx::EnumBase context);
		::Dynamic onRenderContextRestored_dyn();

		void onTextEdit( ::lime::ui::Window window,::String text,Int start,Int length);
		::Dynamic onTextEdit_dyn();

		void onTextInput( ::lime::ui::Window window,::String text);
		::Dynamic onTextInput_dyn();

		void onTouchMove( ::lime::ui::Touch touch);
		::Dynamic onTouchMove_dyn();

		void onTouchEnd( ::lime::ui::Touch touch);
		::Dynamic onTouchEnd_dyn();

		void onTouchStart( ::lime::ui::Touch touch);
		::Dynamic onTouchStart_dyn();

		void onWindowActivate( ::lime::ui::Window window);
		::Dynamic onWindowActivate_dyn();

		void onWindowClose( ::lime::ui::Window window);
		::Dynamic onWindowClose_dyn();

		void onWindowCreate( ::lime::ui::Window window);
		::Dynamic onWindowCreate_dyn();

		void onWindowDeactivate( ::lime::ui::Window window);
		::Dynamic onWindowDeactivate_dyn();

		void onWindowDropFile( ::lime::ui::Window window,::String file);
		::Dynamic onWindowDropFile_dyn();

		void onWindowEnter( ::lime::ui::Window window);
		::Dynamic onWindowEnter_dyn();

		void onWindowFocusIn( ::lime::ui::Window window);
		::Dynamic onWindowFocusIn_dyn();

		void onWindowFocusOut( ::lime::ui::Window window);
		::Dynamic onWindowFocusOut_dyn();

		void onWindowFullscreen( ::lime::ui::Window window);
		::Dynamic onWindowFullscreen_dyn();

		void onWindowLeave( ::lime::ui::Window window);
		::Dynamic onWindowLeave_dyn();

		void onWindowMinimize( ::lime::ui::Window window);
		::Dynamic onWindowMinimize_dyn();

		void onWindowMove( ::lime::ui::Window window,Float x,Float y);
		::Dynamic onWindowMove_dyn();

		void onWindowResize( ::lime::ui::Window window,Int width,Int height);
		::Dynamic onWindowResize_dyn();

		void onWindowRestore( ::lime::ui::Window window);
		::Dynamic onWindowRestore_dyn();

		void render( ::lime::graphics::Renderer renderer);
		::Dynamic render_dyn();

		void update(Int deltaTime);
		::Dynamic update_dyn();

		void _hx___broadcastEvent( ::openfl::events::Event event);
		::Dynamic _hx___broadcastEvent_dyn();

		void _hx___drag( ::openfl::geom::Point mouse);
		::Dynamic _hx___drag_dyn();

		void _hx___fireEvent( ::openfl::events::Event event,::Array< ::Dynamic> stack);
		::Dynamic _hx___fireEvent_dyn();

		Bool _hx___getInteractive(::Array< ::Dynamic> stack);

		void _hx___onKey(::String type,Int keyCode,Int modifier);
		::Dynamic _hx___onKey_dyn();

		void _hx___onGamepadConnect( ::lime::ui::Gamepad gamepad);
		::Dynamic _hx___onGamepadConnect_dyn();

		void _hx___onMouse(::String type,Float x,Float y,Int button);
		::Dynamic _hx___onMouse_dyn();

		void _hx___onMouseWheel(Float deltaX,Float deltaY);
		::Dynamic _hx___onMouseWheel_dyn();

		void _hx___onTouch(::String type, ::lime::ui::Touch touch);
		::Dynamic _hx___onTouch_dyn();

		void _hx___renderDOM( ::openfl::_internal::renderer::RenderSession renderSession);

		void _hx___resize();
		::Dynamic _hx___resize_dyn();

		void _hx___setLogicalSize(Int width,Int height);
		::Dynamic _hx___setLogicalSize_dyn();

		void _hx___startDrag( ::openfl::display::Sprite sprite,Bool lockCenter, ::openfl::geom::Rectangle bounds);
		::Dynamic _hx___startDrag_dyn();

		void _hx___stopDrag( ::openfl::display::Sprite sprite);
		::Dynamic _hx___stopDrag_dyn();

		void _hx___update(Bool transformOnly,Bool updateChildren, ::openfl::display::Graphics maskGrahpics);

		Int get_color();
		::Dynamic get_color_dyn();

		Int set_color(Int value);
		::Dynamic set_color_dyn();

		 ::Dynamic get_displayState();
		::Dynamic get_displayState_dyn();

		 ::Dynamic set_displayState( ::Dynamic value);
		::Dynamic set_displayState_dyn();

		 ::openfl::display::InteractiveObject get_focus();
		::Dynamic get_focus_dyn();

		 ::openfl::display::InteractiveObject set_focus( ::openfl::display::InteractiveObject value);
		::Dynamic set_focus_dyn();

		Float get_frameRate();
		::Dynamic get_frameRate_dyn();

		Float set_frameRate(Float value);
		::Dynamic set_frameRate_dyn();

		Float get_mouseX();

		Float get_mouseY();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Stage */ 
