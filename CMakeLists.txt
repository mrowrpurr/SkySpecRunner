cmake_minimum_required(VERSION 3.21)

project(SkySpecRunner VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# find_package(websocketpp CONFIG REQUIRED)

add_library(SkySpecRunner src/main.cpp)
target_compile_features(SkySpecRunner PRIVATE cxx_std_23)

# option BUILD_EXE
# add_executable(SkyUnitTestExample src/main.cpp)
# target_link_libraries(SkyUnitTestExample PRIVATE websocketpp::websocketpp)

# else ADD LIBRARY
