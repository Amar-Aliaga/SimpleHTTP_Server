# Minimum CMake version
cmake_minimum_required(VERSION 3.10)

# Project name
project(Networking)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories for header files
include_directories(Networking/Sockets Networking/Servers)

# Add source files
set(SOURCES
    solib.cpp
    Networking/Servers/TestServer.cpp
    Networking/Servers/SimpleServer.cpp
    Networking/Sockets/SimpleSocket.cpp
    Networking/Sockets/ListeningSocket.cpp
    Networking/Sockets/BindingSocket.cpp
)

# Create the executable
add_executable(server ${SOURCES})