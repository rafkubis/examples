add_executable(
    virtual_functions  
    main.cpp
)
target_include_directories(virtual_functions PUBLIC . ../helpers)

add_executable(
    virtual_functions_ut
    ut.cpp)
target_include_directories(virtual_functions_ut PUBLIC ../helpers)
target_link_libraries(
        virtual_functions_ut
        gtest_main
        gmock_main
)
gtest_discover_tests(virtual_functions_ut)