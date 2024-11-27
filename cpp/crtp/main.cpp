#include "handler.hpp"
#include "manager.hpp"
#include "pretty.hpp"

using namespace pretty;

int main(void)
{
    BasicHandler basicHandler;
    basicHandler.handle();

    AdvancedHandler advancedHandler;
    advancedHandler.handle();

    HandlerInterface<AdvancedHandler> staticInterfaceWithAdvancedHandler;
    staticInterfaceWithAdvancedHandler.handle();

    LOG(typeOf(basicHandler));
    LOG(typeOf(advancedHandler));
    LOG(typeOf(staticInterfaceWithAdvancedHandler));

    Manager manager1{basicHandler};
    manager1.handle();

    Manager manager2{advancedHandler};
    manager2.handle();

    Manager manager3{staticInterfaceWithAdvancedHandler};
    manager3.handle();

    LOG(typeOf(manager1));
    LOG(typeOf(manager2));
    LOG(typeOf(manager3));
}
