// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_LogHelper
#include <lime/tools/helpers/LogHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_PathHelper
#include <lime/tools/helpers/PathHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_PlatformHelper
#include <lime/tools/helpers/PlatformHelper.h>
#endif
#ifndef INCLUDED_lime_tools_helpers_ProcessHelper
#include <lime/tools/helpers/ProcessHelper.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif

static const ::String _hx_array_data_0[] = {
	HX_("/c",54,29,00,00),
};
static const ::String _hx_array_data_6[] = {
	HX_("/proc/cpuinfo",8c,b9,6d,e9),
};
static const ::String _hx_array_data_7[] = {
	HX_("-detailLevel",26,7a,d3,46),HX_("full",8f,e9,c4,43),HX_("SPHardwareDataType",89,47,b4,f0),
};
namespace lime{
namespace tools{
namespace helpers{

void ProcessHelper_obj::__construct() { }

Dynamic ProcessHelper_obj::__CreateEmpty() { return new ProcessHelper_obj; }

hx::ObjectPtr< ProcessHelper_obj > ProcessHelper_obj::__new()
{
	hx::ObjectPtr< ProcessHelper_obj > _hx_result = new ProcessHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic ProcessHelper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ProcessHelper_obj > _hx_result = new ProcessHelper_obj();
	_hx_result->__construct();
	return _hx_result;
}

Bool ProcessHelper_obj::dryRun;

Int ProcessHelper_obj::processorCores;

Int ProcessHelper_obj::_processorCores;

void ProcessHelper_obj::openFile(::String workingDirectory,::String targetPath,::String __o_executable){
::String executable = __o_executable.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","openFile",0x27fa13cc,"lime.tools.helpers.ProcessHelper.openFile","lime/tools/helpers/ProcessHelper.hx",21,0xd43cd1b9)
            	HX_STACK_ARG(workingDirectory,"workingDirectory")
            	HX_STACK_ARG(targetPath,"targetPath")
            	HX_STACK_ARG(executable,"executable")
HXLINE(  23)		Bool _hx_tmp = hx::IsNull( executable );
HXDLIN(  23)		if (_hx_tmp) {
HXLINE(  25)			executable = HX_("",00,00,00,00);
            		}
HXLINE(  29)		::String _hx_tmp1 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();
HXDLIN(  29)		if ((_hx_tmp1 == HX_("windows",83,de,74,e8))) {
HXLINE(  31)			HX_VARI( ::Array< ::String >,args) = ::Array_obj< ::String >::__new(0);
HXLINE(  33)			Bool _hx_tmp2 = (executable == HX_("",00,00,00,00));
HXDLIN(  33)			if (_hx_tmp2) {
HXLINE(  35)				executable = HX_("cmd",7a,7e,4b,00);
HXLINE(  36)				args = ::Array_obj< ::String >::fromData( _hx_array_data_0,1);
            			}
HXLINE(  40)			Int _hx_tmp3 = targetPath.indexOf(HX_(":\\",e2,32,00,00),null());
HXDLIN(  40)			if ((_hx_tmp3 == (int)-1)) {
HXLINE(  42)				::Array< ::String > _hx_tmp4 = args->concat(::Array_obj< ::String >::__new(1)->init(0,targetPath));
HXDLIN(  42)				::lime::tools::helpers::ProcessHelper_obj::runCommand(workingDirectory,executable,_hx_tmp4,null(),null(),null());
            			}
            			else {
HXLINE(  46)				::Array< ::String > _hx_tmp5 = args->concat(::Array_obj< ::String >::__new(1)->init(0,(HX_(".\\",6e,28,00,00) + targetPath)));
HXDLIN(  46)				::lime::tools::helpers::ProcessHelper_obj::runCommand(workingDirectory,executable,_hx_tmp5,null(),null(),null());
            			}
            		}
            		else {
HXLINE(  50)			::String _hx_tmp6 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();
HXDLIN(  50)			if ((_hx_tmp6 == HX_("mac",8f,0a,53,00))) {
HXLINE(  52)				Bool _hx_tmp7 = (executable == HX_("",00,00,00,00));
HXDLIN(  52)				if (_hx_tmp7) {
HXLINE(  54)					executable = HX_("/usr/bin/open",5c,58,a2,62);
            				}
HXLINE(  58)				::String _hx_tmp8 = targetPath.substr((int)0,(int)1);
HXDLIN(  58)				if ((_hx_tmp8 == HX_("/",2f,00,00,00))) {
HXLINE(  60)					::lime::tools::helpers::ProcessHelper_obj::runCommand(workingDirectory,executable,::Array_obj< ::String >::__new(2)->init(0,HX_("-W",8a,27,00,00))->init(1,targetPath),null(),null(),null());
            				}
            				else {
HXLINE(  64)					::lime::tools::helpers::ProcessHelper_obj::runCommand(workingDirectory,executable,::Array_obj< ::String >::__new(2)->init(0,HX_("-W",8a,27,00,00))->init(1,(HX_("./",41,28,00,00) + targetPath)),null(),null(),null());
            				}
            			}
            			else {
HXLINE(  70)				Bool _hx_tmp9 = (executable == HX_("",00,00,00,00));
HXDLIN(  70)				if (_hx_tmp9) {
HXLINE(  72)					executable = HX_("/usr/bin/xdg-open",2e,30,af,50);
            				}
HXLINE(  76)				::String _hx_tmp10 = targetPath.substr((int)0,(int)1);
HXDLIN(  76)				if ((_hx_tmp10 == HX_("/",2f,00,00,00))) {
HXLINE(  78)					::lime::tools::helpers::ProcessHelper_obj::runCommand(workingDirectory,executable,::Array_obj< ::String >::__new(1)->init(0,targetPath),null(),null(),null());
            				}
            				else {
HXLINE(  82)					::lime::tools::helpers::ProcessHelper_obj::runCommand(workingDirectory,executable,::Array_obj< ::String >::__new(1)->init(0,(HX_("./",41,28,00,00) + targetPath)),null(),null(),null());
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ProcessHelper_obj,openFile,(void))

void ProcessHelper_obj::openURL(::String url){
            	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","openURL",0xb474e41f,"lime.tools.helpers.ProcessHelper.openURL","lime/tools/helpers/ProcessHelper.hx",93,0xd43cd1b9)
            	HX_STACK_ARG(url,"url")
HXLINE(  93)		::String _hx_tmp = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();
HXDLIN(  93)		if ((_hx_tmp == HX_("windows",83,de,74,e8))) {
HXLINE(  95)			::lime::tools::helpers::ProcessHelper_obj::runCommand(HX_("",00,00,00,00),HX_("start",62,74,0b,84),::Array_obj< ::String >::__new(1)->init(0,url),null(),null(),null());
            		}
            		else {
HXLINE(  97)			::String _hx_tmp1 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();
HXDLIN(  97)			if ((_hx_tmp1 == HX_("mac",8f,0a,53,00))) {
HXLINE(  99)				::lime::tools::helpers::ProcessHelper_obj::runCommand(HX_("",00,00,00,00),HX_("/usr/bin/open",5c,58,a2,62),::Array_obj< ::String >::__new(1)->init(0,url),null(),null(),null());
            			}
            			else {
HXLINE( 103)				::lime::tools::helpers::ProcessHelper_obj::runCommand(HX_("",00,00,00,00),HX_("/usr/bin/xdg-open",2e,30,af,50),::Array_obj< ::String >::__new(2)->init(0,url)->init(1,HX_("&",26,00,00,00)),null(),null(),null());
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ProcessHelper_obj,openURL,(void))

Int ProcessHelper_obj::runCommand(::String path,::String command,::Array< ::String > args,hx::Null< Bool >  __o_safeExecute,hx::Null< Bool >  __o_ignoreErrors,hx::Null< Bool >  __o_print){
Bool safeExecute = __o_safeExecute.Default(true);
Bool ignoreErrors = __o_ignoreErrors.Default(false);
Bool print = __o_print.Default(false);
            	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","runCommand",0xc2a3cf26,"lime.tools.helpers.ProcessHelper.runCommand","lime/tools/helpers/ProcessHelper.hx",110,0xd43cd1b9)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(command,"command")
            	HX_STACK_ARG(args,"args")
            	HX_STACK_ARG(safeExecute,"safeExecute")
            	HX_STACK_ARG(ignoreErrors,"ignoreErrors")
            	HX_STACK_ARG(print,"print")
HXLINE( 112)		if (print) {
HXLINE( 114)			HX_VARI( ::String,message) = command;
HXLINE( 116)			Bool _hx_tmp = hx::IsNotNull( args );
HXDLIN( 116)			if (_hx_tmp) {
HXLINE( 118)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 118)				while((_g < args->length)){
HXLINE( 118)					HX_VARI( ::String,arg) = args->__get(_g);
HXDLIN( 118)					++_g;
HXLINE( 120)					Int _hx_tmp1 = arg.indexOf(HX_(" ",20,00,00,00),null());
HXDLIN( 120)					if ((_hx_tmp1 > (int)-1)) {
HXLINE( 122)						hx::AddEq(message,((HX_(" \"",02,1c,00,00) + arg) + HX_("\"",22,00,00,00)));
            					}
            					else {
HXLINE( 126)						hx::AddEq(message,(HX_(" ",20,00,00,00) + arg));
            					}
            				}
            			}
HXLINE( 134)			::Sys_obj::println(message);
            		}
HXLINE( 138)		Bool _hx_tmp2;
HXDLIN( 138)		Bool _hx_tmp3 = hx::IsNotNull( args );
HXDLIN( 138)		if (_hx_tmp3) {
HXLINE( 138)			::String _hx_tmp4 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();
HXDLIN( 138)			_hx_tmp2 = (_hx_tmp4 == HX_("windows",83,de,74,e8));
            		}
            		else {
HXLINE( 138)			_hx_tmp2 = false;
            		}
HXDLIN( 138)		if (_hx_tmp2) {
HXLINE( 140)			command = ::lime::tools::helpers::PathHelper_obj::escape(command);
            		}
HXLINE( 144)		if (safeExecute) {
HXLINE( 146)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 148)				Bool _hx_tmp5;
HXDLIN( 148)				Bool _hx_tmp6;
HXDLIN( 148)				Bool _hx_tmp7;
HXDLIN( 148)				Bool _hx_tmp8 = hx::IsNotNull( path );
HXDLIN( 148)				if (_hx_tmp8) {
HXLINE( 148)					_hx_tmp7 = (path != HX_("",00,00,00,00));
            				}
            				else {
HXLINE( 148)					_hx_tmp7 = false;
            				}
HXDLIN( 148)				if (_hx_tmp7) {
HXLINE( 148)					::String _hx_tmp9 = ::sys::FileSystem_obj::fullPath(path);
HXDLIN( 148)					_hx_tmp6 = !(::sys::FileSystem_obj::exists(_hx_tmp9));
            				}
            				else {
HXLINE( 148)					_hx_tmp6 = false;
            				}
HXDLIN( 148)				if (_hx_tmp6) {
HXLINE( 148)					::String _hx_tmp10 = ::sys::FileSystem_obj::fullPath( ::haxe::io::Path_obj::__new(path)->dir);
HXDLIN( 148)					_hx_tmp5 = !(::sys::FileSystem_obj::exists(_hx_tmp10));
            				}
            				else {
HXLINE( 148)					_hx_tmp5 = false;
            				}
HXDLIN( 148)				if (_hx_tmp5) {
HXLINE( 150)					::lime::tools::helpers::LogHelper_obj::error(((HX_("The specified target path \"",17,1a,cd,40) + path) + HX_("\" does not exist",01,0c,9e,c6)),null(),null());
HXLINE( 151)					return (int)1;
            				}
HXLINE( 155)				return ::lime::tools::helpers::ProcessHelper_obj::_runCommand(path,command,args);
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
HXLINE( 159)					if (!(ignoreErrors)) {
HXLINE( 161)						::lime::tools::helpers::LogHelper_obj::error(HX_("",00,00,00,00),e,null());
HXLINE( 162)						return (int)1;
            					}
HXLINE( 166)					return (int)0;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		else {
HXLINE( 172)			return ::lime::tools::helpers::ProcessHelper_obj::_runCommand(path,command,args);
            		}
HXLINE( 144)		return (int)0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ProcessHelper_obj,runCommand,return )

Int ProcessHelper_obj::_runCommand(::String path,::String command,::Array< ::String > args){
            	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","_runCommand",0xca4e29b9,"lime.tools.helpers.ProcessHelper._runCommand","lime/tools/helpers/ProcessHelper.hx",179,0xd43cd1b9)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(command,"command")
            	HX_STACK_ARG(args,"args")
HXLINE( 181)		HX_VARI( ::String,oldPath) = HX_("",00,00,00,00);
HXLINE( 183)		Bool _hx_tmp;
HXDLIN( 183)		Bool _hx_tmp1 = hx::IsNotNull( path );
HXDLIN( 183)		if (_hx_tmp1) {
HXLINE( 183)			_hx_tmp = (path != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 183)			_hx_tmp = false;
            		}
HXDLIN( 183)		if (_hx_tmp) {
HXLINE( 185)			::lime::tools::helpers::LogHelper_obj::info(HX_("",00,00,00,00),((HX_(" - \x1b""[1mChanging directory:\x1b""[0m ",b2,c4,d8,6b) + path) + HX_("",00,00,00,00)));
HXLINE( 187)			Bool _hx_tmp2 = !(::lime::tools::helpers::ProcessHelper_obj::dryRun);
HXDLIN( 187)			if (_hx_tmp2) {
HXLINE( 189)				oldPath = ::Sys_obj::getCwd();
HXLINE( 190)				::Sys_obj::setCwd(path);
            			}
            		}
HXLINE( 196)		HX_VARI( ::String,argString) = HX_("",00,00,00,00);
HXLINE( 198)		Bool _hx_tmp3 = hx::IsNotNull( args );
HXDLIN( 198)		if (_hx_tmp3) {
HXLINE( 200)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 200)			while((_g < args->length)){
HXLINE( 200)				HX_VARI( ::String,arg) = args->__get(_g);
HXDLIN( 200)				++_g;
HXLINE( 202)				Int _hx_tmp4 = arg.indexOf(HX_(" ",20,00,00,00),null());
HXDLIN( 202)				if ((_hx_tmp4 > (int)-1)) {
HXLINE( 204)					hx::AddEq(argString,((HX_(" \"",02,1c,00,00) + arg) + HX_("\"",22,00,00,00)));
            				}
            				else {
HXLINE( 208)					hx::AddEq(argString,(HX_(" ",20,00,00,00) + arg));
            				}
            			}
            		}
HXLINE( 216)		::lime::tools::helpers::LogHelper_obj::info(HX_("",00,00,00,00),((HX_(" - \x1b""[1mRunning command:\x1b""[0m ",24,22,1c,30) + command) + argString));
HXLINE( 218)		HX_VARI( Int,result) = (int)0;
HXLINE( 220)		Bool _hx_tmp5 = !(::lime::tools::helpers::ProcessHelper_obj::dryRun);
HXDLIN( 220)		if (_hx_tmp5) {
HXLINE( 222)			Bool _hx_tmp6;
HXDLIN( 222)			Bool _hx_tmp7 = hx::IsNotNull( args );
HXDLIN( 222)			if (_hx_tmp7) {
HXLINE( 222)				_hx_tmp6 = (args->length > (int)0);
            			}
            			else {
HXLINE( 222)				_hx_tmp6 = false;
            			}
HXDLIN( 222)			if (_hx_tmp6) {
HXLINE( 224)				result = ::Sys_obj::command(command,args);
            			}
            			else {
HXLINE( 228)				result = ::Sys_obj::command(command,null());
            			}
HXLINE( 232)			if ((oldPath != HX_("",00,00,00,00))) {
HXLINE( 234)				::Sys_obj::setCwd(oldPath);
            			}
            		}
HXLINE( 240)		if ((result != (int)0)) {
HXLINE( 242)			::String _hx_tmp8 = ((HX_("Error running: ",ed,b7,34,82) + command) + HX_(" ",20,00,00,00));
HXDLIN( 242)			::String _hx_tmp9 = args->join(HX_(" ",20,00,00,00));
HXDLIN( 242)			HX_STACK_DO_THROW(((((_hx_tmp8 + _hx_tmp9) + HX_(" [",3b,1c,00,00)) + path) + HX_("]",5d,00,00,00)));
            		}
HXLINE( 246)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ProcessHelper_obj,_runCommand,return )

::String ProcessHelper_obj::runProcess(::String path,::String command,::Array< ::String > args,hx::Null< Bool >  __o_waitForOutput,hx::Null< Bool >  __o_safeExecute,hx::Null< Bool >  __o_ignoreErrors,hx::Null< Bool >  __o_print){
Bool waitForOutput = __o_waitForOutput.Default(true);
Bool safeExecute = __o_safeExecute.Default(true);
Bool ignoreErrors = __o_ignoreErrors.Default(false);
Bool print = __o_print.Default(false);
            	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","runProcess",0x3281004a,"lime.tools.helpers.ProcessHelper.runProcess","lime/tools/helpers/ProcessHelper.hx",251,0xd43cd1b9)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(command,"command")
            	HX_STACK_ARG(args,"args")
            	HX_STACK_ARG(waitForOutput,"waitForOutput")
            	HX_STACK_ARG(safeExecute,"safeExecute")
            	HX_STACK_ARG(ignoreErrors,"ignoreErrors")
            	HX_STACK_ARG(print,"print")
HXLINE( 253)		if (print) {
HXLINE( 255)			HX_VARI( ::String,message) = command;
HXLINE( 257)			{
HXLINE( 257)				HX_VARI( Int,_g) = (int)0;
HXDLIN( 257)				while((_g < args->length)){
HXLINE( 257)					HX_VARI( ::String,arg) = args->__get(_g);
HXDLIN( 257)					++_g;
HXLINE( 259)					Int _hx_tmp = arg.indexOf(HX_(" ",20,00,00,00),null());
HXDLIN( 259)					if ((_hx_tmp > (int)-1)) {
HXLINE( 261)						hx::AddEq(message,((HX_(" \"",02,1c,00,00) + arg) + HX_("\"",22,00,00,00)));
            					}
            					else {
HXLINE( 265)						hx::AddEq(message,(HX_(" ",20,00,00,00) + arg));
            					}
            				}
            			}
HXLINE( 271)			::Sys_obj::println(message);
            		}
HXLINE( 275)		command = ::lime::tools::helpers::PathHelper_obj::escape(command);
HXLINE( 277)		if (safeExecute) {
HXLINE( 279)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 281)				Bool _hx_tmp1;
HXDLIN( 281)				Bool _hx_tmp2;
HXDLIN( 281)				Bool _hx_tmp3;
HXDLIN( 281)				Bool _hx_tmp4 = hx::IsNotNull( path );
HXDLIN( 281)				if (_hx_tmp4) {
HXLINE( 281)					_hx_tmp3 = (path != HX_("",00,00,00,00));
            				}
            				else {
HXLINE( 281)					_hx_tmp3 = false;
            				}
HXDLIN( 281)				if (_hx_tmp3) {
HXLINE( 281)					::String _hx_tmp5 = ::sys::FileSystem_obj::fullPath(path);
HXDLIN( 281)					_hx_tmp2 = !(::sys::FileSystem_obj::exists(_hx_tmp5));
            				}
            				else {
HXLINE( 281)					_hx_tmp2 = false;
            				}
HXDLIN( 281)				if (_hx_tmp2) {
HXLINE( 281)					::String _hx_tmp6 = ::sys::FileSystem_obj::fullPath( ::haxe::io::Path_obj::__new(path)->dir);
HXDLIN( 281)					_hx_tmp1 = !(::sys::FileSystem_obj::exists(_hx_tmp6));
            				}
            				else {
HXLINE( 281)					_hx_tmp1 = false;
            				}
HXDLIN( 281)				if (_hx_tmp1) {
HXLINE( 283)					::lime::tools::helpers::LogHelper_obj::error(((HX_("The specified target path \"",17,1a,cd,40) + path) + HX_("\" does not exist",01,0c,9e,c6)),null(),null());
            				}
HXLINE( 287)				return ::lime::tools::helpers::ProcessHelper_obj::_runProcess(path,command,args,waitForOutput,safeExecute,ignoreErrors);
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
HXLINE( 291)					if (!(ignoreErrors)) {
HXLINE( 293)						::lime::tools::helpers::LogHelper_obj::error(HX_("",00,00,00,00),e,null());
            					}
HXLINE( 297)					return null();
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            		else {
HXLINE( 303)			return ::lime::tools::helpers::ProcessHelper_obj::_runProcess(path,command,args,waitForOutput,safeExecute,ignoreErrors);
            		}
HXLINE( 277)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ProcessHelper_obj,runProcess,return )

::String ProcessHelper_obj::_runProcess(::String path,::String command,::Array< ::String > args,Bool waitForOutput,Bool safeExecute,Bool ignoreErrors){
            	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","_runProcess",0x3a2b5add,"lime.tools.helpers.ProcessHelper._runProcess","lime/tools/helpers/ProcessHelper.hx",310,0xd43cd1b9)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(command,"command")
            	HX_STACK_ARG(args,"args")
            	HX_STACK_ARG(waitForOutput,"waitForOutput")
            	HX_STACK_ARG(safeExecute,"safeExecute")
            	HX_STACK_ARG(ignoreErrors,"ignoreErrors")
HXLINE( 312)		HX_VARI( ::String,oldPath) = HX_("",00,00,00,00);
HXLINE( 314)		Bool _hx_tmp;
HXDLIN( 314)		Bool _hx_tmp1 = hx::IsNotNull( path );
HXDLIN( 314)		if (_hx_tmp1) {
HXLINE( 314)			_hx_tmp = (path != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 314)			_hx_tmp = false;
            		}
HXDLIN( 314)		if (_hx_tmp) {
HXLINE( 316)			::lime::tools::helpers::LogHelper_obj::info(HX_("",00,00,00,00),((HX_(" - \x1b""[1mChanging directory:\x1b""[0m ",b2,c4,d8,6b) + path) + HX_("",00,00,00,00)));
HXLINE( 318)			Bool _hx_tmp2 = !(::lime::tools::helpers::ProcessHelper_obj::dryRun);
HXDLIN( 318)			if (_hx_tmp2) {
HXLINE( 320)				oldPath = ::Sys_obj::getCwd();
HXLINE( 321)				::Sys_obj::setCwd(path);
            			}
            		}
HXLINE( 327)		HX_VARI( ::String,argString) = HX_("",00,00,00,00);
HXLINE( 329)		{
HXLINE( 329)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 329)			while((_g < args->length)){
HXLINE( 329)				HX_VARI( ::String,arg) = args->__get(_g);
HXDLIN( 329)				++_g;
HXLINE( 331)				Int _hx_tmp3 = arg.indexOf(HX_(" ",20,00,00,00),null());
HXDLIN( 331)				if ((_hx_tmp3 > (int)-1)) {
HXLINE( 333)					hx::AddEq(argString,((HX_(" \"",02,1c,00,00) + arg) + HX_("\"",22,00,00,00)));
            				}
            				else {
HXLINE( 337)					hx::AddEq(argString,(HX_(" ",20,00,00,00) + arg));
            				}
            			}
            		}
HXLINE( 343)		::lime::tools::helpers::LogHelper_obj::info(HX_("",00,00,00,00),((HX_(" - \x1b""[1mRunning process:\x1b""[0m ",48,c6,78,d8) + command) + argString));
HXLINE( 345)		HX_VARI( ::String,output) = HX_("",00,00,00,00);
HXLINE( 348)		Bool _hx_tmp4 = !(::lime::tools::helpers::ProcessHelper_obj::dryRun);
HXDLIN( 348)		if (_hx_tmp4) {
HXLINE( 350)			HX_VARI(  ::sys::io::Process,process) =  ::sys::io::Process_obj::__new(command,args);
HXLINE( 351)			HX_VARI(  ::haxe::io::BytesOutput,buffer) =  ::haxe::io::BytesOutput_obj::__new();
HXLINE( 353)			if (waitForOutput) {
HXLINE( 355)				HX_VARI( Bool,waiting) = true;
HXLINE( 357)				while(waiting){
HXLINE( 359)					try {
            						HX_STACK_CATCHABLE( ::haxe::io::Eof, 0);
HXLINE( 361)						HX_VARI(  ::haxe::io::Bytes,current) = process->_hx_stdout->readAll((int)1024);
HXLINE( 362)						buffer->write(current);
HXLINE( 364)						if ((current->length == (int)0)) {
HXLINE( 366)							waiting = false;
            						}
            					}
            					catch( ::Dynamic _hx_e){
            						if (_hx_e.IsClass<  ::haxe::io::Eof >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::haxe::io::Eof e = _hx_e;
HXLINE( 372)							waiting = false;
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
HXLINE( 378)				process->exitCode();
HXLINE( 379)				process->close();
HXLINE( 383)				output = buffer->getBytes()->toString();
HXLINE( 385)				if ((output == HX_("",00,00,00,00))) {
HXLINE( 387)					HX_VARI( ::String,error) = process->_hx_stderr->readAll(null())->toString();
HXLINE( 389)					if (!(ignoreErrors)) {
HXLINE( 393)						if (!(safeExecute)) {
HXLINE( 395)							HX_STACK_DO_THROW(error);
            						}
            						else {
HXLINE( 399)							::lime::tools::helpers::LogHelper_obj::error(error,null(),null());
            						}
            					}
HXLINE( 403)					return null();
            				}
            			}
HXLINE( 417)			if ((oldPath != HX_("",00,00,00,00))) {
HXLINE( 419)				::Sys_obj::setCwd(oldPath);
            			}
            		}
HXLINE( 425)		return output;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ProcessHelper_obj,_runProcess,return )

Int ProcessHelper_obj::get_processorCores(){
            	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","get_processorCores",0x88662431,"lime.tools.helpers.ProcessHelper.get_processorCores","lime/tools/helpers/ProcessHelper.hx",437,0xd43cd1b9)
HXLINE( 439)		HX_VARI( Bool,cacheDryRun) = ::lime::tools::helpers::ProcessHelper_obj::dryRun;
HXLINE( 440)		::lime::tools::helpers::ProcessHelper_obj::dryRun = false;
HXLINE( 442)		Bool _hx_tmp = (::lime::tools::helpers::ProcessHelper_obj::_processorCores < (int)1);
HXDLIN( 442)		if (_hx_tmp) {
HXLINE( 444)			HX_VARI( ::String,result) = null();
HXLINE( 446)			::String _hx_tmp1 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();
HXDLIN( 446)			if ((_hx_tmp1 == HX_("windows",83,de,74,e8))) {
HXLINE( 448)				HX_VARI( ::String,env) = ::Sys_obj::getEnv(HX_("NUMBER_OF_PROCESSORS",13,f1,5e,ee));
HXLINE( 450)				Bool _hx_tmp2 = hx::IsNotNull( env );
HXDLIN( 450)				if (_hx_tmp2) {
HXLINE( 452)					result = env;
            				}
            			}
            			else {
HXLINE( 456)				::String _hx_tmp3 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();
HXDLIN( 456)				if ((_hx_tmp3 == HX_("linux",f4,eb,01,75))) {
HXLINE( 458)					result = ::lime::tools::helpers::ProcessHelper_obj::runProcess(HX_("",00,00,00,00),HX_("nproc",04,97,72,a0),::Array_obj< ::String >::__new(0),true,true,true,null());
HXLINE( 460)					Bool _hx_tmp4 = hx::IsNull( result );
HXDLIN( 460)					if (_hx_tmp4) {
HXLINE( 462)						HX_VARI( ::String,cpuinfo) = ::lime::tools::helpers::ProcessHelper_obj::runProcess(HX_("",00,00,00,00),HX_("cat",16,74,4b,00),::Array_obj< ::String >::fromData( _hx_array_data_6,1),true,true,true,null());
HXLINE( 464)						Bool _hx_tmp5 = hx::IsNotNull( cpuinfo );
HXDLIN( 464)						if (_hx_tmp5) {
HXLINE( 466)							HX_VARI( ::Array< ::String >,split) = cpuinfo.split(HX_("processor",52,bd,0b,d3));
HXLINE( 467)							Int _hx_tmp6 = (split->length - (int)1);
HXDLIN( 467)							result = ::Std_obj::string(_hx_tmp6);
            						}
            					}
            				}
            				else {
HXLINE( 473)					::String _hx_tmp7 = ::lime::tools::helpers::PlatformHelper_obj::get_hostPlatform();
HXDLIN( 473)					if ((_hx_tmp7 == HX_("mac",8f,0a,53,00))) {
HXLINE( 475)						HX_VARI(  ::EReg,cores) =  ::EReg_obj::__new(HX_("Total Number of Cores: (\\d+)",c2,4a,e3,a3),HX_("",00,00,00,00));
HXLINE( 476)						HX_VARI( ::String,output) = ::lime::tools::helpers::ProcessHelper_obj::runProcess(HX_("",00,00,00,00),HX_("/usr/sbin/system_profiler",a8,1e,29,cd),::Array_obj< ::String >::fromData( _hx_array_data_7,3),null(),null(),null(),null());
HXLINE( 478)						Bool _hx_tmp8 = cores->match(output);
HXDLIN( 478)						if (_hx_tmp8) {
HXLINE( 480)							result = cores->matched((int)1);
            						}
            					}
            				}
            			}
HXLINE( 486)			Bool _hx_tmp9;
HXDLIN( 486)			Bool _hx_tmp10 = hx::IsNotNull( result );
HXDLIN( 486)			if (_hx_tmp10) {
HXLINE( 486)				 ::Dynamic _hx_tmp11 = ::Std_obj::parseInt(result);
HXDLIN( 486)				_hx_tmp9 = hx::IsLess( _hx_tmp11,(int)1 );
            			}
            			else {
HXLINE( 486)				_hx_tmp9 = true;
            			}
HXDLIN( 486)			if (_hx_tmp9) {
HXLINE( 488)				::lime::tools::helpers::ProcessHelper_obj::_processorCores = (int)1;
            			}
            			else {
HXLINE( 492)				::lime::tools::helpers::ProcessHelper_obj::_processorCores = ::Std_obj::parseInt(result);
            			}
            		}
HXLINE( 498)		::lime::tools::helpers::ProcessHelper_obj::dryRun = cacheDryRun;
HXLINE( 500)		return ::lime::tools::helpers::ProcessHelper_obj::_processorCores;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ProcessHelper_obj,get_processorCores,return )


ProcessHelper_obj::ProcessHelper_obj()
{
}

bool ProcessHelper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"dryRun") ) { outValue = dryRun; return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"openFile") ) { outValue = openFile_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"runCommand") ) { outValue = runCommand_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"runProcess") ) { outValue = runProcess_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_runCommand") ) { outValue = _runCommand_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"_runProcess") ) { outValue = _runProcess_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processorCores") ) { outValue = inCallProp == hx::paccAlways ? get_processorCores() : processorCores; return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_processorCores") ) { outValue = _processorCores; return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_processorCores") ) { outValue = get_processorCores_dyn(); return true; }
	}
	return false;
}

bool ProcessHelper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"dryRun") ) { dryRun=ioValue.Cast< Bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"processorCores") ) { processorCores=ioValue.Cast< Int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_processorCores") ) { _processorCores=ioValue.Cast< Int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ProcessHelper_obj_sMemberStorageInfo = 0;
static hx::StaticInfo ProcessHelper_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &ProcessHelper_obj::dryRun,HX_HCSTRING("dryRun","\xe0","\xa6","\x97","\xef")},
	{hx::fsInt,(void *) &ProcessHelper_obj::processorCores,HX_HCSTRING("processorCores","\x82","\x1f","\x19","\x5f")},
	{hx::fsInt,(void *) &ProcessHelper_obj::_processorCores,HX_HCSTRING("_processorCores","\x21","\x68","\x79","\xa8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void ProcessHelper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProcessHelper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ProcessHelper_obj::dryRun,"dryRun");
	HX_MARK_MEMBER_NAME(ProcessHelper_obj::processorCores,"processorCores");
	HX_MARK_MEMBER_NAME(ProcessHelper_obj::_processorCores,"_processorCores");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ProcessHelper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProcessHelper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ProcessHelper_obj::dryRun,"dryRun");
	HX_VISIT_MEMBER_NAME(ProcessHelper_obj::processorCores,"processorCores");
	HX_VISIT_MEMBER_NAME(ProcessHelper_obj::_processorCores,"_processorCores");
};

#endif

hx::Class ProcessHelper_obj::__mClass;

static ::String ProcessHelper_obj_sStaticFields[] = {
	HX_HCSTRING("dryRun","\xe0","\xa6","\x97","\xef"),
	HX_HCSTRING("processorCores","\x82","\x1f","\x19","\x5f"),
	HX_HCSTRING("_processorCores","\x21","\x68","\x79","\xa8"),
	HX_HCSTRING("openFile","\x66","\xab","\xf7","\xe4"),
	HX_HCSTRING("openURL","\xc5","\xbd","\x35","\x40"),
	HX_HCSTRING("runCommand","\x40","\x01","\xea","\xeb"),
	HX_HCSTRING("_runCommand","\x5f","\xce","\x73","\xbe"),
	HX_HCSTRING("runProcess","\x64","\x32","\xc7","\x5b"),
	HX_HCSTRING("_runProcess","\x83","\xff","\x50","\x2e"),
	HX_HCSTRING("get_processorCores","\x4b","\x00","\xb3","\xfa"),
	::String(null())
};

void ProcessHelper_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.tools.helpers.ProcessHelper","\xc8","\x9c","\x98","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ProcessHelper_obj::__GetStatic;
	__mClass->mSetStaticField = &ProcessHelper_obj::__SetStatic;
	__mClass->mMarkFunc = ProcessHelper_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ProcessHelper_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ProcessHelper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ProcessHelper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ProcessHelper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ProcessHelper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ProcessHelper_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","boot",0xcd9c4198,"lime.tools.helpers.ProcessHelper.boot","lime/tools/helpers/ProcessHelper.hx",15,0xd43cd1b9)
HXLINE(  15)		dryRun = false;
            	}
{
            	HX_STACK_FRAME("lime.tools.helpers.ProcessHelper","boot",0xcd9c4198,"lime.tools.helpers.ProcessHelper.boot","lime/tools/helpers/ProcessHelper.hx",18,0xd43cd1b9)
HXLINE(  18)		_processorCores = (int)0;
            	}
}

} // end namespace lime
} // end namespace tools
} // end namespace helpers
