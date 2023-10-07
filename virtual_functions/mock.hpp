#include "crtp.hpp"
#include "gmock/gmock.h"

struct HandlerMock : HandlerInterface
{
    MOCK_METHOD(int, handle, ());
};
