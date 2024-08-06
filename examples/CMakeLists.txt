cmake_minimum_required(VERSION 3.28)
project(cv-example)

set(CMAKE_CXX_STANDARD 17)

target_include_directories(cv PUBLIC ${CV_INCLUDE_DIR})

# Create the executable
add_executable(example base.cpp)

# Link the executable with the library
target_link_libraries(example cv nlohmann_json::nlohmann_json)