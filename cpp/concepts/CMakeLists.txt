cmake_minimum_required(VERSION 3.5)

project(ProjectName)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(crtp)
include(FetchContent)
FetchContent_Declare(
googletest
URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)

include(CTest)
include(GoogleTest)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(
    main  
    main.cpp
)

target_include_directories(main PUBLIC . ../helpers)

add_executable(
    ut
    ut.cpp)

target_include_directories(ut PUBLIC ../helpers)


target_link_libraries(
        ut
        gtest_main
        gmock_main
)

gtest_discover_tests(ut)
