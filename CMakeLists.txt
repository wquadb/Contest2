cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

# set(GTest_DIR "C:/Users/USERNAME/.../include/gtest")

# set(CMAKE_TOOLCHAIN_FILE "C:/Users/USERNAME/.../vcpkg.cmake"
#   CACHE STRING "Vcpkg toolchain file")

# include_directories("C:/Users/USERNAME/.../include")

project(task_A)

project(task_B)

# Set debug mode for CMake
set(CMAKE_BUILD_TYPE Debug)

project(task_C)

project(task_D)

project(task_E)

project(task_F)

add_executable(task_A taskA/main.cpp)

add_executable(task_B taskB/main.cpp)

add_executable(task_C taskC/main.cpp)

add_executable(task_D taskD/main.cpp)

add_executable(task_E taskE/main.cpp)

add_executable(task_F taskF/main.cpp)

# find_package(GTest REQUIRED)

# target_link_libraries(task_B PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)
