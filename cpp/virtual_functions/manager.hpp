#pragma once
#include "handler.hpp"

struct Manager
{
    Manager(HandlerInterface& handler) : handler{handler}
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    void handle() { handler.handle(); }

    HandlerInterface& handler;
};