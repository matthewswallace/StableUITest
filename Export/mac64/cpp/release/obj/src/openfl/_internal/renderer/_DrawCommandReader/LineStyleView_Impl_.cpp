// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineStyleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/LineStyleView_Impl_.h>
#endif

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void LineStyleView_Impl__obj::__construct() { }

Dynamic LineStyleView_Impl__obj::__CreateEmpty() { return new LineStyleView_Impl__obj; }

hx::ObjectPtr< LineStyleView_Impl__obj > LineStyleView_Impl__obj::__new()
{
	hx::ObjectPtr< LineStyleView_Impl__obj > _hx_result = new LineStyleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic LineStyleView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LineStyleView_Impl__obj > _hx_result = new LineStyleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::openfl::_internal::renderer::DrawCommandReader LineStyleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","_new",0xa17a2c15,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",376,0xbbdbd1ae)
            	HX_STACK_ARG(d,"d")
HXLINE( 376)		return d;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,_new,return )

 ::Dynamic LineStyleView_Impl__obj::get_thickness( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_thickness",0xb0b93817,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_thickness","openfl/_internal/renderer/DrawCommandReader.hx",377,0xbbdbd1ae)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 377)		return this1->buffer->o->__get(this1->oPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_thickness,return )

Int LineStyleView_Impl__obj::get_color( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_color",0x93f7ea86,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_color","openfl/_internal/renderer/DrawCommandReader.hx",378,0xbbdbd1ae)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 378)		return this1->buffer->i->__get(this1->iPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_color,return )

Float LineStyleView_Impl__obj::get_alpha( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_alpha",0x6b322081,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_alpha","openfl/_internal/renderer/DrawCommandReader.hx",379,0xbbdbd1ae)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 379)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_alpha,return )

Bool LineStyleView_Impl__obj::get_pixelHinting( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_pixelHinting",0x0696dd12,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_pixelHinting","openfl/_internal/renderer/DrawCommandReader.hx",380,0xbbdbd1ae)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 380)		return this1->buffer->b->__get(this1->bPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_pixelHinting,return )

 ::Dynamic LineStyleView_Impl__obj::get_scaleMode( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_scaleMode",0x822621b0,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_scaleMode","openfl/_internal/renderer/DrawCommandReader.hx",381,0xbbdbd1ae)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 381)		return this1->buffer->o->__get((this1->oPos + (int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_scaleMode,return )

 ::Dynamic LineStyleView_Impl__obj::get_caps( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_caps",0x6233585e,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_caps","openfl/_internal/renderer/DrawCommandReader.hx",382,0xbbdbd1ae)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 382)		return this1->buffer->o->__get((this1->oPos + (int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_caps,return )

 ::Dynamic LineStyleView_Impl__obj::get_joints( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_joints",0xaf786d66,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_joints","openfl/_internal/renderer/DrawCommandReader.hx",383,0xbbdbd1ae)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 383)		return this1->buffer->o->__get((this1->oPos + (int)3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_joints,return )

Float LineStyleView_Impl__obj::get_miterLimit( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACK_FRAME("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","get_miterLimit",0x8615e4f3,"openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_.get_miterLimit","openfl/_internal/renderer/DrawCommandReader.hx",384,0xbbdbd1ae)
            	HX_STACK_ARG(this1,"this1")
HXLINE( 384)		return this1->buffer->f->__get((this1->fPos + (int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LineStyleView_Impl__obj,get_miterLimit,return )


LineStyleView_Impl__obj::LineStyleView_Impl__obj()
{
}

bool LineStyleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_caps") ) { outValue = get_caps_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_color") ) { outValue = get_color_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { outValue = get_alpha_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_joints") ) { outValue = get_joints_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_thickness") ) { outValue = get_thickness_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_scaleMode") ) { outValue = get_scaleMode_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_miterLimit") ) { outValue = get_miterLimit_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_pixelHinting") ) { outValue = get_pixelHinting_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *LineStyleView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *LineStyleView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void LineStyleView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineStyleView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LineStyleView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineStyleView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class LineStyleView_Impl__obj::__mClass;

static ::String LineStyleView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_thickness","\x4b","\xc5","\xca","\x1b"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("get_pixelHinting","\x5e","\x88","\x9a","\x71"),
	HX_HCSTRING("get_scaleMode","\xe4","\xae","\x37","\xed"),
	HX_HCSTRING("get_caps","\xaa","\xd7","\x74","\xc1"),
	HX_HCSTRING("get_joints","\xb2","\x57","\x91","\x81"),
	HX_HCSTRING("get_miterLimit","\x3f","\xe5","\x5f","\xca"),
	::String(null())
};

void LineStyleView_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.LineStyleView_Impl_","\x3a","\xc6","\x38","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LineStyleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LineStyleView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(LineStyleView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< LineStyleView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LineStyleView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LineStyleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LineStyleView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader