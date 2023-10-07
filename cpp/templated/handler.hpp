#pragma once
#include <iostream>

class BasicHandler
{
  public:
    BasicHandler() { std::cout << __PRETTY_FUNCTION__ << std::endl; };
    int handle()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return 1;
    };
};

class AdvancedHandler
{
  public:
    AdvancedHandler() { std::cout << __PRETTY_FUNCTION__ << std::endl; };
    int handle()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
        return 2;
    };
};