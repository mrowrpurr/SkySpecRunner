cmake_minimum_required(VERSION 3.21)

project(SkySpecRunner VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(websocketpp CONFIG REQUIRED)

add_library(SkySpecRunner INTERFACE include/SkySpec/Runner.h include/SkySpec/WebSocketClient.h)
target_link_libraries(SkySpecRunner INTERFACE websocketpp::websocketpp)

add_library(SkySpecRunner_main src/main.cpp)
target_include_directories(SkySpecRunner_main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/)
target_link_libraries(SkySpecRunner_main PRIVATE SkySpecRunner websocketpp::websocketpp)

# add option for installing this one... not by default!
add_executable(TestSkySpecRunner test/test.cpp)
target_link_libraries(TestSkySpecRunner SkySpecRunner SkySpecRunner_main)
