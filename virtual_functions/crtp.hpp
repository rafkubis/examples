#pragma once
#include <iostream>

class HandlerInterface
{
  public:
   virtual int handle() = 0;
};

class BasicHandler : public HandlerInterface
{
  public:
    BasicHandler() { std::cout << __PRETTY_FUNCTION__ << std::endl; };
    int handle()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return 1;
    };
};

class AdvancedHandler : public HandlerInterface
{
  public:
    AdvancedHandler() { std::cout << __PRETTY_FUNCTION__ << std::endl; };
    int handle()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return 2;
    };
};