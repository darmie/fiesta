// Generated by Haxe 4.0.0-rc.2+77068e1
#include <hxcpp.h>

#ifndef INCLUDED_fiesta_ui_events_MouseEvent
#include <fiesta/ui/events/MouseEvent.h>
#endif
#ifndef INCLUDED_fiesta_ui_events_MouseEventType
#include <fiesta/ui/events/MouseEventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8b77150230cbccad_24_new,"fiesta.ui.events.MouseEvent","new",0xf383f9b2,"fiesta.ui.events.MouseEvent.new","fiesta/ui/events/MouseEvent.hx",24,0x380fdbfd)
HX_LOCAL_STACK_FRAME(_hx_pos_8b77150230cbccad_35_dispatch,"fiesta.ui.events.MouseEvent","dispatch",0x08429c28,"fiesta.ui.events.MouseEvent.dispatch","fiesta/ui/events/MouseEvent.hx",35,0x380fdbfd)
namespace fiesta{
namespace ui{
namespace events{

void MouseEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8b77150230cbccad_24_new)
HXLINE(  25)		this->button = 0;
HXLINE(  26)		this->eventType = ::fiesta::ui::events::MouseEventType_obj::MOUSE_DOWN_dyn();
HXLINE(  27)		this->windowID = 0;
HXLINE(  28)		this->x = ((Float)0.0);
HXLINE(  29)		this->y = ((Float)0.0);
HXLINE(  30)		this->movementX = ((Float)0.0);
HXLINE(  31)		this->movementY = ((Float)0.0);
            	}

Dynamic MouseEvent_obj::__CreateEmpty() { return new MouseEvent_obj; }

void *MouseEvent_obj::_hx_vtable = 0;

Dynamic MouseEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MouseEvent_obj > _hx_result = new MouseEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MouseEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d06b4b0;
}

 ::Dynamic MouseEvent_obj::callback;

 ::fiesta::ui::events::MouseEvent MouseEvent_obj::eventObject;

void MouseEvent_obj::dispatch( ::fiesta::ui::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_8b77150230cbccad_35_dispatch)
HXDLIN(  35)		if (hx::IsNotNull( ::fiesta::ui::events::MouseEvent_obj::callback )) {
HXLINE(  36)			::fiesta::ui::events::MouseEvent_obj::eventObject = event;
HXLINE(  37)			::fiesta::ui::events::MouseEvent_obj::callback(event);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MouseEvent_obj,dispatch,(void))


hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__new() {
	hx::ObjectPtr< MouseEvent_obj > __this = new MouseEvent_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< MouseEvent_obj > MouseEvent_obj::__alloc(hx::Ctx *_hx_ctx) {
	MouseEvent_obj *__this = (MouseEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MouseEvent_obj), true, "fiesta.ui.events.MouseEvent"));
	*(void **)__this = MouseEvent_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MouseEvent_obj::MouseEvent_obj()
{
}

void MouseEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MouseEvent);
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(movementX,"movementX");
	HX_MARK_MEMBER_NAME(movementY,"movementY");
	HX_MARK_MEMBER_NAME(eventType,"eventType");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(windowID,"windowID");
	HX_MARK_END_CLASS();
}

void MouseEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(movementX,"movementX");
	HX_VISIT_MEMBER_NAME(movementY,"movementY");
	HX_VISIT_MEMBER_NAME(eventType,"eventType");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(windowID,"windowID");
}

hx::Val MouseEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return hx::Val( button ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { return hx::Val( windowID ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { return hx::Val( movementX ); }
		if (HX_FIELD_EQ(inName,"movementY") ) { return hx::Val( movementY ); }
		if (HX_FIELD_EQ(inName,"eventType") ) { return hx::Val( eventType ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MouseEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val MouseEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"movementX") ) { movementX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movementY") ) { movementY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventType") ) { eventType=inValue.Cast<  ::fiesta::ui::events::MouseEventType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MouseEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventObject") ) { eventObject=ioValue.Cast<  ::fiesta::ui::events::MouseEvent >(); return true; }
	}
	return false;
}

void MouseEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("button",f2,61,e0,d9));
	outFields->push(HX_("movementX",49,04,5d,30));
	outFields->push(HX_("movementY",4a,04,5d,30));
	outFields->push(HX_("eventType",f4,fb,15,fc));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("windowID",cb,af,cd,7d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo MouseEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MouseEvent_obj,button),HX_("button",f2,61,e0,d9)},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,movementX),HX_("movementX",49,04,5d,30)},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,movementY),HX_("movementY",4a,04,5d,30)},
	{hx::fsObject /*  ::fiesta::ui::events::MouseEventType */ ,(int)offsetof(MouseEvent_obj,eventType),HX_("eventType",f4,fb,15,fc)},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,x),HX_("x",78,00,00,00)},
	{hx::fsFloat,(int)offsetof(MouseEvent_obj,y),HX_("y",79,00,00,00)},
	{hx::fsInt,(int)offsetof(MouseEvent_obj,windowID),HX_("windowID",cb,af,cd,7d)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo MouseEvent_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::Dynamic */ ,(void *) &MouseEvent_obj::callback,HX_("callback",c5,99,06,7f)},
	{hx::fsObject /*  ::fiesta::ui::events::MouseEvent */ ,(void *) &MouseEvent_obj::eventObject,HX_("eventObject",79,ca,8c,68)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MouseEvent_obj_sMemberFields[] = {
	HX_("button",f2,61,e0,d9),
	HX_("movementX",49,04,5d,30),
	HX_("movementY",4a,04,5d,30),
	HX_("eventType",f4,fb,15,fc),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("windowID",cb,af,cd,7d),
	::String(null()) };

static void MouseEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MouseEvent_obj::callback,"callback");
	HX_MARK_MEMBER_NAME(MouseEvent_obj::eventObject,"eventObject");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MouseEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::callback,"callback");
	HX_VISIT_MEMBER_NAME(MouseEvent_obj::eventObject,"eventObject");
};

#endif

hx::Class MouseEvent_obj::__mClass;

static ::String MouseEvent_obj_sStaticFields[] = {
	HX_("callback",c5,99,06,7f),
	HX_("eventObject",79,ca,8c,68),
	HX_("dispatch",ba,ce,63,1e),
	::String(null())
};

void MouseEvent_obj::__register()
{
	MouseEvent_obj _hx_dummy;
	MouseEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("fiesta.ui.events.MouseEvent",c0,f8,fc,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MouseEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &MouseEvent_obj::__SetStatic;
	__mClass->mMarkFunc = MouseEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MouseEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MouseEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MouseEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MouseEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MouseEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MouseEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace fiesta
} // end namespace ui
} // end namespace events