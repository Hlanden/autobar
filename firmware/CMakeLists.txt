cmake_minimum_required(VERSION 3.16)

set(IDF_PATH ${CMAKE_CURRENT_SOURCE_DIR}/dependencies/esp-idf)

set(EXTRA_COMPONENT_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/interfaces
    ${CMAKE_CURRENT_SOURCE_DIR}/adapters
    ${CMAKE_CURRENT_SOURCE_DIR}/board
)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)

project(autobar)
