// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif

namespace haxe{
namespace io{

void Path_obj::__construct(::String path){
            	HX_STACK_FRAME("haxe.io.Path","new",0x1b96d677,"haxe.io.Path.new","/usr/local/lib/haxe/std/haxe/io/Path.hx",76,0xc99b0f1c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(path,"path")
HXLINE(  77)		::String _hx_switch_0 = path;
            		if (  (_hx_switch_0==HX_(".",2e,00,00,00)) ||  (_hx_switch_0==HX_("..",40,28,00,00)) ){
HXLINE(  79)			this->dir = path;
HXLINE(  80)			this->file = HX_("",00,00,00,00);
HXLINE(  81)			return;
HXLINE(  78)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  83)		HX_VARI( Int,c1) = path.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE(  84)		HX_VARI( Int,c2) = path.lastIndexOf(HX_("\\",5c,00,00,00),null());
HXLINE(  85)		if ((c1 < c2)) {
HXLINE(  86)			this->dir = path.substr((int)0,c2);
HXLINE(  87)			path = path.substr((c2 + (int)1),null());
HXLINE(  88)			this->backslash = true;
            		}
            		else {
HXLINE(  89)			if ((c2 < c1)) {
HXLINE(  90)				this->dir = path.substr((int)0,c1);
HXLINE(  91)				path = path.substr((c1 + (int)1),null());
            			}
            			else {
HXLINE(  93)				this->dir = null();
            			}
            		}
HXLINE(  94)		HX_VARI( Int,cp) = path.lastIndexOf(HX_(".",2e,00,00,00),null());
HXLINE(  95)		if ((cp != (int)-1)) {
HXLINE(  96)			this->ext = path.substr((cp + (int)1),null());
HXLINE(  97)			this->file = path.substr((int)0,cp);
            		}
            		else {
HXLINE(  99)			this->ext = null();
HXLINE( 100)			this->file = path;
            		}
            	}

Dynamic Path_obj::__CreateEmpty() { return new Path_obj; }

hx::ObjectPtr< Path_obj > Path_obj::__new(::String path)
{
	hx::ObjectPtr< Path_obj > _hx_result = new Path_obj();
	_hx_result->__construct(path);
	return _hx_result;
}

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Path_obj > _hx_result = new Path_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

::String Path_obj::toString(){
            	HX_STACK_FRAME("haxe.io.Path","toString",0xc0ab5735,"haxe.io.Path.toString","/usr/local/lib/haxe/std/haxe/io/Path.hx",115,0xc99b0f1c)
            	HX_STACK_THIS(this)
HXLINE( 115)		::String _hx_tmp;
HXDLIN( 115)		Bool _hx_tmp1 = hx::IsNull( this->dir );
HXDLIN( 115)		if (_hx_tmp1) {
HXLINE( 115)			_hx_tmp = HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 115)			::String _hx_tmp2;
HXDLIN( 115)			if (this->backslash) {
HXLINE( 115)				_hx_tmp2 = HX_("\\",5c,00,00,00);
            			}
            			else {
HXLINE( 115)				_hx_tmp2 = HX_("/",2f,00,00,00);
            			}
HXDLIN( 115)			_hx_tmp = (this->dir + _hx_tmp2);
            		}
HXDLIN( 115)		::String _hx_tmp3 = (_hx_tmp + this->file);
HXDLIN( 115)		::String _hx_tmp4;
HXDLIN( 115)		Bool _hx_tmp5 = hx::IsNull( this->ext );
HXDLIN( 115)		if (_hx_tmp5) {
HXLINE( 115)			_hx_tmp4 = HX_("",00,00,00,00);
            		}
            		else {
HXLINE( 115)			_hx_tmp4 = (HX_(".",2e,00,00,00) + this->ext);
            		}
HXDLIN( 115)		return (_hx_tmp3 + _hx_tmp4);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Path_obj,toString,return )

::String Path_obj::withoutDirectory(::String path){
            	HX_STACK_FRAME("haxe.io.Path","withoutDirectory",0xdf35ce8e,"haxe.io.Path.withoutDirectory","/usr/local/lib/haxe/std/haxe/io/Path.hx",134,0xc99b0f1c)
            	HX_STACK_ARG(path,"path")
HXLINE( 135)		HX_VARI(  ::haxe::io::Path,s) =  ::haxe::io::Path_obj::__new(path);
HXLINE( 136)		s->dir = null();
HXLINE( 137)		return s->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,withoutDirectory,return )

::String Path_obj::directory(::String path){
            	HX_STACK_FRAME("haxe.io.Path","directory",0xbcfe23c4,"haxe.io.Path.directory","/usr/local/lib/haxe/std/haxe/io/Path.hx",147,0xc99b0f1c)
            	HX_STACK_ARG(path,"path")
HXLINE( 148)		HX_VARI(  ::haxe::io::Path,s) =  ::haxe::io::Path_obj::__new(path);
HXLINE( 149)		Bool _hx_tmp = hx::IsNull( s->dir );
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 150)			return HX_("",00,00,00,00);
            		}
HXLINE( 151)		return s->dir;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,directory,return )

::String Path_obj::extension(::String path){
            	HX_STACK_FRAME("haxe.io.Path","extension",0x91c9c4d6,"haxe.io.Path.extension","/usr/local/lib/haxe/std/haxe/io/Path.hx",161,0xc99b0f1c)
            	HX_STACK_ARG(path,"path")
HXLINE( 162)		HX_VARI(  ::haxe::io::Path,s) =  ::haxe::io::Path_obj::__new(path);
HXLINE( 163)		Bool _hx_tmp = hx::IsNull( s->ext );
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 164)			return HX_("",00,00,00,00);
            		}
HXLINE( 165)		return s->ext;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,extension,return )

::String Path_obj::addTrailingSlash(::String path){
            	HX_STACK_FRAME("haxe.io.Path","addTrailingSlash",0x8b4f8e69,"haxe.io.Path.addTrailingSlash","/usr/local/lib/haxe/std/haxe/io/Path.hx",262,0xc99b0f1c)
            	HX_STACK_ARG(path,"path")
HXLINE( 263)		if ((path.length == (int)0)) {
HXLINE( 264)			return HX_("/",2f,00,00,00);
            		}
HXLINE( 265)		HX_VARI( Int,c1) = path.lastIndexOf(HX_("/",2f,00,00,00),null());
HXLINE( 266)		HX_VARI( Int,c2) = path.lastIndexOf(HX_("\\",5c,00,00,00),null());
HXLINE( 267)		if ((c1 < c2)) {
HXLINE( 268)			if ((c2 != (path.length - (int)1))) {
HXLINE( 267)				return (path + HX_("\\",5c,00,00,00));
            			}
            			else {
HXLINE( 267)				return path;
            			}
            		}
            		else {
HXLINE( 271)			if ((c1 != (path.length - (int)1))) {
HXLINE( 267)				return (path + HX_("/",2f,00,00,00));
            			}
            			else {
HXLINE( 267)				return path;
            			}
            		}
HXDLIN( 267)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,addTrailingSlash,return )

::String Path_obj::removeTrailingSlashes(::String path){
            	HX_STACK_FRAME("haxe.io.Path","removeTrailingSlashes",0x2dc73462,"haxe.io.Path.removeTrailingSlashes","/usr/local/lib/haxe/std/haxe/io/Path.hx",287,0xc99b0f1c)
            	HX_STACK_ARG(path,"path")
HXLINE( 288)		while(true){
HXLINE( 289)			Int _hx_tmp = (path.length - (int)1);
HXDLIN( 289)			HX_VARI(  ::Dynamic,_g) = path.charCodeAt(_hx_tmp);
HXDLIN( 289)			Bool _hx_tmp1 = hx::IsNull( _g );
HXDLIN( 289)			if (_hx_tmp1) {
HXLINE( 291)				goto _hx_goto_1;
            			}
            			else {
HXLINE( 289)				 ::Dynamic _hx_switch_0 = _g;
            				if (  (_hx_switch_0==(int)47) ||  (_hx_switch_0==(int)92) ){
HXLINE( 290)					path = path.substr((int)0,(int)-1);
HXDLIN( 290)					goto _hx_goto_2;
            				}
            				/* default */{
HXLINE( 291)					goto _hx_goto_1;
            				}
            				_hx_goto_2:;
            			}
            		}
            		_hx_goto_1:;
HXLINE( 294)		return path;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,removeTrailingSlashes,return )


Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_MEMBER_NAME(backslash,"backslash");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(ext,"ext");
	HX_VISIT_MEMBER_NAME(backslash,"backslash");
}

hx::Val Path_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return hx::Val( dir); }
		if (HX_FIELD_EQ(inName,"ext") ) { return hx::Val( ext); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return hx::Val( file); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { return hx::Val( backslash); }
	}
	return super::__Field(inName,inCallProp);
}

bool Path_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { outValue = directory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"extension") ) { outValue = extension_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"withoutDirectory") ) { outValue = withoutDirectory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addTrailingSlash") ) { outValue = addTrailingSlash_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"removeTrailingSlashes") ) { outValue = removeTrailingSlashes_dyn(); return true; }
	}
	return false;
}

hx::Val Path_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"));
	outFields->push(HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"));
	outFields->push(HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Path_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Path_obj,dir),HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")},
	{hx::fsString,(int)offsetof(Path_obj,file),HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsString,(int)offsetof(Path_obj,ext),HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00")},
	{hx::fsBool,(int)offsetof(Path_obj,backslash),HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Path_obj_sStaticStorageInfo = 0;
#endif

static ::String Path_obj_sMemberFields[] = {
	HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("ext","\xa1","\x0c","\x4d","\x00"),
	HX_HCSTRING("backslash","\xb6","\xb8","\x45","\xc8"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void Path_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Path_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#endif

hx::Class Path_obj::__mClass;

static ::String Path_obj_sStaticFields[] = {
	HX_HCSTRING("withoutDirectory","\x05","\x17","\xd2","\x7a"),
	HX_HCSTRING("directory","\x6d","\xf2","\x44","\x10"),
	HX_HCSTRING("extension","\x7f","\x93","\x10","\xe5"),
	HX_HCSTRING("addTrailingSlash","\xe0","\xd6","\xeb","\x26"),
	HX_HCSTRING("removeTrailingSlashes","\x8b","\xdc","\x1d","\x43"),
	::String(null())
};

void Path_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Path","\x05","\xcf","\xc6","\x4e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Path_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Path_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Path_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Path_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Path_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Path_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Path_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Path_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io