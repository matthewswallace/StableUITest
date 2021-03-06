// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif


void Sys_obj::__construct() { }

Dynamic Sys_obj::__CreateEmpty() { return new Sys_obj; }

hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{
	hx::ObjectPtr< Sys_obj > _hx_result = new Sys_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sys_obj > _hx_result = new Sys_obj();
	_hx_result->__construct();
	return _hx_result;
}

void Sys_obj::print( ::Dynamic v){
            	HX_STACK_FRAME("Sys","print",0x483745ec,"Sys.print","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",27,0xd23c22f3)
            	HX_STACK_ARG(v,"v")
HXLINE(  27)		::__hxcpp_print(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,print,(void))

void Sys_obj::println( ::Dynamic v){
            	HX_STACK_FRAME("Sys","println",0x3905f76e,"Sys.println","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",31,0xd23c22f3)
            	HX_STACK_ARG(v,"v")
HXLINE(  31)		::__hxcpp_println(v);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

 ::haxe::io::Output Sys_obj::_hx_stderr(){
            	HX_STACK_FRAME("Sys","stderr",0x3eb04003,"Sys.stderr","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",46,0xd23c22f3)
HXLINE(  46)		 ::Dynamic _hx_tmp = _hx_std_file_stderr();
HXDLIN(  46)		return  ::sys::io::FileOutput_obj::__new(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_hx_stderr,return )

::Array< ::String > Sys_obj::args(){
            	HX_STACK_FRAME("Sys","args",0xeaeddc7e,"Sys.args","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",54,0xd23c22f3)
HXLINE(  54)		return ::__get_args();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

::String Sys_obj::getEnv(::String s){
            	HX_STACK_FRAME("Sys","getEnv",0xd9e05658,"Sys.getEnv","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",57,0xd23c22f3)
            	HX_STACK_ARG(s,"s")
HXLINE(  58)		HX_VARI( ::String,v) = _hx_std_get_env(s);
HXLINE(  59)		Bool _hx_tmp = hx::IsNull( v );
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			return null();
            		}
HXLINE(  61)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,getEnv,return )

void Sys_obj::sleep(Float seconds){
            	HX_STACK_FRAME("Sys","sleep",0xfe70aad6,"Sys.sleep","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",69,0xd23c22f3)
            	HX_STACK_ARG(seconds,"seconds")
HXLINE(  69)		_hx_std_sys_sleep(seconds);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,sleep,(void))

::String Sys_obj::getCwd(){
            	HX_STACK_FRAME("Sys","getCwd",0xd9ded99b,"Sys.getCwd","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",77,0xd23c22f3)
HXLINE(  77)		return _hx_std_get_cwd();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,getCwd,return )

void Sys_obj::setCwd(::String s){
            	HX_STACK_FRAME("Sys","setCwd",0xa6272e0f,"Sys.setCwd","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",81,0xd23c22f3)
            	HX_STACK_ARG(s,"s")
HXLINE(  81)		_hx_std_set_cwd(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,setCwd,(void))

::String Sys_obj::systemName(){
            	HX_STACK_FRAME("Sys","systemName",0xbea5b6bb,"Sys.systemName","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",85,0xd23c22f3)
HXLINE(  85)		return _hx_std_sys_string();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )

Int Sys_obj::command(::String cmd,::Array< ::String > args){
            	HX_STACK_FRAME("Sys","command",0x363f8cca,"Sys.command","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",89,0xd23c22f3)
            	HX_STACK_ARG(cmd,"cmd")
            	HX_STACK_ARG(args,"args")
HXLINE(  89)		Bool _hx_tmp = hx::IsNull( args );
HXDLIN(  89)		if (_hx_tmp) {
HXLINE(  90)			return _hx_std_sys_command(cmd);
            		}
            		else {
HXLINE(  92)			HX_VARI( ::String,_g) = ::Sys_obj::systemName();
HXDLIN(  92)			if ((_g == HX_("Windows",63,06,c6,b5))) {
HXLINE(  94)				HX_VARI_NAME( ::Array< ::String >,_g1,"_g") = ::Array_obj< ::String >::__new(0);
HXLINE(  95)				{
HXLINE(  95)					HX_VARI_NAME( Int,_g11,"_g1") = (int)0;
HXDLIN(  95)					::String _hx_tmp1 = ::StringTools_obj::replace(cmd,HX_("/",2f,00,00,00),HX_("\\",5c,00,00,00));
HXDLIN(  95)					HX_VARI( ::Array< ::String >,_g2) = ::Array_obj< ::String >::__new(1)->init(0,_hx_tmp1)->concat(args);
HXDLIN(  95)					while((_g11 < _g2->length)){
HXLINE(  95)						HX_VARI( ::String,a) = _g2->__get(_g11);
HXDLIN(  95)						++_g11;
HXLINE(  96)						::String _hx_tmp2 = ::StringTools_obj::quoteWinArg(a,true);
HXDLIN(  96)						_g1->push(_hx_tmp2);
            					}
            				}
HXLINE(  94)				cmd = _g1->join(HX_(" ",20,00,00,00));
HXLINE(  98)				return _hx_std_sys_command(cmd);
            			}
            			else {
HXLINE( 100)				cmd = ::Array_obj< ::String >::__new(1)->init(0,cmd)->concat(args)->map(::StringTools_obj::quoteUnixArg_dyn())->join(HX_(" ",20,00,00,00));
HXLINE( 101)				return _hx_std_sys_command(cmd);
            			}
            		}
HXLINE(  89)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Sys_obj,command,return )

void Sys_obj::exit(Int code){
            	HX_STACK_FRAME("Sys","exit",0xed97463f,"Sys.exit","/usr/local/lib/haxe/std/cpp/_std/Sys.hx",107,0xd23c22f3)
            	HX_STACK_ARG(code,"code")
HXLINE( 107)		::__hxcpp_exit(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,exit,(void))


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"sleep") ) { outValue = sleep_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stderr") ) { outValue = _hx_stderr_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnv") ) { outValue = getEnv_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getCwd") ) { outValue = getCwd_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setCwd") ) { outValue = setCwd_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"command") ) { outValue = command_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Sys_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Sys_obj_sStaticStorageInfo = 0;
#endif

static void Sys_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sys_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String Sys_obj_sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("stderr","\xa2","\x26","\xec","\x07"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("getEnv","\xf7","\x3c","\x1c","\xa3"),
	HX_HCSTRING("sleep","\x17","\xbd","\xc4","\x7e"),
	HX_HCSTRING("getCwd","\x3a","\xc0","\x1a","\xa3"),
	HX_HCSTRING("setCwd","\xae","\x14","\x63","\x6f"),
	HX_HCSTRING("systemName","\xda","\xd8","\x82","\xf7"),
	HX_HCSTRING("command","\x4b","\x71","\x6d","\x81"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	::String(null())
};

void Sys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sys_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Sys_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sys_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sys_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

