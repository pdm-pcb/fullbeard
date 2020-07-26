#ifndef CB_LAYER_HPP__
#define CB_LAYER_HPP__

#include "../Events/Event.hpp"

#include <string>

namespace CylinderBank
{
    class Layer
    {
        public:
            Layer(const std::string &t_name = "Layer");
            virtual ~Layer();

            virtual void on_push();
            virtual void on_pop();
            virtual void on_update();

            virtual void on_event(Event &t_event);

            inline const std::string& get_name() const { return debug_name; }

        protected:
            std::string debug_name;
    };
}

#endif // CB_LAYER_HPP__