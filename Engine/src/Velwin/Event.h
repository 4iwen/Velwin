#pragma once

namespace Velwin {
    class Event {
    public:
        virtual ~Event() = default;

        bool Handled = false;
    };
}