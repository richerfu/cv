cmake_minimum_required(VERSION 3.28)
project(cv)

set(CMAKE_CXX_STANDARD 17)

set(CV_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

find_package(nlohmann_json REQUIRED)

add_library(cv STATIC src/validator/string_validator.h
        src/common/result.h
        src/common/error.h
        src/common/context.h
        src/base/base.h
        src/cv.h
        src/utils/util.h
        src/cv.cpp)

add_subdirectory(examples)