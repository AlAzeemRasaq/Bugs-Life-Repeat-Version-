cmake_minimum_required(VERSION 3.27)
project(CA2_AlAzeemAbdulRasaq_BugsLifeProject)

set(CMAKE_CXX_STANDARD 23)

add_executable(CA2_AlAzeemAbdulRasaq_BugsLifeProject main.cpp
        Bug.h
        Bug.cpp
        CrawlerBug.cpp
        CrawlerBug.h
        HopperBug.cpp
        HopperBug.h
        Board.cpp
        Board.h
)

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML-2.6.1/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)

include_directories(C:/SFML-2.6.1/include)
target_link_libraries(CA2_AlAzeemAbdulRasaq_BugsLifeProject sfml-system sfml-window sfml-graphics sfml-audio)