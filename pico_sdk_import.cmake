# Setze den Pfad zu deinem Pico SDK
if(NOT DEFINED PICO_SDK_PATH)
    set(PICO_SDK_PATH "$ENV{PICO_SDK_PATH}" CACHE PATH "/home/peter/pico/pico-sdk")
endif()

include(${PICO_SDK_PATH}/external/pico_sdk_import.cmake)
