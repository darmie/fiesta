// Generated by Haxe 4.0.0-rc.2+77068e1
#include <hxcpp.h>

#ifndef INCLUDED_92958f0660df95c6
#define INCLUDED_92958f0660df95c6
#include "linc_sdl.h"
#endif
#ifndef INCLUDED_fiesta_native_sdl_SDLJoystick
#include <fiesta/native/sdl/SDLJoystick.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_24_getJoystick,"fiesta.native.sdl.SDLJoystick","getJoystick",0x8ac1d341,"fiesta.native.sdl.SDLJoystick.getJoystick","fiesta/native/sdl/SDLJoystick.hx",24,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_30_setJoystick,"fiesta.native.sdl.SDLJoystick","setJoystick",0x952eda4d,"fiesta.native.sdl.SDLJoystick.setJoystick","fiesta/native/sdl/SDLJoystick.hx",30,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_36_connect,"fiesta.native.sdl.SDLJoystick","connect",0xe1569839,"fiesta.native.sdl.SDLJoystick.connect","fiesta/native/sdl/SDLJoystick.hx",36,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_52_disconnect,"fiesta.native.sdl.SDLJoystick","disconnect",0x2b07636d,"fiesta.native.sdl.SDLJoystick.disconnect","fiesta/native/sdl/SDLJoystick.hx",52,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_66_getInstanceID,"fiesta.native.sdl.SDLJoystick","getInstanceID",0xa4ad8c75,"fiesta.native.sdl.SDLJoystick.getInstanceID","fiesta/native/sdl/SDLJoystick.hx",66,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_69_init,"fiesta.native.sdl.SDLJoystick","init",0xefdaa761,"fiesta.native.sdl.SDLJoystick.init","fiesta/native/sdl/SDLJoystick.hx",69,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_83_isAccelerometer,"fiesta.native.sdl.SDLJoystick","isAccelerometer",0x4c222bd4,"fiesta.native.sdl.SDLJoystick.isAccelerometer","fiesta/native/sdl/SDLJoystick.hx",83,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_87_getDeviceGUID,"fiesta.native.sdl.SDLJoystick","getDeviceGUID",0xe67522e4,"fiesta.native.sdl.SDLJoystick.getDeviceGUID","fiesta/native/sdl/SDLJoystick.hx",87,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_91_getDeviceName,"fiesta.native.sdl.SDLJoystick","getDeviceName",0xeb1edbc6,"fiesta.native.sdl.SDLJoystick.getDeviceName","fiesta/native/sdl/SDLJoystick.hx",91,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_95_getNumAxes,"fiesta.native.sdl.SDLJoystick","getNumAxes",0xa51e43a6,"fiesta.native.sdl.SDLJoystick.getNumAxes","fiesta/native/sdl/SDLJoystick.hx",95,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_99_getNumButtons,"fiesta.native.sdl.SDLJoystick","getNumButtons",0x332aee60,"fiesta.native.sdl.SDLJoystick.getNumButtons","fiesta/native/sdl/SDLJoystick.hx",99,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_103_getNumTrackBalls,"fiesta.native.sdl.SDLJoystick","getNumTrackBalls",0x436ca84a,"fiesta.native.sdl.SDLJoystick.getNumTrackBalls","fiesta/native/sdl/SDLJoystick.hx",103,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_13_boot,"fiesta.native.sdl.SDLJoystick","boot",0xeb3af083,"fiesta.native.sdl.SDLJoystick.boot","fiesta/native/sdl/SDLJoystick.hx",13,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_14_boot,"fiesta.native.sdl.SDLJoystick","boot",0xeb3af083,"fiesta.native.sdl.SDLJoystick.boot","fiesta/native/sdl/SDLJoystick.hx",14,0x419a7b02)
HX_LOCAL_STACK_FRAME(_hx_pos_5dc996c8da828646_16_boot,"fiesta.native.sdl.SDLJoystick","boot",0xeb3af083,"fiesta.native.sdl.SDLJoystick.boot","fiesta/native/sdl/SDLJoystick.hx",16,0x419a7b02)
std::map<int, SDL_Joystick*> joysticks = std::map<int, SDL_Joystick*> ();
namespace fiesta{
namespace native{
namespace sdl{

void SDLJoystick_obj::__construct() { }

Dynamic SDLJoystick_obj::__CreateEmpty() { return new SDLJoystick_obj; }

void *SDLJoystick_obj::_hx_vtable = 0;

Dynamic SDLJoystick_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SDLJoystick_obj > _hx_result = new SDLJoystick_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SDLJoystick_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a1e02f5;
}

::cpp::Pointer<  SDL_Joystick > SDLJoystick_obj::accelerometer;

int SDLJoystick_obj::accelerometerID;

 ::haxe::ds::IntMap SDLJoystick_obj::joystickIDs;

::cpp::Pointer<  SDL_Joystick > SDLJoystick_obj::getJoystick(int deviceID){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_24_getJoystick)
            	
        return joysticks[deviceID];
    

HXDLIN(  24)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDLJoystick_obj,getJoystick,return )

void SDLJoystick_obj::setJoystick(int deviceID,::cpp::Pointer<  SDL_Joystick > joystick){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_30_setJoystick)
            	
        joysticks[deviceID] = joystick;
    

            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SDLJoystick_obj,setJoystick,(void))

bool SDLJoystick_obj::connect(int deviceID){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_36_connect)
HXLINE(  37)		if ((deviceID != -1)) {
HXLINE(  38)			::cpp::Pointer<  SDL_Joystick > joystick = SDL_JoystickOpen(deviceID);
HXLINE(  39)			::cpp::Pointer<  SDL_Joystick > tmp = joystick;
HXDLIN(  39)			int id = SDL_JoystickInstanceID(tmp);
HXLINE(  41)			if (hx::IsNotNull( joystick )) {
HXLINE(  42)				::cpp::Pointer<  SDL_Joystick > tmp1 = joystick;
HXDLIN(  42)				::fiesta::native::sdl::SDLJoystick_obj::setJoystick(id,tmp1);
HXLINE(  43)				::fiesta::native::sdl::SDLJoystick_obj::joystickIDs->set(deviceID,id);
HXLINE(  45)				return true;
            			}
            		}
HXLINE(  49)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDLJoystick_obj,connect,return )

bool SDLJoystick_obj::disconnect(int id){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_52_disconnect)
HXLINE(  53)		bool check = joysticks.find (id) != joysticks.end ();
HXLINE(  55)		if (check) {
HXLINE(  56)			::cpp::Pointer<  SDL_Joystick > joystick = ::fiesta::native::sdl::SDLJoystick_obj::getJoystick(id);
HXLINE(  57)			::cpp::Pointer<  SDL_Joystick > tmp = joystick;
HXDLIN(  57)			SDL_JoystickClose(tmp);
HXLINE(  58)			joysticks.erase (id);
HXLINE(  59)			return true;
            		}
HXLINE(  62)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDLJoystick_obj,disconnect,return )

int SDLJoystick_obj::getInstanceID(int deviceID){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_66_getInstanceID)
HXDLIN(  66)		return ::fiesta::native::sdl::SDLJoystick_obj::joystickIDs->get_int(deviceID);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDLJoystick_obj,getInstanceID,return )

void SDLJoystick_obj::init(){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_69_init)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SDLJoystick_obj,init,(void))

bool SDLJoystick_obj::isAccelerometer(int id){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_83_isAccelerometer)
HXDLIN(  83)		return (id == -1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDLJoystick_obj,isAccelerometer,return )

const char* SDLJoystick_obj::getDeviceGUID(int id){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_87_getDeviceGUID)
HXDLIN(  87)		::cpp::Pointer<  SDL_Joystick > tmp = ::fiesta::native::sdl::SDLJoystick_obj::getJoystick(id);
HXDLIN(  87)		return linc::sdl::joystickGetGUID(tmp);
            	}


::String SDLJoystick_obj::getDeviceName(int id){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_91_getDeviceName)
HXDLIN(  91)		::cpp::Pointer<  SDL_Joystick > joystick = ::fiesta::native::sdl::SDLJoystick_obj::getJoystick(id);
HXDLIN(  91)		::cpp::Pointer<  SDL_Joystick > tmp = joystick;
HXDLIN(  91)		return ::String(SDL_JoystickName(tmp));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDLJoystick_obj,getDeviceName,return )

int SDLJoystick_obj::getNumAxes(int id){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_95_getNumAxes)
HXDLIN(  95)		::cpp::Pointer<  SDL_Joystick > tmp = ::fiesta::native::sdl::SDLJoystick_obj::getJoystick(id);
HXDLIN(  95)		return SDL_JoystickNumAxes(tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDLJoystick_obj,getNumAxes,return )

int SDLJoystick_obj::getNumButtons(int id){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_99_getNumButtons)
HXDLIN(  99)		::cpp::Pointer<  SDL_Joystick > tmp = ::fiesta::native::sdl::SDLJoystick_obj::getJoystick(id);
HXDLIN(  99)		return SDL_JoystickNumButtons(tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDLJoystick_obj,getNumButtons,return )

int SDLJoystick_obj::getNumTrackBalls(int id){
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_103_getNumTrackBalls)
HXDLIN( 103)		::cpp::Pointer<  SDL_Joystick > tmp = ::fiesta::native::sdl::SDLJoystick_obj::getJoystick(id);
HXDLIN( 103)		return SDL_JoystickNumBalls(tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SDLJoystick_obj,getNumTrackBalls,return )


SDLJoystick_obj::SDLJoystick_obj()
{
}

bool SDLJoystick_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { outValue = connect_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"disconnect") ) { outValue = disconnect_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getNumAxes") ) { outValue = getNumAxes_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"joystickIDs") ) { outValue = ( joystickIDs ); return true; }
		if (HX_FIELD_EQ(inName,"getJoystick") ) { outValue = getJoystick_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setJoystick") ) { outValue = setJoystick_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getInstanceID") ) { outValue = getInstanceID_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getDeviceName") ) { outValue = getDeviceName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getNumButtons") ) { outValue = getNumButtons_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isAccelerometer") ) { outValue = isAccelerometer_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNumTrackBalls") ) { outValue = getNumTrackBalls_dyn(); return true; }
	}
	return false;
}

bool SDLJoystick_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"joystickIDs") ) { joystickIDs=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *SDLJoystick_obj_sMemberStorageInfo = 0;
static hx::StaticInfo SDLJoystick_obj_sStaticStorageInfo[] = {
	{hx::fsUnknown /* ::cpp::Pointer<  SDL_Joystick > */ ,(void *) &SDLJoystick_obj::accelerometer,HX_("accelerometer",cf,1e,0f,09)},
	{hx::fsInt,(void *) &SDLJoystick_obj::accelerometerID,HX_("accelerometerID",6a,f0,2f,c2)},
	{hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &SDLJoystick_obj::joystickIDs,HX_("joystickIDs",fc,dc,f5,3c)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void SDLJoystick_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SDLJoystick_obj::accelerometer,"accelerometer");
	HX_MARK_MEMBER_NAME(SDLJoystick_obj::accelerometerID,"accelerometerID");
	HX_MARK_MEMBER_NAME(SDLJoystick_obj::joystickIDs,"joystickIDs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SDLJoystick_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SDLJoystick_obj::accelerometer,"accelerometer");
	HX_VISIT_MEMBER_NAME(SDLJoystick_obj::accelerometerID,"accelerometerID");
	HX_VISIT_MEMBER_NAME(SDLJoystick_obj::joystickIDs,"joystickIDs");
};

#endif

hx::Class SDLJoystick_obj::__mClass;

static ::String SDLJoystick_obj_sStaticFields[] = {
	HX_("accelerometer",cf,1e,0f,09),
	HX_("accelerometerID",6a,f0,2f,c2),
	HX_("joystickIDs",fc,dc,f5,3c),
	HX_("getJoystick",72,a3,e5,c1),
	HX_("setJoystick",7e,aa,52,cc),
	HX_("connect",ea,3b,80,15),
	HX_("disconnect",5c,64,44,69),
	HX_("getInstanceID",e6,8a,8a,c8),
	HX_("init",10,3b,bb,45),
	HX_("isAccelerometer",85,68,10,e0),
	HX_("getDeviceName",37,da,fb,0e),
	HX_("getNumAxes",95,44,5b,e3),
	HX_("getNumButtons",d1,ec,07,57),
	HX_("getNumTrackBalls",79,86,f3,1f),
	::String(null())
};

void SDLJoystick_obj::__register()
{
	SDLJoystick_obj _hx_dummy;
	SDLJoystick_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("fiesta.native.sdl.SDLJoystick",bd,55,ae,42);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SDLJoystick_obj::__GetStatic;
	__mClass->mSetStaticField = &SDLJoystick_obj::__SetStatic;
	__mClass->mMarkFunc = SDLJoystick_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SDLJoystick_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SDLJoystick_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SDLJoystick_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SDLJoystick_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SDLJoystick_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SDLJoystick_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_13_boot)
HXDLIN(  13)		accelerometer = null();
            	}
{
            	HX_STACKFRAME(&_hx_pos_5dc996c8da828646_14_boot)
HXDLIN(  14)		accelerometerID = -1;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5dc996c8da828646_16_boot)
HXDLIN(  16)		joystickIDs =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace fiesta
} // end namespace native
} // end namespace sdl