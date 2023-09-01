cmake_minimum_required(VERSION 3.10)

project(RPGGame)

add_executable(RPGGame main.cpp character.cpp player.cpp player_classes.cpp monster.cpp ui_functions.cpp combat_system.cpp)

add_custom_target(clean_target
    COMMAND rm -rf ${CMAKE_BINARY_DIR}/*.o ${CMAKE_BINARY_DIR}/RPGGame
)

add_custom_target(pack
    COMMAND ${CMAKE_COMMAND} -E tar "cfv" "${CMAKE_BINARY_DIR}/RPGGame.zip"
            "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/character.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/player.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/player_classes.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/monster.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/ui_functions.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/combat_system.cpp"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Creating source archive"
)

#commands cmake CMakeLists.txt; make; ./RPGGame; make; make pack; make clean_target
