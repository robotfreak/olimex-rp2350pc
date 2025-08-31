cmake_minimum_required(VERSION 3.13)

# Projektname und Board
set(PICO_BOARD pico2)  # RP2350
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

#export PICO_SDK_PATH=/home/peter/pico/pico-sdk

# Pico SDK
include(pico_sdk_import.cmake)

project(rp2350_tb C CXX ASM)
pico_sdk_init()

# Subdirs (Libs)
#add_subdirectory(third_party/DispHSTX)
#add_subdirectory(third_party/tinybasic)

# Executable
add_executable(rp2350_tb
    src/main.c
    src/hardware_rp2350.c
    src/video_dvi.c
    src/usb_host_hid.c
    src/es8311_audio.c
    src/sd_fatfs.c
    src/tinybasic.c
#    hardware_spi
#    hardware_i2c
#    hardware_pwm
)

# FatFS als eigene Library
add_library(fatfs STATIC
    third_party/fatfs/source/ff.c
    third_party/fatfs/source/ffsystem.c
)

target_include_directories(fatfs PUBLIC third_party/fatfs)

# --- Optional: DispHSTX ---
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/third_party/DispHSTX/CMakeLists.txt")
    message(STATUS "DispHSTX gefunden, wird eingebunden")
    add_subdirectory(third_party/DispHSTX)
    target_link_libraries(rp2350_tb DispHSTX)
else()
    message(STATUS "DispHSTX nicht gefunden → Video über Stubs")
endif()

target_include_directories(rp2350_tb PRIVATE src)

target_link_libraries(rp2350_tb
    pico_stdlib
    tinyusb_host
    fatfs
    hardware_spi
    hardware_i2c
    hardware_pwm

)

pico_enable_stdio_usb(rp2350_tb 0)
pico_enable_stdio_uart(rp2350_tb 1)

# --- Boot2 automatisch vom SDK verwenden ---
#pico_set_boot_stage2(rp2350_tb ${PICO_SDK_PATH}/src/rp2_common/boot2/boot2_w25q080.S)

pico_add_extra_outputs(rp2350_tb)
