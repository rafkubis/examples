add_executable(
    crtp  
    main.cpp
)

target_link_libraries(
    crtp
    helpers
)

add_executable(
    crtp_ut
    ut.cpp)

target_link_libraries(
    crtp_ut
    gtest_main
    gmock_main
    helpers
)

gtest_discover_tests(crtp_ut)
