// Generated by Haxe 4.0.0-rc.2+77068e1
#ifndef INCLUDED_fiesta_ui_events_KeyEventType
#define INCLUDED_fiesta_ui_events_KeyEventType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(fiesta,ui,events,KeyEventType)
namespace fiesta{
namespace ui{
namespace events{


class KeyEventType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef KeyEventType_obj OBJ_;

	public:
		KeyEventType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("fiesta.ui.events.KeyEventType",20,7c,5b,59); }
		::String __ToString() const { return HX_("KeyEventType.",19,34,e3,d6) + _hx_tag; }

		static ::fiesta::ui::events::KeyEventType KEY_DOWN;
		static inline ::fiesta::ui::events::KeyEventType KEY_DOWN_dyn() { return KEY_DOWN; }
		static ::fiesta::ui::events::KeyEventType KEY_UP;
		static inline ::fiesta::ui::events::KeyEventType KEY_UP_dyn() { return KEY_UP; }
};

} // end namespace fiesta
} // end namespace ui
} // end namespace events

#endif /* INCLUDED_fiesta_ui_events_KeyEventType */ 