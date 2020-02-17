set(BINARY ${CMAKE_PROJECT_NAME}_tests)
set(SOURCES main.cpp basic_tests.cpp)

add_executable(${BINARY} ${SOURCES})

target_link_libraries(${BINARY} gtest)

