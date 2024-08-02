add_executable(
    crtp_main  
    main.cpp
)

target_include_directories(crtp_main PUBLIC . ../helpers)

add_executable(
    crtp_ut
    ut.cpp)

target_include_directories(crtp_ut PUBLIC ../helpers)


target_link_libraries(
    crtp_ut
    gtest_main
    gmock_main
)

gtest_discover_tests(crtp_ut)
