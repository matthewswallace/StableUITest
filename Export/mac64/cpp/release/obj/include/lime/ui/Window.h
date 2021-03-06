// Generated by Haxe 3.3.0
#ifndef INCLUDED_lime_ui_Window
#define INCLUDED_lime_ui_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Float_Float_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_String_Int_Int_Void)
HX_DECLARE_CLASS2(lime,app,_Event_String_Void)
HX_DECLARE_CLASS2(lime,app,_Event_Void_Void)
HX_DECLARE_CLASS2(lime,app,_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,_hx_system,Display)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace lime{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES Window_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();

	public:
		void __construct( ::Dynamic config);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.ui.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.ui.Window"); }
		static hx::ObjectPtr< Window_obj > __new( ::Dynamic config);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Window","\x10","\x08","\x21","\x87"); }

		 ::lime::app::Application application;
		 ::Dynamic config;
		 ::lime::_hx_system::Display display;
		Int id;
		 ::lime::app::_Event_Void_Void onActivate;
		 ::lime::app::_Event_Void_Void onClose;
		 ::lime::app::_Event_Void_Void onCreate;
		 ::lime::app::_Event_Void_Void onDeactivate;
		 ::lime::app::_Event_String_Void onDropFile;
		 ::lime::app::_Event_Void_Void onEnter;
		 ::lime::app::_Event_Void_Void onFocusIn;
		 ::lime::app::_Event_Void_Void onFocusOut;
		 ::lime::app::_Event_Void_Void onFullscreen;
		 ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void onKeyDown;
		 ::lime::app::_Event_lime_ui_KeyCode_lime_ui_KeyModifier_Void onKeyUp;
		 ::lime::app::_Event_Void_Void onLeave;
		 ::lime::app::_Event_Void_Void onMinimize;
		 ::lime::app::_Event_Float_Float_Int_Void onMouseDown;
		 ::lime::app::_Event_Float_Float_Void onMouseMove;
		 ::lime::app::_Event_Float_Float_Void onMouseMoveRelative;
		 ::lime::app::_Event_Float_Float_Int_Void onMouseUp;
		 ::lime::app::_Event_Float_Float_Void onMouseWheel;
		 ::lime::app::_Event_Float_Float_Void onMove;
		 ::lime::app::_Event_Int_Int_Void onResize;
		 ::lime::app::_Event_Void_Void onRestore;
		 ::lime::app::_Event_String_Int_Int_Void onTextEdit;
		 ::lime::app::_Event_String_Void onTextInput;
		 ::lime::graphics::Renderer renderer;
		Float scale;
		 ::openfl::display::Stage stage;
		 ::lime::_backend::native::NativeWindow backend;
		Bool _hx___borderless;
		Bool _hx___fullscreen;
		Int _hx___height;
		Bool _hx___maximized;
		Bool _hx___minimized;
		Bool _hx___resizable;
		Float _hx___scale;
		::String _hx___title;
		Int _hx___width;
		Int _hx___x;
		Int _hx___y;
		void alert(::String message,::String title);
		::Dynamic alert_dyn();

		void close();
		::Dynamic close_dyn();

		virtual void create( ::lime::app::Application application);
		::Dynamic create_dyn();

		void focus();
		::Dynamic focus_dyn();

		void move(Int x,Int y);
		::Dynamic move_dyn();

		void resize(Int width,Int height);
		::Dynamic resize_dyn();

		void setIcon( ::lime::graphics::Image image);
		::Dynamic setIcon_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		 ::lime::_hx_system::Display get_display();
		::Dynamic get_display_dyn();

		Bool get_borderless();
		::Dynamic get_borderless_dyn();

		Bool set_borderless(Bool value);
		::Dynamic set_borderless_dyn();

		Bool get_enableTextEvents();
		::Dynamic get_enableTextEvents_dyn();

		Bool set_enableTextEvents(Bool value);
		::Dynamic set_enableTextEvents_dyn();

		Bool get_fullscreen();
		::Dynamic get_fullscreen_dyn();

		Bool set_fullscreen(Bool value);
		::Dynamic set_fullscreen_dyn();

		Int get_height();
		::Dynamic get_height_dyn();

		Int set_height(Int value);
		::Dynamic set_height_dyn();

		Bool get_maximized();
		::Dynamic get_maximized_dyn();

		Bool set_maximized(Bool value);
		::Dynamic set_maximized_dyn();

		Bool get_minimized();
		::Dynamic get_minimized_dyn();

		Bool set_minimized(Bool value);
		::Dynamic set_minimized_dyn();

		Bool get_resizable();
		::Dynamic get_resizable_dyn();

		Bool set_resizable(Bool value);
		::Dynamic set_resizable_dyn();

		Float get_scale();
		::Dynamic get_scale_dyn();

		::String get_title();
		::Dynamic get_title_dyn();

		::String set_title(::String value);
		::Dynamic set_title_dyn();

		Int get_width();
		::Dynamic get_width_dyn();

		Int set_width(Int value);
		::Dynamic set_width_dyn();

		Int get_x();
		::Dynamic get_x_dyn();

		Int set_x(Int value);
		::Dynamic set_x_dyn();

		Int get_y();
		::Dynamic get_y_dyn();

		Int set_y(Int value);
		::Dynamic set_y_dyn();

};

} // end namespace lime
} // end namespace ui

#endif /* INCLUDED_lime_ui_Window */ 
