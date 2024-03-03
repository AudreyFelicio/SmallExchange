cmake_minimum_required(VERSION 3.28)
project(SmallExchange)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

FetchContent_Declare(Crow
    GIT_REPOSITORY git@github.com:CrowCpp/Crow.git
    GIT_TAG v1.1.0
)

FetchContent_MakeAvailable(Crow)

add_executable(SmallExchange main.cpp)
target_link_libraries(SmallExchange PUBLIC Crow::Crow)
