#ifndef CB_LAYERIMGUI_HPP__
#define CB_LAYERIMGUI_HPP__

#include "Layer.hpp"
#include "../Events/EventMouse.hpp"
#include "../Events/EventKey.hpp"
#include "../Events/EventApplication.hpp"

namespace CylinderBank
{
    class LayerImGUI : public Layer
    {
        public:
            LayerImGUI();
            ~LayerImGUI();

            virtual void on_push() override;
            virtual void on_pop() override;
            virtual void on_update() override;
            virtual void on_event(Event &t_event) override;

        private:
            bool on_mouse_button_pressed(EventMouseButtonPressed &t_event);
            bool on_mouse_button_released(EventMouseButtonReleased &t_event);
            bool on_mousewheel_scrolled(EventMousewheelScrolled &t_event);
            bool on_mouse_moved(EventMouseMoved &t_event);
            bool on_key_pressed(EventKeyPressed &t_event);
            bool on_key_released(EventKeyReleased &t_event);
            bool on_key_typed(EventKeyTyped &t_event);
            bool on_window_resized(EventWindowResize &t_event);

            float time = 0.0f;
    };
}
#endif // CB_LAYERIMGUI_HPP__