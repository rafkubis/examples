#include "handler.hpp"
#include "manager.hpp"
#include "pretty.hpp"
#include <iostream>

int main(void)
{
    BasicHandler basicHandler;
    basicHandler.handle();

    AdvancedHandler advancedHandler;
    advancedHandler.handle();

    std::cout << pretty::typeOf(basicHandler) << std::endl;
    std::cout << pretty::typeOf(advancedHandler) << std::endl;

    Manager manager1{basicHandler};
    manager1.handle();

    Manager manager2{advancedHandler};
    manager2.handle();

    std::cout << pretty::typeOf(manager1) << std::endl;
    std::cout << pretty::typeOf(manager2) << std::endl;
}
