cmake_minimum_required(VERSION 3.10.0)
project(DSA VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
    add_compile_options(
        -Wall -Wextra -Wpedantic
        -Wshadow
        -Wconversion -Wsign-conversion
    )

    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        add_compile_options(
            -fsanitize=address,undefined
            -fno-omit-frame-pointer
        )
        add_link_options(
            -fsanitize=address,undefined
        )
    endif()
endif()

add_subdirectory(concepts)