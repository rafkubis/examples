#include "gmock/gmock.h"

struct HandlerMock
{
    MOCK_METHOD(int, handle, ());
};
