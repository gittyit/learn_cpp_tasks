cmake_minimum_required(VERSION 3.10.0)
project(learn_cpp_tasks VERSION 0.1.0 LANGUAGES C CXX)

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git
                         GIT_TAG 1.12.0)
FetchContent_MakeAvailable(cpr)


set(BUILD_CPR_TESTS OFF)

add_executable(learn_cpp_tasks main.cpp)

target_link_libraries(learn_cpp_tasks PRIVATE cpr::cpr)