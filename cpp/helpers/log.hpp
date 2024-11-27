#pragma once
#include <iostream>

namespace pretty
{
#define LOG_ENABLE 1
#define PRETTY_LOG 1

template <typename T>
void log(T t)
{
    std::cout << t;
}

void log(bool t) { std::cout << std::boolalpha << t; }

template <typename First, typename... T>
void log(First arg, T... args)
{
    log(arg);
    log(args...);
}

#if PRETTY_LOG and LOG_ENABLE
#define LOG(args...)                                                           \
    log(__FILE__, ":", __LINE__, " [", __PRETTY_FUNCTION__, "] ", args);       \
    std::cout << std::endl;
#elif LOG_ENABLE
#define LOG(args...)                                                           \
    log(__FILE__, ":", __LINE__, " ", args);                                   \
    std::cout << std::endl;
#else
#define LOG(args...)
#endif

#if LOG_ENABLE
#define LOG_NEW_LINE() std::cout << std::endl;
#else
#define LOG_NEW_LINE()
#endif
} // namespace pretty
