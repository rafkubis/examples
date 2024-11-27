#pragma once
#include "log.hpp"

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