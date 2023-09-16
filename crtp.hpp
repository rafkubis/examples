#pragma once
#include <iostream>

template <typename Derived>
class HandlerInterface
{
  public:
    HandlerInterface(){std::cout << __PRETTY_FUNCTION__ << std::endl;};
    int handle()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return static_cast<Derived&>(*this).handle();
    };
};

class BasicHandler : public HandlerInterface<BasicHandler>
{
  public:
  BasicHandler(){std::cout << __PRETTY_FUNCTION__ << std::endl;};
    int handle()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return 1;
    };
};

class AdvancedHandler : public HandlerInterface<AdvancedHandler>
{
  public:
    AdvancedHandler(){std::cout << __PRETTY_FUNCTION__ << std::endl;};
    int handle()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return 2;
    };
};