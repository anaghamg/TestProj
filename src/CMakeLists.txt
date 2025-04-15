cmake_minimum_required(VERSION 3.25)

project(Length)

# Set C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable automoc/uic/rcc
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Find Qt5
find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets)

# Add sources and headers
set(SOURCES
    main.cpp
    mainwindow.cpp
)

set(HEADERS
    mainwindow.h
)

# Add executable
add_executable(Length
    ${SOURCES}
    ${HEADERS}
)

# Link Qt libraries
target_link_libraries(Length
    PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
)
