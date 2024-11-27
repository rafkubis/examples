#pragma once
#include "log.hpp"

template <typename Derived>
class HandlerInterface
{
  public:
    HandlerInterface() { pretty::LOG(""); };
    int handle()
    {
        pretty::LOG("");
        return static_cast<Derived&>(*this).handle();
    };
};

class BasicHandler : public HandlerInterface<BasicHandler>
{
  public:
    BasicHandler() { pretty::LOG(""); };
    int handle()
    {
        pretty::LOG("");
        return 1;
    };
};

class AdvancedHandler : public HandlerInterface<AdvancedHandler>
{
  public:
    AdvancedHandler() { pretty::LOG(""); };
    int handle()
    {
        pretty::LOG("");
        return 2;
    };
};