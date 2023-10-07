#include "crtp.hpp"
#include "manager.hpp"
#include "pretty.hpp"
#include <iostream>
#include <memory>

int main(void)
{
    BasicHandler basicHandler;
    basicHandler.handle();

    AdvancedHandler advancedHandler;
    advancedHandler.handle();

    std::unique_ptr<AdvancedHandler> interfaceWithAdvancedHandler = std::make_unique<AdvancedHandler>();
    interfaceWithAdvancedHandler->handle();

    std::cout << pretty::typeOf(basicHandler) << std::endl;
    std::cout << pretty::typeOf(advancedHandler) << std::endl;
    std::cout << pretty::typeOf(interfaceWithAdvancedHandler)
              << std::endl;

    Manager manager1{basicHandler};
    manager1.handle();

    Manager manager2{advancedHandler};
    manager2.handle();

    Manager manager3{*interfaceWithAdvancedHandler};
    manager3.handle();

    std::cout << pretty::typeOf(manager1) << std::endl;
    std::cout << pretty::typeOf(manager2) << std::endl;
    std::cout << pretty::typeOf(manager3) << std::endl;
}
