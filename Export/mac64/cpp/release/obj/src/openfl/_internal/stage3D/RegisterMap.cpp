// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_RegisterMap
#include <openfl/_internal/stage3D/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#include <openfl/_internal/stage3D/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry
#include <openfl/_internal/stage3D/_AGALConverter/RegisterMapEntry.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#include <openfl/_internal/stage3D/_AGALConverter/RegisterUsage.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerRegister
#include <openfl/_internal/stage3D/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceRegister
#include <openfl/_internal/stage3D/_AGALConverter/SourceRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

namespace openfl{
namespace _internal{
namespace stage3D{

void RegisterMap_obj::__construct(){
            	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","new",0xb81e399c,"openfl._internal.stage3D.RegisterMap.new","openfl/_internal/stage3D/AGALConverter.hx",560,0x0a35cc61)
            	HX_STACK_THIS(this)
HXLINE( 560)		this->mEntries = ::Array_obj< ::Dynamic>::__new();
            	}

Dynamic RegisterMap_obj::__CreateEmpty() { return new RegisterMap_obj; }

hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__new()
{
	hx::ObjectPtr< RegisterMap_obj > _hx_result = new RegisterMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic RegisterMap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RegisterMap_obj > _hx_result = new RegisterMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

void RegisterMap_obj::add(Int type,::String name,Int number,::hx::EnumBase usage){
            	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","add",0xb8145b5d,"openfl._internal.stage3D.RegisterMap.add","openfl/_internal/stage3D/AGALConverter.hx",570,0x0a35cc61)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(number,"number")
            	HX_STACK_ARG(usage,"usage")
HXLINE( 572)		{
HXLINE( 572)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 572)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->mEntries;
HXDLIN( 572)			while((_g < _g1->length)){
HXLINE( 572)				HX_VARI(  ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry,entry) = _g1->__get(_g).StaticCast<  ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();
HXDLIN( 572)				++_g;
HXLINE( 574)				Bool _hx_tmp;
HXDLIN( 574)				Bool _hx_tmp1;
HXDLIN( 574)				if ((entry->type == type)) {
HXLINE( 574)					_hx_tmp1 = (entry->name == name);
            				}
            				else {
HXLINE( 574)					_hx_tmp1 = false;
            				}
HXDLIN( 574)				if (_hx_tmp1) {
HXLINE( 574)					_hx_tmp = (entry->number == number);
            				}
            				else {
HXLINE( 574)					_hx_tmp = false;
            				}
HXDLIN( 574)				if (_hx_tmp) {
HXLINE( 576)					if (hx::IsNotEq( entry->usage,usage )) {
HXLINE( 578)						HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__new(HX_("Cannot use register in multiple ways yet (mat4/vec4)",5e,30,e0,74)));
            					}
HXLINE( 582)					return;
            				}
            			}
            		}
HXLINE( 588)		HX_VARI_NAME(  ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry,entry1,"entry") =  ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry_obj::__new();
HXLINE( 589)		entry1->type = type;
HXLINE( 590)		entry1->name = name;
HXLINE( 591)		entry1->number = number;
HXLINE( 592)		entry1->usage = usage;
HXLINE( 593)		this->mEntries->push(entry1);
            	}


HX_DEFINE_DYNAMIC_FUNC4(RegisterMap_obj,add,(void))

void RegisterMap_obj::addDR( ::openfl::_internal::stage3D::_AGALConverter::DestRegister dr,::hx::EnumBase usage){
            	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","addDR",0x2a67e82b,"openfl._internal.stage3D.RegisterMap.addDR","openfl/_internal/stage3D/AGALConverter.hx",600,0x0a35cc61)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(dr,"dr")
            	HX_STACK_ARG(usage,"usage")
HXLINE( 600)		Int _hx_tmp = dr->type;
HXDLIN( 600)		::String _hx_tmp1 = dr->toGLSL(false);
HXDLIN( 600)		this->add(_hx_tmp,_hx_tmp1,dr->n,usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addDR,(void))

void RegisterMap_obj::addSaR( ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister sr,::hx::EnumBase usage){
            	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","addSaR",0xf08eaca7,"openfl._internal.stage3D.RegisterMap.addSaR","openfl/_internal/stage3D/AGALConverter.hx",607,0x0a35cc61)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sr,"sr")
            	HX_STACK_ARG(usage,"usage")
HXLINE( 607)		Int _hx_tmp = sr->type;
HXDLIN( 607)		::String _hx_tmp1 = sr->toGLSL();
HXDLIN( 607)		this->add(_hx_tmp,_hx_tmp1,sr->n,usage);
            	}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,addSaR,(void))

void RegisterMap_obj::addSR( ::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr,::hx::EnumBase usage,hx::Null< Int >  __o_offset){
Int offset = __o_offset.Default(0);
            	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","addSR",0x2a67f53c,"openfl._internal.stage3D.RegisterMap.addSR","openfl/_internal/stage3D/AGALConverter.hx",612,0x0a35cc61)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sr,"sr")
            	HX_STACK_ARG(usage,"usage")
            	HX_STACK_ARG(offset,"offset")
HXLINE( 614)		Bool _hx_tmp = (sr->d != (int)0);
HXDLIN( 614)		if (_hx_tmp) {
HXLINE( 616)			Int _hx_tmp1 = sr->itype;
HXDLIN( 616)			::String _hx_tmp2 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(sr->itype,sr->programType);
HXDLIN( 616)			::String _hx_tmp3 = (_hx_tmp2 + sr->n);
HXDLIN( 616)			this->add(_hx_tmp1,_hx_tmp3,sr->n,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_dyn());
HXLINE( 617)			Int _hx_tmp4 = sr->type;
HXDLIN( 617)			::String _hx_tmp5 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(sr->type,sr->programType);
HXDLIN( 617)			::String _hx_tmp6 = (_hx_tmp5 + sr->o);
HXDLIN( 617)			this->add(_hx_tmp4,_hx_tmp6,sr->o,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn());
HXLINE( 618)			return;
            		}
HXLINE( 622)		Int _hx_tmp7 = sr->type;
HXDLIN( 622)		::String _hx_tmp8 = sr->toGLSL(false,offset);
HXDLIN( 622)		Int _hx_tmp9 = (sr->n + offset);
HXDLIN( 622)		this->add(_hx_tmp7,_hx_tmp8,_hx_tmp9,usage);
            	}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,addSR,(void))

::hx::EnumBase RegisterMap_obj::getRegisterUsage( ::openfl::_internal::stage3D::_AGALConverter::SourceRegister sr){
            	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","getRegisterUsage",0x73804a8c,"openfl._internal.stage3D.RegisterMap.getRegisterUsage","openfl/_internal/stage3D/AGALConverter.hx",627,0x0a35cc61)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sr,"sr")
HXLINE( 629)		if ((sr->d != (int)0)) {
HXLINE( 631)			return ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn();
            		}
HXLINE( 635)		Int _hx_tmp = sr->type;
HXDLIN( 635)		::String _hx_tmp1 = sr->toGLSL(false,null());
HXDLIN( 635)		return this->getUsage(_hx_tmp,_hx_tmp1,sr->n);
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,getRegisterUsage,return )

::hx::EnumBase RegisterMap_obj::getUsage(Int type,::String name,Int number){
            	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","getUsage",0x4c4909ef,"openfl._internal.stage3D.RegisterMap.getUsage","openfl/_internal/stage3D/AGALConverter.hx",640,0x0a35cc61)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(number,"number")
HXLINE( 642)		{
HXLINE( 642)			HX_VARI( Int,_g) = (int)0;
HXDLIN( 642)			HX_VARI( ::Array< ::Dynamic>,_g1) = this->mEntries;
HXDLIN( 642)			while((_g < _g1->length)){
HXLINE( 642)				HX_VARI(  ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry,entry) = _g1->__get(_g).StaticCast<  ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();
HXDLIN( 642)				++_g;
HXLINE( 644)				Bool _hx_tmp;
HXDLIN( 644)				Bool _hx_tmp1;
HXDLIN( 644)				if ((entry->type == type)) {
HXLINE( 644)					_hx_tmp1 = (entry->name == name);
            				}
            				else {
HXLINE( 644)					_hx_tmp1 = false;
            				}
HXDLIN( 644)				if (_hx_tmp1) {
HXLINE( 644)					_hx_tmp = (entry->number == number);
            				}
            				else {
HXLINE( 644)					_hx_tmp = false;
            				}
HXDLIN( 644)				if (_hx_tmp) {
HXLINE( 646)					return entry->usage;
            				}
            			}
            		}
HXLINE( 652)		return ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::UNUSED_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,getUsage,return )

::String RegisterMap_obj::toGLSL(Bool tempRegistersOnly){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		Int _hx_run( ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry a, ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry b){
            			HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","toGLSL",0xcb8e5d3d,"openfl._internal.stage3D.RegisterMap.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",661,0x0a35cc61)
            			HX_STACK_ARG(a,"a")
            			HX_STACK_ARG(b,"b")
HXLINE( 661)			if ((a->type != b->type)) {
HXLINE( 663)				return (a->type - b->type);
            			}
            			else {
HXLINE( 667)				return (a->number - b->number);
            			}
HXLINE( 661)			return (int)0;
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","toGLSL",0xcb8e5d3d,"openfl._internal.stage3D.RegisterMap.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",657,0x0a35cc61)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(tempRegistersOnly,"tempRegistersOnly")
HXLINE( 659)		this->mEntries->sort( ::Dynamic(new _hx_Closure_0()));
HXLINE( 673)		HX_VARI(  ::StringBuf,sb) =  ::StringBuf_obj::__new();
HXLINE( 675)		{
HXLINE( 675)			HX_VARI( Int,_g1) = (int)0;
HXDLIN( 675)			HX_VARI( Int,_g) = this->mEntries->length;
HXDLIN( 675)			while((_g1 < _g)){
HXLINE( 675)				HX_VARI( Int,i) = _g1++;
HXLINE( 677)				HX_VARI(  ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry,entry) = this->mEntries->__get(i).StaticCast<  ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();
HXLINE( 681)				Bool _hx_tmp;
HXDLIN( 681)				Bool _hx_tmp1;
HXDLIN( 681)				if (tempRegistersOnly) {
HXLINE( 681)					_hx_tmp1 = (entry->type != (int)2);
            				}
            				else {
HXLINE( 681)					_hx_tmp1 = false;
            				}
HXDLIN( 681)				if (!(_hx_tmp1)) {
HXLINE( 681)					if (!(tempRegistersOnly)) {
HXLINE( 681)						_hx_tmp = (entry->type == (int)2);
            					}
            					else {
HXLINE( 681)						_hx_tmp = false;
            					}
            				}
            				else {
HXLINE( 681)					_hx_tmp = true;
            				}
HXDLIN( 681)				if (_hx_tmp) {
HXLINE( 683)					continue;
            				}
HXLINE( 688)				if ((entry->type == (int)3)) {
HXLINE( 690)					continue;
            				}
HXLINE( 694)				{
HXLINE( 694)					HX_VARI( Int,_g2) = entry->type;
HXDLIN( 694)					switch((int)(_g2)){
            						case (int)0: {
HXLINE( 699)							Bool _hx_tmp2 = hx::IsNotNull( sb->charBuf );
HXDLIN( 699)							if (_hx_tmp2) {
HXLINE( 699)								sb->flush();
            							}
HXDLIN( 699)							sb->b->push(HX_("attribute ",84,a8,71,97));
            						}
            						break;
            						case (int)1: {
HXLINE( 704)							Bool _hx_tmp3 = hx::IsNotNull( sb->charBuf );
HXDLIN( 704)							if (_hx_tmp3) {
HXLINE( 704)								sb->flush();
            							}
HXDLIN( 704)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            						break;
            						case (int)2: {
HXLINE( 708)							Bool _hx_tmp4 = hx::IsNotNull( sb->charBuf );
HXDLIN( 708)							if (_hx_tmp4) {
HXLINE( 708)								sb->flush();
            							}
HXDLIN( 708)							sb->b->push(HX_("\t",09,00,00,00));
            						}
            						break;
            						case (int)3: {
            						}
            						break;
            						case (int)4: {
HXLINE( 714)							Bool _hx_tmp5 = hx::IsNotNull( sb->charBuf );
HXDLIN( 714)							if (_hx_tmp5) {
HXLINE( 714)								sb->flush();
            							}
HXDLIN( 714)							sb->b->push(HX_("varying ",b0,25,c9,a4));
            						}
            						break;
            						case (int)5: {
HXLINE( 718)							Bool _hx_tmp6 = hx::IsNotNull( sb->charBuf );
HXDLIN( 718)							if (_hx_tmp6) {
HXLINE( 718)								sb->flush();
            							}
HXDLIN( 718)							sb->b->push(HX_("uniform ",6c,cc,54,02));
            						}
            						break;
            						default:{
HXLINE( 722)							HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__new(null()));
            						}
            					}
            				}
HXLINE( 726)				{
HXLINE( 726)					Int _hx_tmp7 = ( ( ::hx::EnumBase)(entry->usage) )->_hx_getIndex();
HXDLIN( 726)					switch((int)(_hx_tmp7)){
            						case (int)0: {
HXLINE( 750)							::haxe::Log_obj::trace(HX_("Missing switch patten: RegisterUsage.UNUSED",38,09,f6,02),hx::SourceInfo(HX_("AGALConverter.hx",8f,36,cd,e2),750,HX_("openfl._internal.stage3D.RegisterMap",aa,7b,ea,b0),HX_("toGLSL",f9,58,08,7a)));
            						}
            						break;
            						case (int)1: {
HXLINE( 730)							Bool _hx_tmp8 = hx::IsNotNull( sb->charBuf );
HXDLIN( 730)							if (_hx_tmp8) {
HXLINE( 730)								sb->flush();
            							}
HXDLIN( 730)							sb->b->push(HX_("vec4 ",c0,4c,56,34));
            						}
            						break;
            						case (int)2: {
HXLINE( 738)							Bool _hx_tmp9 = hx::IsNotNull( sb->charBuf );
HXDLIN( 738)							if (_hx_tmp9) {
HXLINE( 738)								sb->flush();
            							}
HXDLIN( 738)							sb->b->push(HX_("mat4 ",0c,20,23,03));
            						}
            						break;
            						case (int)3: {
HXLINE( 742)							Bool _hx_tmp10 = hx::IsNotNull( sb->charBuf );
HXDLIN( 742)							if (_hx_tmp10) {
HXLINE( 742)								sb->flush();
            							}
HXDLIN( 742)							sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            						}
            						break;
            						case (int)4: {
HXLINE( 754)							::haxe::Log_obj::trace(HX_("Missing switch patten: RegisterUsage.SAMPLER_2D_ALPHA",ea,ff,93,8e),hx::SourceInfo(HX_("AGALConverter.hx",8f,36,cd,e2),754,HX_("openfl._internal.stage3D.RegisterMap",aa,7b,ea,b0),HX_("toGLSL",f9,58,08,7a)));
            						}
            						break;
            						case (int)5: {
HXLINE( 746)							Bool _hx_tmp11 = hx::IsNotNull( sb->charBuf );
HXDLIN( 746)							if (_hx_tmp11) {
HXLINE( 746)								sb->flush();
            							}
HXDLIN( 746)							sb->b->push(HX_("samplerCube ",63,87,00,86));
            						}
            						break;
            						case (int)6: {
HXLINE( 734)							Bool _hx_tmp12 = hx::IsNotNull( sb->charBuf );
HXDLIN( 734)							if (_hx_tmp12) {
HXLINE( 734)								sb->flush();
            							}
HXDLIN( 734)							sb->b->push(HX_("vec4 ",c0,4c,56,34));
            						}
            						break;
            					}
            				}
HXLINE( 758)				if (hx::IsEq( entry->usage,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::SAMPLER_2D_ALPHA_dyn() )) {
HXLINE( 760)					{
HXLINE( 760)						Bool _hx_tmp13 = hx::IsNotNull( sb->charBuf );
HXDLIN( 760)						if (_hx_tmp13) {
HXLINE( 760)							sb->flush();
            						}
HXDLIN( 760)						sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            					}
HXLINE( 761)					{
HXLINE( 761)						Bool _hx_tmp14 = hx::IsNotNull( sb->charBuf );
HXDLIN( 761)						if (_hx_tmp14) {
HXLINE( 761)							sb->flush();
            						}
HXDLIN( 761)						::String _hx_tmp15 = ::Std_obj::string(entry->name);
HXDLIN( 761)						sb->b->push(_hx_tmp15);
            					}
HXLINE( 762)					{
HXLINE( 762)						Bool _hx_tmp16 = hx::IsNotNull( sb->charBuf );
HXDLIN( 762)						if (_hx_tmp16) {
HXLINE( 762)							sb->flush();
            						}
HXDLIN( 762)						sb->b->push(HX_(";\n",6f,33,00,00));
            					}
HXLINE( 764)					{
HXLINE( 764)						Bool _hx_tmp17 = hx::IsNotNull( sb->charBuf );
HXDLIN( 764)						if (_hx_tmp17) {
HXLINE( 764)							sb->flush();
            						}
HXDLIN( 764)						sb->b->push(HX_("uniform ",6c,cc,54,02));
            					}
HXLINE( 765)					{
HXLINE( 765)						Bool _hx_tmp18 = hx::IsNotNull( sb->charBuf );
HXDLIN( 765)						if (_hx_tmp18) {
HXLINE( 765)							sb->flush();
            						}
HXDLIN( 765)						sb->b->push(HX_("sampler2D ",06,3c,4f,7c));
            					}
HXLINE( 766)					{
HXLINE( 766)						Bool _hx_tmp19 = hx::IsNotNull( sb->charBuf );
HXDLIN( 766)						if (_hx_tmp19) {
HXLINE( 766)							sb->flush();
            						}
HXDLIN( 766)						::String _hx_tmp20 = ::Std_obj::string((entry->name + HX_("_alpha",9f,ee,7d,1d)));
HXDLIN( 766)						sb->b->push(_hx_tmp20);
            					}
HXLINE( 767)					{
HXLINE( 767)						Bool _hx_tmp21 = hx::IsNotNull( sb->charBuf );
HXDLIN( 767)						if (_hx_tmp21) {
HXLINE( 767)							sb->flush();
            						}
HXDLIN( 767)						sb->b->push(HX_(";\n",6f,33,00,00));
            					}
            				}
            				else {
HXLINE( 769)					if (hx::IsEq( entry->usage,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::VECTOR_4_ARRAY_dyn() )) {
HXLINE( 771)						HX_VARI( Int,count) = (int)128;
HXLINE( 774)						if ((i < (this->mEntries->length - (int)1))) {
HXLINE( 776)							count = (this->mEntries->__get((i + (int)1)).StaticCast<  ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >()->number - entry->number);
            						}
HXLINE( 780)						{
HXLINE( 780)							Bool _hx_tmp22 = hx::IsNotNull( sb->charBuf );
HXDLIN( 780)							if (_hx_tmp22) {
HXLINE( 780)								sb->flush();
            							}
HXDLIN( 780)							::String _hx_tmp23 = ::Std_obj::string((((entry->name + HX_("[",5b,00,00,00)) + count) + HX_("]",5d,00,00,00)));
HXDLIN( 780)							sb->b->push(_hx_tmp23);
            						}
HXLINE( 781)						{
HXLINE( 781)							Bool _hx_tmp24 = hx::IsNotNull( sb->charBuf );
HXDLIN( 781)							if (_hx_tmp24) {
HXLINE( 781)								sb->flush();
            							}
HXDLIN( 781)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
            					else {
HXLINE( 785)						{
HXLINE( 785)							Bool _hx_tmp25 = hx::IsNotNull( sb->charBuf );
HXDLIN( 785)							if (_hx_tmp25) {
HXLINE( 785)								sb->flush();
            							}
HXDLIN( 785)							::String _hx_tmp26 = ::Std_obj::string(entry->name);
HXDLIN( 785)							sb->b->push(_hx_tmp26);
            						}
HXLINE( 786)						{
HXLINE( 786)							Bool _hx_tmp27 = hx::IsNotNull( sb->charBuf );
HXDLIN( 786)							if (_hx_tmp27) {
HXLINE( 786)								sb->flush();
            							}
HXDLIN( 786)							sb->b->push(HX_(";\n",6f,33,00,00));
            						}
            					}
            				}
            			}
            		}
HXLINE( 792)		Bool _hx_tmp28 = hx::IsNotNull( sb->charBuf );
HXDLIN( 792)		if (_hx_tmp28) {
HXLINE( 792)			sb->flush();
            		}
HXDLIN( 792)		return sb->b->join(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,toGLSL,return )


RegisterMap_obj::RegisterMap_obj()
{
}

void RegisterMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterMap);
	HX_MARK_MEMBER_NAME(mEntries,"mEntries");
	HX_MARK_END_CLASS();
}

void RegisterMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mEntries,"mEntries");
}

hx::Val RegisterMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"addDR") ) { return hx::Val( addDR_dyn()); }
		if (HX_FIELD_EQ(inName,"addSR") ) { return hx::Val( addSR_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"addSaR") ) { return hx::Val( addSaR_dyn()); }
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return hx::Val( toGLSL_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { return hx::Val( mEntries); }
		if (HX_FIELD_EQ(inName,"getUsage") ) { return hx::Val( getUsage_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getRegisterUsage") ) { return hx::Val( getRegisterUsage_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RegisterMap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { mEntries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RegisterMap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RegisterMap_obj,mEntries),HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RegisterMap_obj_sStaticStorageInfo = 0;
#endif

static ::String RegisterMap_obj_sMemberFields[] = {
	HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addDR","\xef","\xb7","\x43","\x1c"),
	HX_HCSTRING("addSaR","\x63","\xa8","\x08","\x9f"),
	HX_HCSTRING("addSR","\x00","\xc5","\x43","\x1c"),
	HX_HCSTRING("getRegisterUsage","\x48","\xc9","\xb8","\x09"),
	HX_HCSTRING("getUsage","\xab","\x6c","\x06","\x0a"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	::String(null()) };

static void RegisterMap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RegisterMap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterMap_obj::__mClass,"__mClass");
};

#endif

hx::Class RegisterMap_obj::__mClass;

void RegisterMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RegisterMap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RegisterMap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RegisterMap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RegisterMap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RegisterMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RegisterMap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
