add_library(
    helpers 
    INTERFACE
    pretty.hpp
)

target_include_directories(
    helpers
    INTERFACE
    .
)