#pragma once
#include "log.hpp"

// clang-format off
template <typename T>
concept HandlerInterface = requires(T v)
{
    { v.handle() } -> std::same_as<int>;
};
// clang-format on

class BasicHandler
{
  public:
    BasicHandler() { pretty::LOG(""); };
    int handle()
    {
        pretty::LOG("");
        return 1;
    };
};

class AdvancedHandler
{
  public:
    AdvancedHandler() { pretty::LOG(""); };
    int handle()
    {
        pretty::LOG("");
        return 2;
    };
};