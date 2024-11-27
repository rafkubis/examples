#pragma once
#include "handler.hpp"

template <HandlerInterface Handler>
struct Manager
{
    Manager(Handler& handler) : handler{handler} { pretty::LOG(""); }
    void handle() { handler.handle(); }

    Handler& handler;
};