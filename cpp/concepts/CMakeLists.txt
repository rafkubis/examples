add_executable(
    concepts  
    main.cpp
)

target_include_directories(concepts PUBLIC . ../helpers)

add_executable(
    concepts_ut
    ut.cpp)

target_include_directories(concepts_ut PUBLIC ../helpers)


target_link_libraries(
    concepts_ut
        gtest_main
        gmock_main
)

gtest_discover_tests(concepts_ut)
