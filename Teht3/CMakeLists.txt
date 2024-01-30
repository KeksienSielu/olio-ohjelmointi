cmake_minimum_required(VERSION 3.5)

project(Teht3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Teht3 main.cpp
    chef.h chef.cpp)

include(GNUInstallDirs)
install(TARGETS Teht3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
