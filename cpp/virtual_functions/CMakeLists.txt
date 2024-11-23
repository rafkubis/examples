add_executable(
    virtual_functions  
    main.cpp
)

target_link_libraries(
    virtual_functions
    helpers
)

add_executable(
    virtual_functions_ut
    ut.cpp)

target_link_libraries(
    virtual_functions_ut
    gtest_main
    gmock_main
    helpers
)

gtest_discover_tests(virtual_functions_ut)