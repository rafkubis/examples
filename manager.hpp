#pragma once
#include "crtp.hpp"

template <typename T>
struct Manager
{
    Manager(T& doner) : doner{doner} {std::cout << __PRETTY_FUNCTION__ << std::endl;}
    void handle() { doner.handle(); }

    T& doner;
};

template <class T>
Manager(T) -> Manager<T>;