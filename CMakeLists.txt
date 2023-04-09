cmake_minimum_required(VERSION 3.22)
#
#set(CMAKE_CXX_COMPILER "/usr/bin/g++-12")
#set(CMAKE_CXX_COMPILER "/usr/bin/clang++-16")
#
project(revisao-c-cpp-project LANGUAGES CXX VERSION 0.0.1)
#
set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)
#
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    SET(CMAKE_CXX_FLAGS "-stdlib=libc++")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  # using GCC
endif()

Include(FetchContent)

# ==================
# external libraries
# ------------------
# add_subdirectory(external/fmt-9.1.0)
FetchContent_Declare(fmt GIT_REPOSITORY https://github.com/fmtlib/fmt.git GIT_TAG 9.1.0)
FetchContent_MakeAvailable(fmt)
#
# add_subdirectory(external/scnlib-1.1.2)
FetchContent_Declare(scn GIT_REPOSITORY https://github.com/eliaskosunen/scnlib.git GIT_TAG v1.1.2)
FetchContent_MakeAvailable(scn)
# ===================
# header only library
# -------------------
add_library(revisao-c-cpp INTERFACE)
target_include_directories(revisao-c-cpp INTERFACE include/)
target_link_libraries(revisao-c-cpp INTERFACE fmt scn)
#
add_executable(aplicacao src/main.cpp)
target_link_libraries(aplicacao PRIVATE revisao-c-cpp fmt scn)

#==========
#  TESTS
#----------
# add_subdirectory(test/external/Catch2/)
FetchContent_Declare(Catch2 GIT_REPOSITORY https://github.com/catchorg/Catch2.git GIT_TAG v3.3.1)
FetchContent_MakeAvailable(Catch2)
#
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)
#
add_executable(my_test tests/teste.cpp)
target_link_libraries(my_test PRIVATE revisao-c-cpp Catch2::Catch2WithMain)
catch_discover_tests(my_test)

# MANUAL:
# target_link_libraries(my_test PUBLIC Catch2)
# enable_testing()
# add_test(NAME MeusTestes COMMAND my_test)
