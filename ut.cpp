#include "crtp.hpp"
#include "manager.hpp"
#include "mock.hpp"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

TEST(ut, ShallFail)
{
    testing::StrictMock<HandlerMock> HandlerMock;
    Manager<HandlerMock> manager{handlerMock};
    
    EXPECT_CALL(handlerMock, handle());

    manager.handle();
    std::cout << typeid(manager).name() << std::endl;
}
