cmake_minimum_required(VERSION 3.29)
project(qtTEST)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "/home/radamir/Qt/6.8.2/gcc_64/lib/cmake/")


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(FORMS
        mainwindow.ui
)
add_executable(qtTEST main.cpp mainwindow.cpp taskWindow.cpp task170Window.cpp task182Window.cpp
                 task194Window.cpp logger.cpp)
target_link_libraries(qtTEST
        Qt::Core
        Qt::Gui
        Qt::Widgets stdc++
)

