#pragma once

template <typename T>
struct Manager
{
    Manager(T& handler) : handler{handler}
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
    void handle() { handler.handle(); }

T& handler;
};