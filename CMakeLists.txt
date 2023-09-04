# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.15)

# Define the project name
project(RPGGame)

# Set the C++ standard and require it
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Lists of source and header files
set(SOURCES
    main.cpp
    character.cpp
    player.cpp
    player_classes.cpp
    monster.cpp
    ui_functions.cpp
    combat_system.cpp
)

set(HEADERS
    character.h
    player.h
    player_classes.h
    monster.h
    ui_functions.h
    combat_system.h
)

# Add the source files to the project
add_executable(RPGGame ${SOURCES} ${HEADERS})

# Target for cleaning
add_custom_target(clean_target
    COMMAND ${CMAKE_COMMAND} -E remove_directory ${CMAKE_BINARY_DIR}/*
)

# Target for packing the sources
add_custom_target(pack
    COMMAND ${CMAKE_COMMAND} -E tar "cfv" "${CMAKE_BINARY_DIR}/RPGGame.zip" ${SOURCES} ${HEADERS}
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Creating source archive"
)

