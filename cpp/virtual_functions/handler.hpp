#pragma once
#include "log.hpp"

class HandlerInterface
{
  public:
    virtual int handle() = 0;
};

class BasicHandler : public HandlerInterface
{
  public:
    BasicHandler() { pretty::LOG(""); };
    int handle()
    {
        pretty::LOG("");
        return 1;
    };
};

class AdvancedHandler : public HandlerInterface
{
  public:
    AdvancedHandler() { pretty::LOG(""); };
    int handle()
    {
        pretty::LOG("");
        return 2;
    };
};