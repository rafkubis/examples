add_executable(
    concepts  
    main.cpp
)

target_link_libraries(
    concepts
    helpers
)

add_executable(
    concepts_ut
    ut.cpp)

target_link_libraries(
    concepts_ut
    gtest_main
    gmock_main
    helpers
)

gtest_discover_tests(concepts_ut)
