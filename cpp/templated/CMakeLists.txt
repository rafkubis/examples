add_executable(
    templated  
    main.cpp
)

target_include_directories(templated PUBLIC . ../helpers)

add_executable(
    templated_ut
    ut.cpp)

target_include_directories(templated_ut PUBLIC ../helpers)

target_link_libraries(
        templated_ut
        gtest_main
        gmock_main
)

gtest_discover_tests(templated_ut)