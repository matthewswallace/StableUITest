// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif

namespace lime{
namespace graphics{
namespace format{

void JPEG_obj::__construct() { }

Dynamic JPEG_obj::__CreateEmpty() { return new JPEG_obj; }

hx::ObjectPtr< JPEG_obj > JPEG_obj::__new()
{
	hx::ObjectPtr< JPEG_obj > _hx_result = new JPEG_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic JPEG_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JPEG_obj > _hx_result = new JPEG_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::lime::graphics::Image JPEG_obj::decodeBytes( ::haxe::io::Bytes bytes,hx::Null< Bool >  __o_decodeData){
Bool decodeData = __o_decodeData.Default(true);
            	HX_STACK_FRAME("lime.graphics.format.JPEG","decodeBytes",0x9c51a384,"lime.graphics.format.JPEG.decodeBytes","lime/graphics/format/JPEG.hx",25,0x0d45bec8)
            	HX_STACK_ARG(bytes,"bytes")
            	HX_STACK_ARG(decodeData,"decodeData")
HXLINE(  30)		HX_VARI(  ::haxe::io::Bytes,buffer) = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  30)		HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this1,"this");
HXDLIN(  30)		Bool _hx_tmp = hx::IsNotNull( buffer );
HXDLIN(  30)		if (_hx_tmp) {
HXLINE(  30)			HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
HXDLIN(  30)			if ((hx::Mod((int)0,_this->bytesPerElement) != (int)0)) {
HXLINE(  30)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  30)			HX_VARI( Int,bufferByteLength) = buffer->length;
HXDLIN(  30)			{
HXLINE(  30)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  30)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  30)				if ((bufferByteLength < (int)0)) {
HXLINE(  30)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  30)			_this->buffer = buffer;
HXDLIN(  30)			_this->byteOffset = (int)0;
HXDLIN(  30)			_this->byteLength = bufferByteLength;
HXDLIN(  30)			Float _hx_tmp1 = ((Float)bufferByteLength / (Float)_this->bytesPerElement);
HXDLIN(  30)			_this->length = ::Std_obj::_hx_int(_hx_tmp1);
HXDLIN(  30)			this1 = _this;
            		}
            		else {
HXLINE(  30)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN(  30)		 ::Dynamic buffer1 =  ::lime::graphics::ImageBuffer_obj::__new(this1,null(),null(),null(),null());
HXDLIN(  30)		 ::hx::Object * _hx_tmp2 = hx::DynamicPtr(bytes);
HXDLIN(  30)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_bytes(_hx_tmp2,decodeData,hx::DynamicPtr(buffer1))) );
HXDLIN(  30)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeBytes,return )

 ::lime::graphics::Image JPEG_obj::decodeFile(::String path,hx::Null< Bool >  __o_decodeData){
Bool decodeData = __o_decodeData.Default(true);
            	HX_STACK_FRAME("lime.graphics.format.JPEG","decodeFile",0xcb0bd983,"lime.graphics.format.JPEG.decodeFile","lime/graphics/format/JPEG.hx",50,0x0d45bec8)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(decodeData,"decodeData")
HXLINE(  55)		HX_VARI(  ::haxe::io::Bytes,buffer) = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  55)		HX_VAR_NAME(  ::lime::utils::ArrayBufferView,this1,"this");
HXDLIN(  55)		Bool _hx_tmp = hx::IsNotNull( buffer );
HXDLIN(  55)		if (_hx_tmp) {
HXLINE(  55)			HX_VARI(  ::lime::utils::ArrayBufferView,_this) =  ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);
HXDLIN(  55)			if ((hx::Mod((int)0,_this->bytesPerElement) != (int)0)) {
HXLINE(  55)				HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            			}
HXDLIN(  55)			HX_VARI( Int,bufferByteLength) = buffer->length;
HXDLIN(  55)			{
HXLINE(  55)				if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE(  55)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN(  55)				if ((bufferByteLength < (int)0)) {
HXLINE(  55)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
            			}
HXDLIN(  55)			_this->buffer = buffer;
HXDLIN(  55)			_this->byteOffset = (int)0;
HXDLIN(  55)			_this->byteLength = bufferByteLength;
HXDLIN(  55)			Float _hx_tmp1 = ((Float)bufferByteLength / (Float)_this->bytesPerElement);
HXDLIN(  55)			_this->length = ::Std_obj::_hx_int(_hx_tmp1);
HXDLIN(  55)			this1 = _this;
            		}
            		else {
HXLINE(  55)			HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            		}
HXDLIN(  55)		 ::Dynamic buffer1 =  ::lime::graphics::ImageBuffer_obj::__new(this1,null(),null(),null(),null());
HXDLIN(  55)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_file(path,decodeData,hx::DynamicPtr(buffer1))) );
HXDLIN(  55)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,decodeFile,return )

 ::haxe::io::Bytes JPEG_obj::encode( ::lime::graphics::Image image,Int quality){
            	HX_STACK_FRAME("lime.graphics.format.JPEG","encode",0xce6c344f,"lime.graphics.format.JPEG.encode","lime/graphics/format/JPEG.hx",75,0x0d45bec8)
            	HX_STACK_ARG(image,"image")
            	HX_STACK_ARG(quality,"quality")
HXLINE(  77)		Bool _hx_tmp;
HXDLIN(  77)		Bool _hx_tmp1 = !(image->get_premultiplied());
HXDLIN(  77)		if (_hx_tmp1) {
HXLINE(  77)			Int _hx_tmp2 = image->get_format();
HXDLIN(  77)			_hx_tmp = (_hx_tmp2 != (int)0);
            		}
            		else {
HXLINE(  77)			_hx_tmp = true;
            		}
HXDLIN(  77)		if (_hx_tmp) {
HXLINE(  81)			image = image->clone();
HXLINE(  82)			image->set_premultiplied(false);
HXLINE(  83)			image->set_format((int)0);
            		}
HXLINE(  92)		 ::Dynamic bytes = ::haxe::io::Bytes_obj::alloc((int)0);
HXDLIN(  92)		 ::hx::Object * _hx_tmp3 = hx::DynamicPtr(image->buffer);
HXDLIN(  92)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::graphics::format::JPEG_obj::cffi_lime_image_encode(_hx_tmp3,(int)1,quality,hx::DynamicPtr(bytes))) );
HXDLIN(  92)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JPEG_obj,encode,return )

 ::Dynamic JPEG_obj::lime_jpeg_decode_bytes( ::Dynamic data,Bool decodeData, ::Dynamic buffer){
            	HX_STACK_FRAME("lime.graphics.format.JPEG","lime_jpeg_decode_bytes",0x320703e0,"lime.graphics.format.JPEG.lime_jpeg_decode_bytes","lime/graphics/format/JPEG.hx",133,0x0d45bec8)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(decodeData,"decodeData")
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 133)		 ::hx::Object * _hx_tmp = hx::DynamicPtr(data);
HXDLIN( 133)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_bytes(_hx_tmp,decodeData,hx::DynamicPtr(buffer))) );
HXDLIN( 133)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JPEG_obj,lime_jpeg_decode_bytes,return )

 ::Dynamic JPEG_obj::lime_jpeg_decode_file(::String path,Bool decodeData, ::Dynamic buffer){
            	HX_STACK_FRAME("lime.graphics.format.JPEG","lime_jpeg_decode_file",0x5579b8a7,"lime.graphics.format.JPEG.lime_jpeg_decode_file","lime/graphics/format/JPEG.hx",134,0x0d45bec8)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(decodeData,"decodeData")
            	HX_STACK_ARG(buffer,"buffer")
HXLINE( 134)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::graphics::format::JPEG_obj::cffi_lime_jpeg_decode_file(path,decodeData,hx::DynamicPtr(buffer))) );
HXDLIN( 134)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JPEG_obj,lime_jpeg_decode_file,return )

 ::Dynamic JPEG_obj::lime_image_encode( ::Dynamic data,Int type,Int quality, ::Dynamic bytes){
            	HX_STACK_FRAME("lime.graphics.format.JPEG","lime_image_encode",0x82bdaecb,"lime.graphics.format.JPEG.lime_image_encode","lime/graphics/format/JPEG.hx",135,0x0d45bec8)
            	HX_STACK_ARG(data,"data")
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(quality,"quality")
            	HX_STACK_ARG(bytes,"bytes")
HXLINE( 135)		 ::hx::Object * _hx_tmp = hx::DynamicPtr(data);
HXDLIN( 135)		 ::hx::Object * inVal = ( ( ::hx::Object *)(::lime::graphics::format::JPEG_obj::cffi_lime_image_encode(_hx_tmp,type,quality,hx::DynamicPtr(bytes))) );
HXDLIN( 135)		return Dynamic(hx::DynamicPtr(inVal));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(JPEG_obj,lime_image_encode,return )

::cpp::Function<   ::hx::Object *( ::hx::Object *,Bool, ::hx::Object *) > JPEG_obj::cffi_lime_jpeg_decode_bytes;

::cpp::Function<   ::hx::Object *(::String,Bool, ::hx::Object *) > JPEG_obj::cffi_lime_jpeg_decode_file;

::cpp::Function<   ::hx::Object *( ::hx::Object *,Int,Int, ::hx::Object *) > JPEG_obj::cffi_lime_image_encode;


JPEG_obj::JPEG_obj()
{
}

bool JPEG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"decodeFile") ) { outValue = decodeFile_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { outValue = decodeBytes_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { outValue = lime_image_encode_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_file") ) { outValue = lime_jpeg_decode_file_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_jpeg_decode_bytes") ) { outValue = lime_jpeg_decode_bytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { outValue = cffi_lime_image_encode; return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_file") ) { outValue = cffi_lime_jpeg_decode_file; return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_bytes") ) { outValue = cffi_lime_jpeg_decode_bytes; return true; }
	}
	return false;
}

bool JPEG_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 22:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { cffi_lime_image_encode=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *,Int,Int, ::hx::Object *) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_file") ) { cffi_lime_jpeg_decode_file=ioValue.Cast< ::cpp::Function<   ::hx::Object *(::String,Bool, ::hx::Object *) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_jpeg_decode_bytes") ) { cffi_lime_jpeg_decode_bytes=ioValue.Cast< ::cpp::Function<   ::hx::Object *( ::hx::Object *,Bool, ::hx::Object *) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *JPEG_obj_sMemberStorageInfo = 0;
static hx::StaticInfo JPEG_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &JPEG_obj::cffi_lime_jpeg_decode_bytes,HX_HCSTRING("cffi_lime_jpeg_decode_bytes","\x60","\xb5","\xa0","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JPEG_obj::cffi_lime_jpeg_decode_file,HX_HCSTRING("cffi_lime_jpeg_decode_file","\x27","\xb7","\x3e","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &JPEG_obj::cffi_lime_image_encode,HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void JPEG_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_bytes,"cffi_lime_jpeg_decode_bytes");
	HX_MARK_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_file,"cffi_lime_jpeg_decode_file");
	HX_MARK_MEMBER_NAME(JPEG_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JPEG_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_bytes,"cffi_lime_jpeg_decode_bytes");
	HX_VISIT_MEMBER_NAME(JPEG_obj::cffi_lime_jpeg_decode_file,"cffi_lime_jpeg_decode_file");
	HX_VISIT_MEMBER_NAME(JPEG_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
};

#endif

hx::Class JPEG_obj::__mClass;

static ::String JPEG_obj_sStaticFields[] = {
	HX_HCSTRING("decodeBytes","\x5d","\x94","\xb1","\x85"),
	HX_HCSTRING("decodeFile","\xca","\x86","\x63","\xce"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("lime_jpeg_decode_bytes","\xa7","\xff","\x10","\xc9"),
	HX_HCSTRING("lime_jpeg_decode_file","\xc0","\x92","\xae","\x0c"),
	HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),
	HX_HCSTRING("cffi_lime_jpeg_decode_bytes","\x60","\xb5","\xa0","\x2b"),
	HX_HCSTRING("cffi_lime_jpeg_decode_file","\x27","\xb7","\x3e","\xc8"),
	HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82"),
	::String(null())
};

void JPEG_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.JPEG","\x15","\x91","\x5a","\xe7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JPEG_obj::__GetStatic;
	__mClass->mSetStaticField = &JPEG_obj::__SetStatic;
	__mClass->mMarkFunc = JPEG_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(JPEG_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< JPEG_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JPEG_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JPEG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JPEG_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JPEG_obj::__boot()
{
{
            	HX_STACK_FRAME("lime.graphics.format.JPEG","boot",0x14c0962b,"lime.graphics.format.JPEG.boot","lime/graphics/format/JPEG.hx",133,0x0d45bec8)
HXLINE( 133)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_jpeg_decode_bytes",a7,ff,10,c9),HX_("oboo",f3,6c,a9,49),false);
HXDLIN( 133)		cffi_lime_jpeg_decode_bytes = inValue;
            	}
{
            	HX_STACK_FRAME("lime.graphics.format.JPEG","boot",0x14c0962b,"lime.graphics.format.JPEG.boot","lime/graphics/format/JPEG.hx",134,0x0d45bec8)
HXLINE( 134)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_jpeg_decode_file",c0,92,ae,0c),HX_("sboo",6f,47,4e,4c),false);
HXDLIN( 134)		cffi_lime_jpeg_decode_file = inValue;
            	}
{
            	HX_STACK_FRAME("lime.graphics.format.JPEG","boot",0x14c0962b,"lime.graphics.format.JPEG.boot","lime/graphics/format/JPEG.hx",135,0x0d45bec8)
HXLINE( 135)		 ::Dynamic inValue = ::cpp::Prime_obj::_loadPrime(HX_("lime",15,17,b3,47),HX_("lime_image_encode",64,48,63,9c),HX_("oiioo",ef,d8,31,2f),false);
HXDLIN( 135)		cffi_lime_image_encode = inValue;
            	}
}

} // end namespace lime
} // end namespace graphics
} // end namespace format
