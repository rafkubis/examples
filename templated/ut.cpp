#include "handler.hpp"
#include "manager.hpp"
#include "mock.hpp"
#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "pretty.hpp"

TEST(ut, ShallFail)
{
    testing::StrictMock<HandlerMock> handlerMock;
    std::cout << pretty::typeOf(handlerMock) << std::endl;

    Manager sut{handlerMock};

    EXPECT_CALL(handlerMock, handle()).Times(2);

    sut.handle();
    std::cout << pretty::typeOf(sut) << std::endl;
}

TEST(ut, ShallPass)
{
    testing::StrictMock<HandlerMock> handlerMock;
    std::cout << pretty::typeOf(handlerMock) << std::endl;

    Manager sut{handlerMock};

    EXPECT_CALL(handlerMock, handle()).Times(1);

    sut.handle();
    std::cout << pretty::typeOf(sut) << std::endl;
}
