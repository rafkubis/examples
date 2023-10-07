#pragma once
#include <cstdlib>
#include <cxxabi.h>

namespace
{
template <typename T>
std::string demangle(const T& t)
{
    int status;
    auto realname = abi::__cxa_demangle(typeid(t).name(), NULL, NULL, &status);
    std::string result = realname;
    std::free(realname);
    return result;
}
} // namespace

namespace pretty
{
template <typename T>
std::string typeOf(const T& t)
{
    return demangle(t);
}
} // namespace pretty