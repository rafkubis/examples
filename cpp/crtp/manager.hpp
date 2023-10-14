#pragma once
#include "handler.hpp"

template <typename T>
struct Manager
{
    Manager(HandlerInterface<T>& handler) : handler{handler}
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    void handle() { handler.handle(); }

    HandlerInterface<T>& handler;
};