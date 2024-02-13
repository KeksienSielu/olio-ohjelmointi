cmake_minimum_required(VERSION 3.5)

project(Teht4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Teht4 main.cpp
    asunto.h asunto.cpp
    kerros.h kerros.cpp
    katutaso.h katutaso.cpp
    kerrostalo.h kerrostalo.cpp

)

include(GNUInstallDirs)
install(TARGETS Teht4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
