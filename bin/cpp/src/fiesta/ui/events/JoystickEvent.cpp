// Generated by Haxe 4.0.0-rc.2+77068e1
#include <hxcpp.h>

#ifndef INCLUDED_fiesta_ui_events_JoystickEvent
#include <fiesta/ui/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_fiesta_ui_events_JoystickEventType
#include <fiesta/ui/events/JoystickEventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_07b52d6332e20606_26_new,"fiesta.ui.events.JoystickEvent","new",0x0995d005,"fiesta.ui.events.JoystickEvent.new","fiesta/ui/events/JoystickEvent.hx",26,0x58a8466c)
HX_LOCAL_STACK_FRAME(_hx_pos_07b52d6332e20606_36_dispatch,"fiesta.ui.events.JoystickEvent","dispatch",0xe367f8f5,"fiesta.ui.events.JoystickEvent.dispatch","fiesta/ui/events/JoystickEvent.hx",36,0x58a8466c)
namespace fiesta{
namespace ui{
namespace events{

void JoystickEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_07b52d6332e20606_26_new)
HXLINE(  27)		this->id = 0;
HXLINE(  28)		this->index = 0;
HXLINE(  29)		this->eventValue = 0;
HXLINE(  30)		this->x = ( (Float)(0) );
HXLINE(  31)		this->y = ( (Float)(0) );
HXLINE(  32)		this->eventType = ::fiesta::ui::events::JoystickEventType_obj::JOYSTICK_AXIS_MOVE_dyn();
            	}

Dynamic JoystickEvent_obj::__CreateEmpty() { return new JoystickEvent_obj; }

void *JoystickEvent_obj::_hx_vtable = 0;

Dynamic JoystickEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JoystickEvent_obj > _hx_result = new JoystickEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JoystickEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x092ac3a3;
}

 ::Dynamic JoystickEvent_obj::callback;

 ::fiesta::ui::events::JoystickEvent JoystickEvent_obj::eventObject;

void JoystickEvent_obj::dispatch( ::fiesta::ui::events::JoystickEvent event){
            	HX_STACKFRAME(&_hx_pos_07b52d6332e20606_36_dispatch)
HXDLIN(  36)		if (hx::IsNotNull( ::fiesta::ui::events::JoystickEvent_obj::callback )) {
HXLINE(  37)			::fiesta::ui::events::JoystickEvent_obj::eventObject = event;
HXLINE(  38)			::fiesta::ui::events::JoystickEvent_obj::callback(event);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JoystickEvent_obj,dispatch,(void))


hx::ObjectPtr< JoystickEvent_obj > JoystickEvent_obj::__new() {
	hx::ObjectPtr< JoystickEvent_obj > __this = new JoystickEvent_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< JoystickEvent_obj > JoystickEvent_obj::__alloc(hx::Ctx *_hx_ctx) {
	JoystickEvent_obj *__this = (JoystickEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JoystickEvent_obj), true, "fiesta.ui.events.JoystickEvent"));
	*(void **)__this = JoystickEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

JoystickEvent_obj::JoystickEvent_obj()
{
}

void JoystickEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JoystickEvent);
	HX_MARK_MEMBER_NAME(eventType,"eventType");
	HX_MARK_MEMBER_NAME(eventValue,"eventValue");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void JoystickEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(eventType,"eventType");
	HX_VISIT_MEMBER_NAME(eventValue,"eventValue");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(id,"id");
}

hx::Val JoystickEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventType") ) { return hx::Val( eventType ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eventValue") ) { return hx::Val( eventValue ); }
	}
	return super::__Field(inName,inCallProp);
}

bool JoystickEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { outValue = ( callback ); return true; }
		if (HX_FIELD_EQ(inName,"dispatch") ) { outValue = dispatch_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventObject") ) { outValue = ( eventObject ); return true; }
	}
	return false;
}

hx::Val JoystickEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventType") ) { eventType=inValue.Cast<  ::fiesta::ui::events::JoystickEventType >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eventValue") ) { eventValue=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool JoystickEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventObject") ) { eventObject=ioValue.Cast<  ::fiesta::ui::events::JoystickEvent >(); return true; }
	}
	return false;
}

void JoystickEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("eventType",f4,fb,15,fc));
	outFields->push(HX_("eventValue",f7,88,13,ae));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("id",db,5b,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo JoystickEvent_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::fiesta::ui::events::JoystickEventType */ ,(int)offsetof(JoystickEvent_obj,eventType),HX_("eventType",f4,fb,15,fc)},
	{hx::fsInt,(int)offsetof(JoystickEvent_obj,eventValue),HX_("eventValue",f7,88,13,ae)},
	{hx::fsInt,(int)offsetof(JoystickEvent_obj,index),HX_("index",12,9b,14,be)},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,x),HX_("x",78,00,00,00)},
	{hx::fsFloat,(int)offsetof(JoystickEvent_obj,y),HX_("y",79,00,00,00)},
	{hx::fsInt,(int)offsetof(JoystickEvent_obj,id),HX_("id",db,5b,00,00)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo JoystickEvent_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(void *) &JoystickEvent_obj::callback,HX_("callback",c5,99,06,7f)},
	{hx::fsObject /*  ::fiesta::ui::events::JoystickEvent */ ,(void *) &JoystickEvent_obj::eventObject,HX_("eventObject",79,ca,8c,68)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String JoystickEvent_obj_sMemberFields[] = {
	HX_("eventType",f4,fb,15,fc),
	HX_("eventValue",f7,88,13,ae),
	HX_("index",12,9b,14,be),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("id",db,5b,00,00),
	::String(null()) };

static void JoystickEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::callback,"callback");
	HX_MARK_MEMBER_NAME(JoystickEvent_obj::eventObject,"eventObject");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JoystickEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::callback,"callback");
	HX_VISIT_MEMBER_NAME(JoystickEvent_obj::eventObject,"eventObject");
};

#endif

hx::Class JoystickEvent_obj::__mClass;

static ::String JoystickEvent_obj_sStaticFields[] = {
	HX_("callback",c5,99,06,7f),
	HX_("eventObject",79,ca,8c,68),
	HX_("dispatch",ba,ce,63,1e),
	::String(null())
};

void JoystickEvent_obj::__register()
{
	JoystickEvent_obj _hx_dummy;
	JoystickEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("fiesta.ui.events.JoystickEvent",93,69,0a,e7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JoystickEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &JoystickEvent_obj::__SetStatic;
	__mClass->mMarkFunc = JoystickEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(JoystickEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JoystickEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JoystickEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JoystickEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JoystickEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JoystickEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace fiesta
} // end namespace ui
} // end namespace events