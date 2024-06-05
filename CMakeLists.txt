cmake_minimum_required(VERSION 3.22)

project(myproject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# get googletest
include(FetchContent)
FetchContent_Declare(googletest
                    GIT_REPOSITORY https://github.com/google/googletest
                    GIT_TAG release-1.12.1
                    )
FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BUILD_DIR})
endif()

enable_testing()

add_subdirectory(src)

