// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "cpp/Int64.h"
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister
#include <openfl/_internal/stage3D/_AGALConverter/SourceRegister.h>
#endif

namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

void SourceRegister_obj::__construct(){
            	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SourceRegister","new",0xf72124df,"openfl._internal.stage3D._AGALConverter.SourceRegister.new","openfl/_internal/stage3D/AGALConverter.hx",977,0x0a35cc61)
            	HX_STACK_THIS(this)
            	}

Dynamic SourceRegister_obj::__CreateEmpty() { return new SourceRegister_obj; }

hx::ObjectPtr< SourceRegister_obj > SourceRegister_obj::__new()
{
	hx::ObjectPtr< SourceRegister_obj > _hx_result = new SourceRegister_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic SourceRegister_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SourceRegister_obj > _hx_result = new SourceRegister_obj();
	_hx_result->__construct();
	return _hx_result;
}

::String SourceRegister_obj::toGLSL(hx::Null< Bool >  __o_emitSwizzle,hx::Null< Int >  __o_offset){
Bool emitSwizzle = __o_emitSwizzle.Default(true);
Int offset = __o_offset.Default(0);
            	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SourceRegister","toGLSL",0xdb399dda,"openfl._internal.stage3D._AGALConverter.SourceRegister.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",1001,0x0a35cc61)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(emitSwizzle,"emitSwizzle")
            	HX_STACK_ARG(offset,"offset")
HXLINE(1003)		if ((this->type == (int)3)) {
HXLINE(1005)			if (hx::IsEq( this->programType,::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE(1005)				return HX_("gl_Position",63,0d,2a,e5);
            			}
            			else {
HXLINE(1005)				return HX_("gl_FragColor",d7,68,e4,21);
            			}
            		}
HXLINE(1009)		HX_VAR( Bool,fullxyzw);
HXDLIN(1009)		if ((this->s == (int)228)) {
HXLINE(1009)			fullxyzw = (this->sourceMask == (int)15);
            		}
            		else {
HXLINE(1009)			fullxyzw = false;
            		}
HXLINE(1010)		HX_VARI( ::String,swizzle) = HX_("",00,00,00,00);
HXLINE(1012)		Bool _hx_tmp;
HXDLIN(1012)		if ((this->type != (int)5)) {
HXLINE(1012)			_hx_tmp = !(fullxyzw);
            		}
            		else {
HXLINE(1012)			_hx_tmp = false;
            		}
HXDLIN(1012)		if (_hx_tmp) {
HXLINE(1014)			HX_VARI( Int,_g) = (int)0;
HXDLIN(1014)			while((_g < (int)4)){
HXLINE(1014)				HX_VARI( Int,i) = _g++;
HXLINE(1017)				if ((((int)this->sourceMask & (int)((int)(int)1 << (int)i)) != (int)0)) {
HXLINE(1019)					switch((int)(((int)((int)this->s >> (int)(i * (int)2)) & (int)(int)3))){
            						case (int)0: {
HXLINE(1021)							hx::AddEq(swizzle,HX_("x",78,00,00,00));
            						}
            						break;
            						case (int)1: {
HXLINE(1022)							hx::AddEq(swizzle,HX_("y",79,00,00,00));
            						}
            						break;
            						case (int)2: {
HXLINE(1023)							hx::AddEq(swizzle,HX_("z",7a,00,00,00));
            						}
            						break;
            						case (int)3: {
HXLINE(1024)							hx::AddEq(swizzle,HX_("w",77,00,00,00));
            						}
            						break;
            					}
            				}
            			}
            		}
HXLINE(1034)		HX_VARI( ::String,str) = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(this->type,this->programType);
HXLINE(1036)		Bool _hx_tmp1 = (this->d == (int)0);
HXDLIN(1036)		if (_hx_tmp1) {
HXLINE(1039)			hx::AddEq(str,(this->n + offset));
            		}
            		else {
HXLINE(1044)			hx::AddEq(str,this->o);
HXLINE(1045)			 ::Dynamic _hx_tmp2 = HX_("x",78,00,00,00).charCodeAt((int)0);
HXDLIN(1045)			HX_VARI( ::String,indexComponent) = ::String::fromCharCode((_hx_tmp2 + this->q));
HXLINE(1046)			::String _hx_tmp3 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(this->itype,this->programType);
HXLINE(1047)			hx::AddEq(str,((((HX_("[ int(",3e,aa,07,15) + (((_hx_tmp3 + this->n) + HX_(".",2e,00,00,00)) + indexComponent)) + HX_(") +",74,38,1f,00)) + offset) + HX_("]",5d,00,00,00)));
            		}
HXLINE(1051)		Bool _hx_tmp4;
HXDLIN(1051)		if (emitSwizzle) {
HXLINE(1051)			_hx_tmp4 = (swizzle != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(1051)			_hx_tmp4 = false;
            		}
HXDLIN(1051)		if (_hx_tmp4) {
HXLINE(1053)			hx::AddEq(str,(HX_(".",2e,00,00,00) + swizzle));
            		}
HXLINE(1057)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC2(SourceRegister_obj,toGLSL,return )

 ::openfl::_internal::stage3D::_AGALConverter::SourceRegister SourceRegister_obj::parse( ::cpp::Int64Struct v,::hx::EnumBase programType,Int sourceMask){
            	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SourceRegister","parse",0x01804272,"openfl._internal.stage3D._AGALConverter.SourceRegister.parse","openfl/_internal/stage3D/AGALConverter.hx",984,0x0a35cc61)
            	HX_STACK_ARG(v,"v")
            	HX_STACK_ARG(programType,"programType")
            	HX_STACK_ARG(sourceMask,"sourceMask")
HXLINE( 986)		HX_VARI(  ::openfl::_internal::stage3D::_AGALConverter::SourceRegister,sr) =  ::openfl::_internal::stage3D::_AGALConverter::SourceRegister_obj::__new();
HXLINE( 987)		sr->programType = programType;
HXLINE( 988)		 ::cpp::Int64Struct a = _hx_int64_shr(v,(int)63);
HXDLIN( 988)		 ::cpp::Int64Struct b = ( ::cpp::Int64Struct((int)1));
HXDLIN( 988)		 ::cpp::Int64Struct this1 = _hx_int64_and(a,b);
HXDLIN( 988)		Int _hx_tmp = _hx_int64_low(this1);
HXDLIN( 988)		sr->d = _hx_tmp;
HXLINE( 989)		 ::cpp::Int64Struct a1 = _hx_int64_shr(v,(int)48);
HXDLIN( 989)		 ::cpp::Int64Struct b1 = ( ::cpp::Int64Struct((int)3));
HXDLIN( 989)		 ::cpp::Int64Struct this2 = _hx_int64_and(a1,b1);
HXDLIN( 989)		Int _hx_tmp1 = _hx_int64_low(this2);
HXDLIN( 989)		sr->q = _hx_tmp1;
HXLINE( 990)		 ::cpp::Int64Struct a2 = _hx_int64_shr(v,(int)40);
HXDLIN( 990)		 ::cpp::Int64Struct b2 = ( ::cpp::Int64Struct((int)15));
HXDLIN( 990)		 ::cpp::Int64Struct this3 = _hx_int64_and(a2,b2);
HXDLIN( 990)		Int _hx_tmp2 = _hx_int64_low(this3);
HXDLIN( 990)		sr->itype = _hx_tmp2;
HXLINE( 991)		 ::cpp::Int64Struct a3 = _hx_int64_shr(v,(int)32);
HXDLIN( 991)		 ::cpp::Int64Struct b3 = ( ::cpp::Int64Struct((int)15));
HXDLIN( 991)		 ::cpp::Int64Struct this4 = _hx_int64_and(a3,b3);
HXDLIN( 991)		Int _hx_tmp3 = _hx_int64_low(this4);
HXDLIN( 991)		sr->type = _hx_tmp3;
HXLINE( 992)		 ::cpp::Int64Struct a4 = _hx_int64_shr(v,(int)24);
HXDLIN( 992)		 ::cpp::Int64Struct b4 = ( ::cpp::Int64Struct((int)255));
HXDLIN( 992)		 ::cpp::Int64Struct this5 = _hx_int64_and(a4,b4);
HXDLIN( 992)		Int _hx_tmp4 = _hx_int64_low(this5);
HXDLIN( 992)		sr->s = _hx_tmp4;
HXLINE( 993)		 ::cpp::Int64Struct a5 = _hx_int64_shr(v,(int)16);
HXDLIN( 993)		 ::cpp::Int64Struct b5 = ( ::cpp::Int64Struct((int)255));
HXDLIN( 993)		 ::cpp::Int64Struct this6 = _hx_int64_and(a5,b5);
HXDLIN( 993)		Int _hx_tmp5 = _hx_int64_low(this6);
HXDLIN( 993)		sr->o = _hx_tmp5;
HXLINE( 994)		 ::cpp::Int64Struct b6 = ( ::cpp::Int64Struct((int)65535));
HXDLIN( 994)		 ::cpp::Int64Struct this7 = _hx_int64_and(v,b6);
HXDLIN( 994)		Int _hx_tmp6 = _hx_int64_low(this7);
HXDLIN( 994)		sr->n = _hx_tmp6;
HXLINE( 995)		sr->sourceMask = sourceMask;
HXLINE( 996)		return sr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SourceRegister_obj,parse,return )


SourceRegister_obj::SourceRegister_obj()
{
}

void SourceRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SourceRegister);
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(itype,"itype");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(sourceMask,"sourceMask");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void SourceRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(itype,"itype");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(sourceMask,"sourceMask");
	HX_VISIT_MEMBER_NAME(type,"type");
}

hx::Val SourceRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return hx::Val( d); }
		if (HX_FIELD_EQ(inName,"n") ) { return hx::Val( n); }
		if (HX_FIELD_EQ(inName,"o") ) { return hx::Val( o); }
		if (HX_FIELD_EQ(inName,"q") ) { return hx::Val( q); }
		if (HX_FIELD_EQ(inName,"s") ) { return hx::Val( s); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { return hx::Val( itype); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return hx::Val( toGLSL_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { return hx::Val( sourceMask); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return hx::Val( programType); }
	}
	return super::__Field(inName,inCallProp);
}

bool SourceRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

hx::Val SourceRegister_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< Int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { itype=inValue.Cast< Int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { sourceMask=inValue.Cast< Int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::hx::EnumBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SourceRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SourceRegister_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SourceRegister_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,itype),HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(SourceRegister_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,sourceMask),HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70")},
	{hx::fsInt,(int)offsetof(SourceRegister_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SourceRegister_obj_sStaticStorageInfo = 0;
#endif

static ::String SourceRegister_obj_sMemberFields[] = {
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	::String(null()) };

static void SourceRegister_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SourceRegister_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SourceRegister_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SourceRegister_obj::__mClass,"__mClass");
};

#endif

hx::Class SourceRegister_obj::__mClass;

static ::String SourceRegister_obj_sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null())
};

void SourceRegister_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.SourceRegister","\x6d","\xc9","\x9f","\xcf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SourceRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SourceRegister_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SourceRegister_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SourceRegister_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SourceRegister_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SourceRegister_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SourceRegister_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SourceRegister_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
