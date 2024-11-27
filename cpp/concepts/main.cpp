#include "handler.hpp"
#include "manager.hpp"
#include "pretty.hpp"
#include <iostream>

using namespace pretty;

int main(void)
{
    BasicHandler basicHandler;
    basicHandler.handle();

    AdvancedHandler advancedHandler;
    advancedHandler.handle();

    LOG(typeOf(basicHandler));
    LOG(typeOf(advancedHandler));

    Manager manager1{basicHandler};
    manager1.handle();

    Manager manager2{advancedHandler};
    manager2.handle();

    LOG(typeOf(manager1));
    LOG(typeOf(manager2));
}
