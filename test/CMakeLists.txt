cmake_minimum_required(VERSION 2.8)

project(runtests)

set(GOOGLETEST ${CMAKE_SOURCE_DIR}/../googletest/)  
set(SRC ${CMAKE_SOURCE_DIR}/../QtShark/)  
set(JSON11 ${CMAKE_SOURCE_DIR}/../json11/)  

include_directories(${GOOGLETEST}/googlemock/include ${GOOGLETEST}/googletest/include ${SRC} ${JSON11})
link_directories(${GOOGLETEST}/build/googlemock ${GOOGLETEST}/build/googlemock/gtest ${JSON11}/build)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++1y -Wall -Wextra -Wno-unused-parameter")


include_directories(${GOOGLETEST}/googlemock/include ${GOOGLETEST}/googletest/include ../QtShark)
add_executable(runtests   ${SRC}/server_ops.cpp main.cpp test_ipaddressstring.cpp test_serverops.cpp)
target_link_libraries(runtests json11)
target_link_libraries(runtests gmock)
target_link_libraries(runtests gtest)
target_link_libraries(runtests pthread)
