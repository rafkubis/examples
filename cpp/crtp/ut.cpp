#include "handler.hpp"
#include "manager.hpp"
#include "mock.hpp"
#include "pretty.hpp"
#include "gmock/gmock.h"
#include "gtest/gtest.h"

using namespace pretty;

TEST(ut, ShallPass)
{
    testing::StrictMock<HandlerMock> handlerMock;
    LOG(typeOf(handlerMock));

    Manager sut{handlerMock};
    LOG(typeOf(sut));

    EXPECT_CALL(handlerMock, handle()).Times(1);

    sut.handle();
}
