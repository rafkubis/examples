#include "handler.hpp"
#include "gmock/gmock.h"

struct HandlerMock : HandlerInterface<HandlerMock>
{
    MOCK_METHOD(int, handle, ());
};
