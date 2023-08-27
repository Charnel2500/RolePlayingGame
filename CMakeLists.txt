cmake_minimum_required(VERSION 3.10)

project(RPGGame)

add_executable(RPGGame main.cpp character.cpp player.cpp monster.cpp uiFunctions.cpp)

add_custom_target(clean_target
    COMMAND rm -rf ${CMAKE_BINARY_DIR}/*.o ${CMAKE_BINARY_DIR}/RPGGame
)

add_custom_target(pack
    COMMAND ${CMAKE_COMMAND} -E tar "cfv" "${CMAKE_BINARY_DIR}/RPGGame.zip"
            "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/character.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/player.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/monster.cpp"
            "${CMAKE_CURRENT_SOURCE_DIR}/uiFunctions.cpp"
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Creating source archive"
)

#commands cmake CMakeLists.txt; make; ./RPGGame; make; make pack; make clean_target
