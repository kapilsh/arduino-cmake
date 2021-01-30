cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)
set(CMAKE_CXX_STANDARD 11)
set(PROJECT_NAME arduino_blink_led)

set(${PROJECT_NAME}_BOARD uno)
project(${PROJECT_NAME})

set(${PROJECT_NAME}_SKETCH arduino_blink_led.cpp)
set(${PROJECT_NAME}_PROGRAMMER ksharma)
set(${PROJECT_NAME}_PORT /dev/ttyACM0)
set(${PROJECT_NAME}_AFLAGS -v)

generate_arduino_firmware(${PROJECT_NAME})

print_board_list()
print_programmer_list()
