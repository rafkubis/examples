add_executable(
    templated  
    main.cpp
)

target_link_libraries(
    templated
    helpers
)

add_executable(
    templated_ut
    ut.cpp)

target_link_libraries(
        templated_ut
        gtest_main
        gmock_main
        helpers
)

gtest_discover_tests(templated_ut)