#include "Fullbeard/Events/EventApplication.hpp"

#include "fullbeard_pch.hpp"

namespace Fullbeard
{
//##############################################################################
// class Fullbeard::EventWindowResize

    EventWindowResize::EventWindowResize(const uint16_t t_width,
                                         const uint16_t t_height):
    width(t_width),
    height(t_height)
    { }

    std::string EventWindowResize::to_string() const
    {
        std::stringstream ss;
        ss << "EventWindowResize: " << width << "x" << height;
        return ss.str();
    }

    int EventWindowResize::get_category_flags() const
    {
        return EventCategoryApplication;
    }

    EventType EventWindowResize::get_event_type() const
    {
        return get_static_type();
    }

    EventType EventWindowResize::get_static_type()
    {
        return EventType::WindowResize;
    }

//##############################################################################
// class Fullbeard::EventWindowClose

    EventWindowClose::EventWindowClose()
    { }

    std::string EventWindowClose::to_string() const
    {
        return "Window closed!";
    }

    int EventWindowClose::get_category_flags() const
    {
        return EventCategoryApplication;
    }

    EventType EventWindowClose::get_event_type() const
    {
        return get_static_type();
    }

    EventType EventWindowClose::get_static_type()
    {
        return EventType::WindowClose;
    }

//##############################################################################
// class Fullbeard::EventApplicationTick

    EventApplicationTick::EventApplicationTick()
    { }

    int EventApplicationTick::get_category_flags() const
    {
        return EventCategoryApplication;
    }

    EventType EventApplicationTick::get_event_type() const
    {
        return get_static_type();
    }

    EventType EventApplicationTick::get_static_type()
    {
        return EventType::AppTick;
    }

//##############################################################################
// class Fullbeard::EventApplicationUpdate

    EventApplicationUpdate::EventApplicationUpdate()
    { }

    int EventApplicationUpdate::get_category_flags() const
    {
        return EventCategoryApplication;
    }

    EventType EventApplicationUpdate::get_event_type() const
    {
        return get_static_type();
    }

    EventType EventApplicationUpdate::get_static_type()
    {
        return EventType::AppUpdate;
    }

//##############################################################################
// class Fullbeard::EventApplicationRender

    EventApplicationRender::EventApplicationRender()
    { }

    int EventApplicationRender::get_category_flags() const
    {
        return EventCategoryApplication;
    }

    EventType EventApplicationRender::get_event_type() const
    {
        return get_static_type();
    }

    EventType EventApplicationRender::get_static_type()
    {
        return EventType::AppRender;
    }
}