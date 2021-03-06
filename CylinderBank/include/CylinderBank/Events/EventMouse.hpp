#ifndef CB_EVENT_MOUSE_HPP__
#define CB_EVENT_MOUSE_HPP__

#include "Event.hpp"

#include <cstdint>

namespace CylinderBank
{
    class EventMouseMoved : public Event
    {
        public:
            EventMouseMoved(const float t_x_position, const float t_y_position);

            inline float get_x() const { return x_position; }
            inline float get_y() const { return y_position; }

            virtual std::string to_string() const override;
            virtual int get_category_flags() const override;
			virtual EventType get_event_type() const override;
            static  EventType get_static_type();

        private:
            float x_position;
            float y_position;
    };

    class EventMousewheelScrolled : public Event
    {
        public:
            EventMousewheelScrolled(const float t_x_offset,
                                    const float t_y_offset);

            inline float get_x_offset() const { return x_offset; }
            inline float get_y_offset() const { return y_offset; }

            virtual std::string to_string() const override;
            virtual int get_category_flags() const override;
			virtual EventType get_event_type() const override;
            static  EventType get_static_type();

        private:
            float x_offset;
            float y_offset;
    };

    class EventMouseButton : public Event
    {
        public:
            inline  std::uint16_t get_keycode()   const { return keycode; }
            virtual int get_category_flags() const override;

        protected:
            explicit EventMouseButton(const std::uint16_t t_keycode);
            std::uint16_t keycode;
    };

    class EventMouseButtonPressed : public EventMouseButton
    {
        public:
            EventMouseButtonPressed(const std::uint16_t t_keycode,
                                    const bool t_repeated);

            inline bool is_repeated() const { return repeated; }

            virtual std::string to_string() const override;
            virtual EventType get_event_type()  const override;
            static  EventType get_static_type();

        private:
            bool repeated;
    };

    class EventMouseButtonReleased : public EventMouseButton
    {
        public:
            explicit EventMouseButtonReleased(const std::uint16_t t_keycode);

            virtual std::string to_string() const override;
            virtual EventType get_event_type()  const override;
            static  EventType get_static_type();
    };
}
#endif // CB_EVENT_MOUSE_HPP__
