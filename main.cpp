#include "crtp.hpp"
#include "manager.hpp"
#include <iostream>

int main(void)
{
    BasicHandler done;
    done.handle();

    AdvancedHandler run;
    run.handle();

    HandlerInterface<AdvancedHandler> runStaticInterface;
    runStaticInterface.handle();

    std::cout << typeid(done).name() << std::endl;
    std::cout << typeid(run).name() << std::endl;
    std::cout << typeid(runStaticInterface).name() << std::endl;

    Manager manager1{done};
    manager1.handle();


    Manager manager2{run};
    manager2.handle();

    Manager manager3{runStaticInterface};
    manager3.handle();

    std::cout << typeid(manager1).name() << std::endl;
    std::cout << typeid(manager2).name() << std::endl;
    std::cout << typeid(manager3).name() << std::endl;
}
