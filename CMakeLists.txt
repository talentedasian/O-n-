cmake_minimum_required(VERSION 3.22)

include(/home/almir/Downloads/pico-sdk/pico_sdk_init.cmake)

project(temp)

pico_sdk_init()

add_executable(temp
        main.c
        )

target_link_libraries(temp pico_stdlib hardware_adc hardware_timer)

pico_enable_stdio_usb(temp 1)
pico_enable_stdio_uart(temp 0)

# create map/bin/hex file etc.
pico_add_extra_outputs(temp)
