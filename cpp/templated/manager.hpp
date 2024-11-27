#pragma once
#include "log.hpp"

template <typename T>
struct Manager
{
    Manager(T& handler) : handler{handler} { pretty::LOG(""); }
    void handle() { handler.handle(); }

    T& handler;
};