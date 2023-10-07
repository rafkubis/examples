#pragma once
#include "handler.hpp"

template <HandlerInterface Handler>
struct Manager
{
    Manager(Handler& handler) : handler{handler}
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    void handle() { handler.handle(); }

    Handler& handler;
};