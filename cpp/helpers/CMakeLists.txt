add_library(
    helpers 
    INTERFACE
    pretty.hpp
    log.hpp
)

target_include_directories(
    helpers
    INTERFACE
    .
)