cmake_minimum_required(VERSION 3.9)

project(Proyecto_1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_PREFIX_PATH "/home/kisung/Qt5.7.0/5.7/gcc_64/") #Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package( Qt5Core REQUIRED )
find_package( Qt5Widgets REQUIRED )
find_package( Qt5Network REQUIRED )
find_package( Qt5PrintSupport REQUIRED )
find_package( Qt5Sql REQUIRED )
find_package( Qt5Xml REQUIRED )
find_package( Qt5OpenGL REQUIRED )

include_directories(/home/kisung/include)

find_package(Boost REQUIRED)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
LINK_DIRECTORIES(${Boost_LIBRARY_DIRS})
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
set(BOOST_ALL_DYN_LINK ON)

set(QT5_LIBRARIES Qt5::Core Qt5::Widgets Qt5::Network Qt5::PrintSupport Qt5::Sql Qt5::Xml Qt5::OpenGL)

set(Proyecto_1 ${CMAKE_PROJECT_NAME})

set(SOURCES
        main.cpp
        GUI/mainwindow.cpp
        GUI/mainwindow.h
        GUI/codeeditor.cpp
        GUI/codeeditor.h
        GUI/highlighter.cpp
        GUI/highlighter.h
        Parser/tokens.cpp
        Parser/tokens.h
        Parser/Parser.h
        Parser/Parser.cpp
        Client/Client.h
        Client/Client.cpp)

set(UI_SOURCES
        GUI/mainwindow.ui
        )

qt5_wrap_ui(UI_GERERATED_HEADERS ${UI_SOURCES})

add_executable(${Proyecto_1} ${SOURCES} ${UI_GENERATED_HEADERS})

target_link_libraries(${Proyecto_1} ${QT5_LIBRARIES})

find_package(Threads)
target_link_libraries(Proyecto_1 ${CMAKE_THREAD_LIBS_INIT}) # For pthreads
target_link_libraries(Proyecto_1 dl) # For ldl

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES}) # for parser