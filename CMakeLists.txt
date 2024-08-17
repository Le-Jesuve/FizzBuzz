cmake_minimum_required(VERSION 3.16)

project(FizzBuzz LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(FizzBuzz FizzBuzz.cpp)

include(GNUInstallDirs)
install(TARGETS FizzBuzz
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
