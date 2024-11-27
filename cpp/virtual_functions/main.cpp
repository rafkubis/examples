#include "handler.hpp"
#include "log.hpp"
#include "manager.hpp"
#include "pretty.hpp"
#include <memory>

using namespace pretty;

int main(void)
{
    BasicHandler basicHandler;
    basicHandler.handle();

    AdvancedHandler advancedHandler;
    advancedHandler.handle();

    std::unique_ptr<AdvancedHandler> interfaceWithAdvancedHandler =
        std::make_unique<AdvancedHandler>();
    interfaceWithAdvancedHandler->handle();

    LOG(typeOf(basicHandler));
    LOG(typeOf(advancedHandler));
    LOG(typeOf(interfaceWithAdvancedHandler));

    Manager manager1{basicHandler};
    manager1.handle();

    Manager manager2{advancedHandler};
    manager2.handle();

    Manager manager3{*interfaceWithAdvancedHandler};
    manager3.handle();

    LOG(typeOf(manager1));
    LOG(typeOf(manager2));
    LOG(typeOf(manager3));
}
