#pragma once
#include "handler.hpp"

struct Manager
{
    Manager(HandlerInterface& handler) : handler{handler} { pretty::LOG(""); }
    void handle() { handler.handle(); }

    HandlerInterface& handler;
};