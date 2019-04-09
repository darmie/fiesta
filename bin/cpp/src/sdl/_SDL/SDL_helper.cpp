// Generated by Haxe 4.0.0-rc.2+77068e1
#include <hxcpp.h>

#ifndef INCLUDED_92958f0660df95c6
#define INCLUDED_92958f0660df95c6
#include "linc_sdl.h"
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_sdl__SDL_SDL_helper
#include <sdl/_SDL/SDL_helper.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_896_quit,"sdl._SDL.SDL_helper","quit",0x7fc39fac,"sdl._SDL.SDL_helper.quit","linc_sdl/sdl/SDL.hx",896,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_908_add_timer,"sdl._SDL.SDL_helper","add_timer",0xe079c6ea,"sdl._SDL.SDL_helper.add_timer","linc_sdl/sdl/SDL.hx",908,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_926_remove_timer,"sdl._SDL.SDL_helper","remove_timer",0x0cce3327,"sdl._SDL.SDL_helper.remove_timer","linc_sdl/sdl/SDL.hx",926,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_941_timer_callback,"sdl._SDL.SDL_helper","timer_callback",0x904de6dc,"sdl._SDL.SDL_helper.timer_callback","linc_sdl/sdl/SDL.hx",941,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_976_add_event_watch,"sdl._SDL.SDL_helper","add_event_watch",0x53e2a60f,"sdl._SDL.SDL_helper.add_event_watch","linc_sdl/sdl/SDL.hx",976,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_993_del_event_watch,"sdl._SDL.SDL_helper","del_event_watch",0x0386c4b9,"sdl._SDL.SDL_helper.del_event_watch","linc_sdl/sdl/SDL.hx",993,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_1011_event_watch_callback,"sdl._SDL.SDL_helper","event_watch_callback",0xbb641097,"sdl._SDL.SDL_helper.event_watch_callback","linc_sdl/sdl/SDL.hx",1011,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_905_boot,"sdl._SDL.SDL_helper","boot",0x75d4e40f,"sdl._SDL.SDL_helper.boot","linc_sdl/sdl/SDL.hx",905,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_906_boot,"sdl._SDL.SDL_helper","boot",0x75d4e40f,"sdl._SDL.SDL_helper.boot","linc_sdl/sdl/SDL.hx",906,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_972_boot,"sdl._SDL.SDL_helper","boot",0x75d4e40f,"sdl._SDL.SDL_helper.boot","linc_sdl/sdl/SDL.hx",972,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_973_boot,"sdl._SDL.SDL_helper","boot",0x75d4e40f,"sdl._SDL.SDL_helper.boot","linc_sdl/sdl/SDL.hx",973,0x6fa30a18)
HX_LOCAL_STACK_FRAME(_hx_pos_3406193152f453a3_974_boot,"sdl._SDL.SDL_helper","boot",0x75d4e40f,"sdl._SDL.SDL_helper.boot","linc_sdl/sdl/SDL.hx",974,0x6fa30a18)
namespace sdl{
namespace _SDL{

void SDL_helper_obj::__construct() { }

Dynamic SDL_helper_obj::__CreateEmpty() { return new SDL_helper_obj; }

void *SDL_helper_obj::_hx_vtable = 0;

Dynamic SDL_helper_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SDL_helper_obj > _hx_result = new SDL_helper_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SDL_helper_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7eb56f85;
}

void SDL_helper_obj::quit(){
            	HX_GC_STACKFRAME(&_hx_pos_3406193152f453a3_896_quit)
HXLINE( 897)		::sdl::_SDL::SDL_helper_obj::timers =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 898)		::sdl::_SDL::SDL_helper_obj::timer_callback_set = false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SDL_helper_obj,quit,(void))

 ::haxe::ds::IntMap SDL_helper_obj::timers;

bool SDL_helper_obj::timer_callback_set;

int SDL_helper_obj::add_timer(int interval, ::Dynamic callback, ::Dynamic userdata){
            	HX_STACKFRAME(&_hx_pos_3406193152f453a3_908_add_timer)
HXLINE( 909)		if (!(::sdl::_SDL::SDL_helper_obj::timer_callback_set)) {
HXLINE( 910)			::sdl::_SDL::SDL_helper_obj::timer_callback_set = true;
HXLINE( 911)			linc::sdl::init_timer(::cpp::Function< int (int)>(hx::AnyCast(&::sdl::_SDL::SDL_helper_obj::timer_callback )));
            		}
HXLINE( 914)		int _timerid = linc::sdl::addTimer(interval);
HXLINE( 916)		::sdl::_SDL::SDL_helper_obj::timers->set(_timerid, ::Dynamic(hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("timerid",e0,56,f9,d8),_timerid)
            			->setFixed(1,HX_("userdata",f5,69,4f,1a),userdata)
            			->setFixed(2,HX_("interval",45,79,7c,28),interval)
            			->setFixed(3,HX_("callback",c5,99,06,7f),callback)));
HXLINE( 923)		return _timerid;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SDL_helper_obj,add_timer,return )

bool SDL_helper_obj::remove_timer(int _timerid){
            	HX_STACKFRAME(&_hx_pos_3406193152f453a3_926_remove_timer)
HXLINE( 927)		 ::Dynamic _info = ::sdl::_SDL::SDL_helper_obj::timers->get(_timerid);
HXLINE( 929)		if (hx::IsNull( _info )) {
HXLINE( 930)			return false;
            		}
HXLINE( 932)		::sdl::_SDL::SDL_helper_obj::timers->remove(_timerid);
HXLINE( 934)		bool _result = linc::sdl::removeTimer(( (int)(_info->__Field(HX_("timerid",e0,56,f9,d8),hx::paccDynamic)) ));
HXLINE( 936)		_info = null();
HXLINE( 938)		return _result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDL_helper_obj,remove_timer,return )

int SDL_helper_obj::timer_callback(int _timerid){
            	HX_STACKFRAME(&_hx_pos_3406193152f453a3_941_timer_callback)
HXLINE( 942)		 ::Dynamic _timer = ::sdl::_SDL::SDL_helper_obj::timers->get(_timerid);
HXLINE( 943)		if (hx::IsNotNull( _timer )) {
HXLINE( 944)			return ( (int)(_timer->__Field(HX_("callback",c5,99,06,7f),hx::paccDynamic)( ::Dynamic(_timer->__Field(HX_("interval",45,79,7c,28),hx::paccDynamic)), ::Dynamic(_timer->__Field(HX_("userdata",f5,69,4f,1a),hx::paccDynamic)))) );
            		}
HXLINE( 947)		return 0;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDL_helper_obj,timer_callback,return )

 ::haxe::ds::IntMap SDL_helper_obj::event_watchs;

bool SDL_helper_obj::watch_callback_set;

::Array< int > SDL_helper_obj::removed_watchs;

int SDL_helper_obj::add_event_watch( ::Dynamic func, ::Dynamic userdata){
            	HX_STACKFRAME(&_hx_pos_3406193152f453a3_976_add_event_watch)
HXLINE( 977)		if (!(::sdl::_SDL::SDL_helper_obj::watch_callback_set)) {
HXLINE( 978)			::sdl::_SDL::SDL_helper_obj::watch_callback_set = true;
HXLINE( 979)			linc::sdl::init_event_watch(::cpp::Function< int (int, SDL_Event*)>(hx::AnyCast(&::sdl::_SDL::SDL_helper_obj::event_watch_callback )));
            		}
HXLINE( 982)		int _watchid = linc::sdl::addEventWatch();
HXLINE( 984)		::sdl::_SDL::SDL_helper_obj::event_watchs->set(_watchid, ::Dynamic(hx::Anon_obj::Create(3)
            			->setFixed(0,HX_("userdata",f5,69,4f,1a),userdata)
            			->setFixed(1,HX_("watchid",ea,e3,52,29),_watchid)
            			->setFixed(2,HX_("callback",c5,99,06,7f),func)));
HXLINE( 990)		return _watchid;
            	}


void SDL_helper_obj::del_event_watch( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_3406193152f453a3_993_del_event_watch)
HXLINE( 994)		 ::Dynamic _found = null();
HXLINE( 996)		{
HXLINE( 996)			 ::Dynamic _watch = ::sdl::_SDL::SDL_helper_obj::event_watchs->iterator();
HXDLIN( 996)			while(( (bool)(_watch->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 996)				 ::Dynamic _watch1 = _watch->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)();
HXLINE( 997)				if (hx::IsEq( _watch1->__Field(HX_("callback",c5,99,06,7f),hx::paccDynamic),func )) {
HXLINE( 998)					_found = _watch1;
HXLINE( 999)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE(1003)		if (hx::IsNull( _found )) {
HXLINE(1004)			HX_STACK_DO_THROW(HX_("Can't find event watch to remove, was it added?",3b,d5,79,d0));
            		}
HXLINE(1006)		::sdl::_SDL::SDL_helper_obj::event_watchs->remove(( (int)(_found->__Field(HX_("watchid",ea,e3,52,29),hx::paccDynamic)) ));
HXLINE(1007)		linc::sdl::delEventWatch(( (int)(_found->__Field(HX_("watchid",ea,e3,52,29),hx::paccDynamic)) ));
HXLINE(1008)		_found = null();
            	}


int SDL_helper_obj::event_watch_callback(int _watchid, SDL_Event* _event){
            	HX_STACKFRAME(&_hx_pos_3406193152f453a3_1011_event_watch_callback)
HXLINE(1012)		 ::Dynamic _watch = ::sdl::_SDL::SDL_helper_obj::event_watchs->get(_watchid);
HXLINE(1013)		if (hx::IsNotNull( _watch )) {
HXLINE(1014)			return ( (int)(_watch->__Field(HX_("callback",c5,99,06,7f),hx::paccDynamic)( ::Dynamic(_watch->__Field(HX_("userdata",f5,69,4f,1a),hx::paccDynamic)),_event)) );
            		}
HXLINE(1017)		return 1;
            	}



SDL_helper_obj::SDL_helper_obj()
{
}

bool SDL_helper_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"quit") ) { outValue = quit_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"timers") ) { outValue = ( timers ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"add_timer") ) { outValue = add_timer_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"remove_timer") ) { outValue = remove_timer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"event_watchs") ) { outValue = ( event_watchs ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"timer_callback") ) { outValue = timer_callback_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removed_watchs") ) { outValue = ( removed_watchs ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"timer_callback_set") ) { outValue = ( timer_callback_set ); return true; }
		if (HX_FIELD_EQ(inName,"watch_callback_set") ) { outValue = ( watch_callback_set ); return true; }
	}
	return false;
}

bool SDL_helper_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"timers") ) { timers=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"event_watchs") ) { event_watchs=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removed_watchs") ) { removed_watchs=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"timer_callback_set") ) { timer_callback_set=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"watch_callback_set") ) { watch_callback_set=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *SDL_helper_obj_sMemberStorageInfo = 0;
static hx::StaticInfo SDL_helper_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &SDL_helper_obj::timers,HX_("timers",0e,0d,d2,1e)},
	{hx::fsBool,(void *) &SDL_helper_obj::timer_callback_set,HX_("timer_callback_set",e2,dc,88,ab)},
	{hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &SDL_helper_obj::event_watchs,HX_("event_watchs",09,50,c9,ec)},
	{hx::fsBool,(void *) &SDL_helper_obj::watch_callback_set,HX_("watch_callback_set",18,b8,aa,78)},
	{hx::fsObject /* ::Array< int > */ ,(void *) &SDL_helper_obj::removed_watchs,HX_("removed_watchs",43,95,1e,72)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void SDL_helper_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SDL_helper_obj::timers,"timers");
	HX_MARK_MEMBER_NAME(SDL_helper_obj::timer_callback_set,"timer_callback_set");
	HX_MARK_MEMBER_NAME(SDL_helper_obj::event_watchs,"event_watchs");
	HX_MARK_MEMBER_NAME(SDL_helper_obj::watch_callback_set,"watch_callback_set");
	HX_MARK_MEMBER_NAME(SDL_helper_obj::removed_watchs,"removed_watchs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SDL_helper_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::timers,"timers");
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::timer_callback_set,"timer_callback_set");
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::event_watchs,"event_watchs");
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::watch_callback_set,"watch_callback_set");
	HX_VISIT_MEMBER_NAME(SDL_helper_obj::removed_watchs,"removed_watchs");
};

#endif

hx::Class SDL_helper_obj::__mClass;

static ::String SDL_helper_obj_sStaticFields[] = {
	HX_("quit",cf,3f,0a,4b),
	HX_("timers",0e,0d,d2,1e),
	HX_("timer_callback_set",e2,dc,88,ab),
	HX_("add_timer",e7,c7,ac,8f),
	HX_("remove_timer",4a,2e,b6,46),
	HX_("timer_callback",bf,30,85,10),
	HX_("event_watchs",09,50,c9,ec),
	HX_("watch_callback_set",18,b8,aa,78),
	HX_("removed_watchs",43,95,1e,72),
	::String(null())
};

void SDL_helper_obj::__register()
{
	SDL_helper_obj _hx_dummy;
	SDL_helper_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("sdl._SDL.SDL_helper",b1,0d,f1,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SDL_helper_obj::__GetStatic;
	__mClass->mSetStaticField = &SDL_helper_obj::__SetStatic;
	__mClass->mMarkFunc = SDL_helper_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SDL_helper_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SDL_helper_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SDL_helper_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SDL_helper_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SDL_helper_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SDL_helper_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_3406193152f453a3_905_boot)
HXDLIN( 905)		timers =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_3406193152f453a3_906_boot)
HXDLIN( 906)		timer_callback_set = false;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_3406193152f453a3_972_boot)
HXDLIN( 972)		event_watchs =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_3406193152f453a3_973_boot)
HXDLIN( 973)		watch_callback_set = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3406193152f453a3_974_boot)
HXDLIN( 974)		removed_watchs = ::Array_obj< int >::__new(0);
            	}
}

} // end namespace sdl
} // end namespace _SDL