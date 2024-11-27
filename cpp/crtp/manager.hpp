#pragma once
#include "handler.hpp"

template <typename T>
struct Manager
{
    Manager(HandlerInterface<T>& handler) : handler{handler}
    {
        pretty::LOG("");
    }
    void handle() { handler.handle(); }

    HandlerInterface<T>& handler;
};