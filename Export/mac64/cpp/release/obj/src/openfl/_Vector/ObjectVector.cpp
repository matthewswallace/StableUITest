// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif

namespace openfl{
namespace _Vector{

void ObjectVector_obj::__construct( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","new",0x1b3b8afe,"openfl._Vector.ObjectVector.new","openfl/Vector.hx",1437,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(length,"length")
            	HX_STACK_ARG(fixed,"fixed")
            	HX_STACK_ARG(array,"array")
HXLINE(1439)		Bool _hx_tmp = hx::IsNull( array );
HXDLIN(1439)		if (_hx_tmp) {
HXLINE(1441)			array = ::cpp::VirtualArray_obj::__new();
            		}
HXLINE(1445)		this->_hx___array = array;
HXLINE(1447)		Bool _hx_tmp1 = hx::IsNotNull( length );
HXDLIN(1447)		if (_hx_tmp1) {
HXLINE(1449)			this->set_length(length);
            		}
HXLINE(1453)		this->fixed = hx::IsEq( fixed,true );
            	}

Dynamic ObjectVector_obj::__CreateEmpty() { return new ObjectVector_obj; }

hx::ObjectPtr< ObjectVector_obj > ObjectVector_obj::__new( ::Dynamic length, ::Dynamic fixed,::cpp::VirtualArray array)
{
	hx::ObjectPtr< ObjectVector_obj > _hx_result = new ObjectVector_obj();
	_hx_result->__construct(length,fixed,array);
	return _hx_result;
}

Dynamic ObjectVector_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ObjectVector_obj > _hx_result = new ObjectVector_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

static ::openfl::_Vector::IVector_obj _hx_openfl__Vector_ObjectVector__hx_openfl__Vector_IVector= {
	( Int (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::get_length,
	( Int (hx::Object::*)(Int))&::openfl::_Vector::ObjectVector_obj::set_length,
	( ::Dynamic (hx::Object::*)(::Dynamic))&::openfl::_Vector::ObjectVector_obj::concat,
	( ::Dynamic (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::copy,
	(  ::Dynamic (hx::Object::*)(Int))&::openfl::_Vector::ObjectVector_obj::get,
	( Int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::indexOf,
	( void (hx::Object::*)(Int, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::insertAt,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::iterator,
	( ::String (hx::Object::*)(::String))&::openfl::_Vector::ObjectVector_obj::join,
	( Int (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::lastIndexOf,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::pop,
	( Int (hx::Object::*)( ::Dynamic))&::openfl::_Vector::ObjectVector_obj::push,
	( void (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::reverse,
	(  ::Dynamic (hx::Object::*)(Int, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::set,
	(  ::Dynamic (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::shift,
	( ::Dynamic (hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::_Vector::ObjectVector_obj::slice,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::ObjectVector_obj::sort,
	( ::Dynamic (hx::Object::*)(Int,Int))&::openfl::_Vector::ObjectVector_obj::splice,
	( ::String (hx::Object::*)())&::openfl::_Vector::ObjectVector_obj::toString,
	( void (hx::Object::*)( ::Dynamic))&::openfl::_Vector::ObjectVector_obj::unshift,
};

void *ObjectVector_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x45e7caba: return &_hx_openfl__Vector_ObjectVector__hx_openfl__Vector_IVector;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::Dynamic ObjectVector_obj::concat(::Dynamic a){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","concat",0x91684536,"openfl._Vector.ObjectVector.concat","openfl/Vector.hx",1460,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(a,"a")
HXLINE(1460)		Bool _hx_tmp = hx::IsNull( a );
HXDLIN(1460)		if (_hx_tmp) {
HXLINE(1462)			::cpp::VirtualArray _hx_tmp1 = this->_hx___array->copy();
HXDLIN(1462)			return  ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),_hx_tmp1);
            		}
            		else {
HXLINE(1466)			::cpp::VirtualArray _hx_tmp2 = this->_hx___array->concat(hx::TCast<  ::openfl::_Vector::ObjectVector >::cast(a)->_hx___array);
HXDLIN(1466)			return  ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),_hx_tmp2);
            		}
HXLINE(1460)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,concat,return )

::Dynamic ObjectVector_obj::copy(){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","copy",0xb1a04b57,"openfl._Vector.ObjectVector.copy","openfl/Vector.hx",1475,0x4a01873c)
            	HX_STACK_THIS(this)
HXLINE(1475)		::cpp::VirtualArray _hx_tmp = this->_hx___array->copy();
HXDLIN(1475)		return  ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,copy,return )

 ::Dynamic ObjectVector_obj::get(Int index){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","get",0x1b363b34,"openfl._Vector.ObjectVector.get","openfl/Vector.hx",1482,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
HXLINE(1482)		return this->_hx___array->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,get,return )

Int ObjectVector_obj::indexOf( ::Dynamic x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","indexOf",0x7c5baa67,"openfl._Vector.ObjectVector.indexOf","openfl/Vector.hx",1487,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(from,"from")
HXLINE(1489)		{
HXLINE(1489)			HX_VARI( Int,_g1) = from;
HXDLIN(1489)			HX_VARI( Int,_g) = this->_hx___array->get_length();
HXDLIN(1489)			while((_g1 < _g)){
HXLINE(1489)				HX_VARI( Int,i) = _g1++;
HXLINE(1491)				if (hx::IsEq( this->_hx___array->__get(i),x )) {
HXLINE(1493)					return i;
            				}
            			}
            		}
HXLINE(1499)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,indexOf,return )

void ObjectVector_obj::insertAt(Int index, ::Dynamic element){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","insertAt",0x4f58852e,"openfl._Vector.ObjectVector.insertAt","openfl/Vector.hx",1506,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(element,"element")
HXLINE(1506)		Bool _hx_tmp;
HXDLIN(1506)		if (!(!(this->fixed))) {
HXLINE(1506)			_hx_tmp = (index < this->_hx___array->get_length());
            		}
            		else {
HXLINE(1506)			_hx_tmp = true;
            		}
HXDLIN(1506)		if (_hx_tmp) {
HXLINE(1508)			this->_hx___array->insert(index,element);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,insertAt,(void))

 ::Dynamic ObjectVector_obj::iterator(){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","iterator",0x20d35290,"openfl._Vector.ObjectVector.iterator","openfl/Vector.hx",1517,0x4a01873c)
            	HX_STACK_THIS(this)
HXLINE(1517)		return this->_hx___array->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,iterator,return )

::String ObjectVector_obj::join(::String sep){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","join",0xb640c38c,"openfl._Vector.ObjectVector.join","openfl/Vector.hx",1524,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(sep,"sep")
HXLINE(1524)		return this->_hx___array->join(sep);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,join,return )

Int ObjectVector_obj::lastIndexOf( ::Dynamic x, ::Dynamic __o_from){
 ::Dynamic from = __o_from.Default(0);
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","lastIndexOf",0x069b85b1,"openfl._Vector.ObjectVector.lastIndexOf","openfl/Vector.hx",1529,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
            	HX_STACK_ARG(from,"from")
HXLINE(1531)		HX_VARI( Int,i) = (this->_hx___array->get_length() - (int)1);
HXLINE(1533)		while(hx::IsGreaterEq( i,from )){
HXLINE(1535)			if (hx::IsEq( this->_hx___array->__get(i),x )) {
HXLINE(1535)				return i;
            			}
HXLINE(1536)			--i;
            		}
HXLINE(1540)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,lastIndexOf,return )

 ::Dynamic ObjectVector_obj::pop(){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","pop",0x1b3d182f,"openfl._Vector.ObjectVector.pop","openfl/Vector.hx",1547,0x4a01873c)
            	HX_STACK_THIS(this)
HXLINE(1547)		Bool _hx_tmp = !(this->fixed);
HXDLIN(1547)		if (_hx_tmp) {
HXLINE(1549)			return this->_hx___array->pop();
            		}
            		else {
HXLINE(1553)			return null();
            		}
HXLINE(1547)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,pop,return )

Int ObjectVector_obj::push( ::Dynamic x){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","push",0xba3ca17c,"openfl._Vector.ObjectVector.push","openfl/Vector.hx",1562,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE(1562)		Bool _hx_tmp = !(this->fixed);
HXDLIN(1562)		if (_hx_tmp) {
HXLINE(1564)			return this->_hx___array->push(x);
            		}
            		else {
HXLINE(1568)			return this->_hx___array->get_length();
            		}
HXLINE(1562)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,push,return )

void ObjectVector_obj::reverse(){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","reverse",0xb6989ac0,"openfl._Vector.ObjectVector.reverse","openfl/Vector.hx",1577,0x4a01873c)
            	HX_STACK_THIS(this)
HXLINE(1577)		this->_hx___array->reverse();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,reverse,(void))

 ::Dynamic ObjectVector_obj::set(Int index, ::Dynamic value){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","set",0x1b3f5640,"openfl._Vector.ObjectVector.set","openfl/Vector.hx",1584,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(value,"value")
HXLINE(1584)		Bool _hx_tmp;
HXDLIN(1584)		if (!(!(this->fixed))) {
HXLINE(1584)			_hx_tmp = (index < this->_hx___array->get_length());
            		}
            		else {
HXLINE(1584)			_hx_tmp = true;
            		}
HXDLIN(1584)		if (_hx_tmp) {
HXLINE(1586)			return (this->_hx___array->set(index,value));
            		}
            		else {
HXLINE(1590)			return value;
            		}
HXLINE(1584)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,set,return )

 ::Dynamic ObjectVector_obj::shift(){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","shift",0xec650aa0,"openfl._Vector.ObjectVector.shift","openfl/Vector.hx",1599,0x4a01873c)
            	HX_STACK_THIS(this)
HXLINE(1599)		Bool _hx_tmp = !(this->fixed);
HXDLIN(1599)		if (_hx_tmp) {
HXLINE(1601)			return this->_hx___array->shift();
            		}
            		else {
HXLINE(1605)			return null();
            		}
HXLINE(1599)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,shift,return )

::Dynamic ObjectVector_obj::slice( ::Dynamic __o_startIndex, ::Dynamic __o_endIndex){
 ::Dynamic startIndex = __o_startIndex.Default(0);
 ::Dynamic endIndex = __o_endIndex.Default(16777215);
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","slice",0xef09e270,"openfl._Vector.ObjectVector.slice","openfl/Vector.hx",1614,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(startIndex,"startIndex")
            	HX_STACK_ARG(endIndex,"endIndex")
HXLINE(1614)		::cpp::VirtualArray _hx_tmp = this->_hx___array->slice(startIndex,endIndex);
HXDLIN(1614)		return  ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,slice,return )

void ObjectVector_obj::sort( ::Dynamic f){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","sort",0xbc33b700,"openfl._Vector.ObjectVector.sort","openfl/Vector.hx",1621,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(f,"f")
HXLINE(1621)		this->_hx___array->sort(f);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,sort,(void))

::Dynamic ObjectVector_obj::splice(Int pos,Int len){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","splice",0x8936c19e,"openfl._Vector.ObjectVector.splice","openfl/Vector.hx",1628,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(pos,"pos")
            	HX_STACK_ARG(len,"len")
HXLINE(1628)		::cpp::VirtualArray _hx_tmp = this->_hx___array->splice(pos,len);
HXDLIN(1628)		return  ::openfl::_Vector::ObjectVector_obj::__new(null(),null(),_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ObjectVector_obj,splice,return )

::String ObjectVector_obj::toString(){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","toString",0xc5a7d94e,"openfl._Vector.ObjectVector.toString","openfl/Vector.hx",1635,0x4a01873c)
            	HX_STACK_THIS(this)
HXLINE(1635)		return this->_hx___array->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,toString,return )

void ObjectVector_obj::unshift( ::Dynamic x){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","unshift",0x14504527,"openfl._Vector.ObjectVector.unshift","openfl/Vector.hx",1642,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(x,"x")
HXLINE(1642)		Bool _hx_tmp = !(this->fixed);
HXDLIN(1642)		if (_hx_tmp) {
HXLINE(1644)			this->_hx___array->unshift(x);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,unshift,(void))

Int ObjectVector_obj::get_length(){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","get_length",0xa394f9d1,"openfl._Vector.ObjectVector.get_length","openfl/Vector.hx",1660,0x4a01873c)
            	HX_STACK_THIS(this)
HXLINE(1660)		return this->_hx___array->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ObjectVector_obj,get_length,return )

Int ObjectVector_obj::set_length(Int value){
            	HX_STACK_FRAME("openfl._Vector.ObjectVector","set_length",0xa7129845,"openfl._Vector.ObjectVector.set_length","openfl/Vector.hx",1665,0x4a01873c)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(1667)		Bool _hx_tmp = !(this->fixed);
HXDLIN(1667)		if (_hx_tmp) {
HXLINE(1671)			_hx_array_set_size_exact(this->_hx___array,value);
            		}
HXLINE(1700)		return this->_hx___array->get_length();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ObjectVector_obj,set_length,return )


ObjectVector_obj::ObjectVector_obj()
{
}

void ObjectVector_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectVector);
	HX_MARK_MEMBER_NAME(fixed,"fixed");
	HX_MARK_MEMBER_NAME(_hx___array,"__array");
	HX_MARK_END_CLASS();
}

void ObjectVector_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fixed,"fixed");
	HX_VISIT_MEMBER_NAME(_hx___array,"__array");
}

hx::Val ObjectVector_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn()); }
		if (HX_FIELD_EQ(inName,"pop") ) { return hx::Val( pop_dyn()); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn()); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn()); }
		if (HX_FIELD_EQ(inName,"join") ) { return hx::Val( join_dyn()); }
		if (HX_FIELD_EQ(inName,"push") ) { return hx::Val( push_dyn()); }
		if (HX_FIELD_EQ(inName,"sort") ) { return hx::Val( sort_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { return hx::Val( fixed); }
		if (HX_FIELD_EQ(inName,"shift") ) { return hx::Val( shift_dyn()); }
		if (HX_FIELD_EQ(inName,"slice") ) { return hx::Val( slice_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_length()); }
		if (HX_FIELD_EQ(inName,"concat") ) { return hx::Val( concat_dyn()); }
		if (HX_FIELD_EQ(inName,"splice") ) { return hx::Val( splice_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { return hx::Val( _hx___array); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return hx::Val( indexOf_dyn()); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return hx::Val( reverse_dyn()); }
		if (HX_FIELD_EQ(inName,"unshift") ) { return hx::Val( unshift_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"insertAt") ) { return hx::Val( insertAt_dyn()); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn()); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { return hx::Val( lastIndexOf_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ObjectVector_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< Bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"__array") ) { _hx___array=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ObjectVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ObjectVector_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ObjectVector_obj,fixed),HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ObjectVector_obj,_hx___array),HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ObjectVector_obj_sStaticStorageInfo = 0;
#endif

static ::String ObjectVector_obj_sMemberFields[] = {
	HX_HCSTRING("fixed","\x74","\xf9","\xa1","\x00"),
	HX_HCSTRING("__array","\x79","\xc6","\xed","\x8f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("insertAt","\x8c","\x7c","\x1f","\xc2"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	::String(null()) };

static void ObjectVector_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ObjectVector_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ObjectVector_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ObjectVector_obj::__mClass,"__mClass");
};

#endif

hx::Class ObjectVector_obj::__mClass;

void ObjectVector_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._Vector.ObjectVector","\x0c","\xf4","\x26","\xc3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ObjectVector_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ObjectVector_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ObjectVector_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ObjectVector_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ObjectVector_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ObjectVector_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _Vector