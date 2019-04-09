// Generated by Haxe 4.0.0-rc.2+77068e1
#include <hxcpp.h>

#ifndef INCLUDED_fiesta_ui_events_TextEvent
#include <fiesta/ui/events/TextEvent.h>
#endif
#ifndef INCLUDED_fiesta_ui_events_TextEventType
#include <fiesta/ui/events/TextEventType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1f5df64bfc76bf38_20_new,"fiesta.ui.events.TextEvent","new",0xe2404f74,"fiesta.ui.events.TextEvent.new","fiesta/ui/events/TextEvent.hx",20,0xa70b455d)
HX_LOCAL_STACK_FRAME(_hx_pos_1f5df64bfc76bf38_28_dispatch,"fiesta.ui.events.TextEvent","dispatch",0x16ee2726,"fiesta.ui.events.TextEvent.dispatch","fiesta/ui/events/TextEvent.hx",28,0xa70b455d)
namespace fiesta{
namespace ui{
namespace events{

void TextEvent_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1f5df64bfc76bf38_20_new)
HXLINE(  21)		this->length = 0;
HXLINE(  22)		this->start = 0;
HXLINE(  23)		const char* this1 = HX_("",00,00,00,00).__s;
HXDLIN(  23)		this->text = this1;
HXLINE(  24)		this->windowID = 0;
            	}

Dynamic TextEvent_obj::__CreateEmpty() { return new TextEvent_obj; }

void *TextEvent_obj::_hx_vtable = 0;

Dynamic TextEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextEvent_obj > _hx_result = new TextEvent_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextEvent_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x086cd792;
}

 ::fiesta::ui::events::TextEvent TextEvent_obj::eventObject;

 ::Dynamic TextEvent_obj::callback;

void TextEvent_obj::dispatch( ::fiesta::ui::events::TextEvent event){
            	HX_STACKFRAME(&_hx_pos_1f5df64bfc76bf38_28_dispatch)
HXDLIN(  28)		if (hx::IsNotNull( ::fiesta::ui::events::TextEvent_obj::callback )) {
HXLINE(  29)			::fiesta::ui::events::TextEvent_obj::eventObject = event;
HXLINE(  30)			if (hx::IsEq( event->eventType,::fiesta::ui::events::TextEventType_obj::TEXT_INPUT_dyn() )) {
HXLINE(  31)				::fiesta::ui::events::TextEvent_obj::eventObject->length = 0;
HXLINE(  32)				::fiesta::ui::events::TextEvent_obj::eventObject->start = 0;
            			}
HXLINE(  35)			::fiesta::ui::events::TextEvent_obj::callback(event);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TextEvent_obj,dispatch,(void))


TextEvent_obj::TextEvent_obj()
{
}

void TextEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEvent);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(windowID,"windowID");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(eventType,"eventType");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_END_CLASS();
}

void TextEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(windowID,"windowID");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(eventType,"eventType");
	HX_VISIT_MEMBER_NAME(text,"text");
}

hx::Val TextEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { return hx::Val( windowID ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventType") ) { return hx::Val( eventType ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val TextEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"eventType") ) { eventType=inValue.Cast<  ::fiesta::ui::events::TextEventType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventObject") ) { eventObject=ioValue.Cast<  ::fiesta::ui::events::TextEvent >(); return true; }
	}
	return false;
}

void TextEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("windowID",cb,af,cd,7d));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("eventType",f4,fb,15,fc));
	outFields->push(HX_("text",ad,cc,f9,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo TextEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TextEvent_obj,id),HX_("id",db,5b,00,00)},
	{hx::fsInt,(int)offsetof(TextEvent_obj,windowID),HX_("windowID",cb,af,cd,7d)},
	{hx::fsInt,(int)offsetof(TextEvent_obj,start),HX_("start",62,74,0b,84)},
	{hx::fsInt,(int)offsetof(TextEvent_obj,length),HX_("length",e6,94,07,9f)},
	{hx::fsObject /*  ::fiesta::ui::events::TextEventType */ ,(int)offsetof(TextEvent_obj,eventType),HX_("eventType",f4,fb,15,fc)},
	{hx::fsUnknown /* const char* */ ,(int)offsetof(TextEvent_obj,text),HX_("text",ad,cc,f9,4c)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TextEvent_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*  ::fiesta::ui::events::TextEvent */ ,(void *) &TextEvent_obj::eventObject,HX_("eventObject",79,ca,8c,68)},
	{hx::fsObject /*  ::Dynamic */ ,(void *) &TextEvent_obj::callback,HX_("callback",c5,99,06,7f)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TextEvent_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("windowID",cb,af,cd,7d),
	HX_("start",62,74,0b,84),
	HX_("length",e6,94,07,9f),
	HX_("eventType",f4,fb,15,fc),
	::String(null()) };

static void TextEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextEvent_obj::eventObject,"eventObject");
	HX_MARK_MEMBER_NAME(TextEvent_obj::callback,"callback");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextEvent_obj::eventObject,"eventObject");
	HX_VISIT_MEMBER_NAME(TextEvent_obj::callback,"callback");
};

#endif

hx::Class TextEvent_obj::__mClass;

static ::String TextEvent_obj_sStaticFields[] = {
	HX_("eventObject",79,ca,8c,68),
	HX_("callback",c5,99,06,7f),
	HX_("dispatch",ba,ce,63,1e),
	::String(null())
};

void TextEvent_obj::__register()
{
	TextEvent_obj _hx_dummy;
	TextEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("fiesta.ui.events.TextEvent",82,c5,26,ee);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &TextEvent_obj::__SetStatic;
	__mClass->mMarkFunc = TextEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TextEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TextEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace fiesta
} // end namespace ui
} // end namespace events