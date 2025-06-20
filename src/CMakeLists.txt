add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PUBLIC  
    main.c main_screen.c 
    styles.c radio.c dsp.c util.c 
    rotary.c keyboard.c encoder.c
    events.c msg.c msg_tiny.c keypad.c
    hkey.c clock.c info.c
    meter.c tx_info.c
    audio.c mfk.c cw.c cw_decoder.c pannel.c
    rtty.c screenshot.c backlight.c gps.c
    dialog.c dialog_settings.c dialog_swrscan.c
    dialog_ft8.c dialog_freq.c dialog_gps.c dialog_msg_cw.c 
    dialog_msg_voice.c dialog_recorder.c dialog_qth.c dialog_callsign.c dialog_audio_settings.c dialog_rf_settings.c
    textarea_window.c cw_encoder.c buttons.c vol.c recorder.c
    qth.c voice.cpp gfsk.c generator.c cw_key.c mic.c
    vt.c memory.c queue.c two_tone.c
)

add_subdirectory(fonts)
add_subdirectory(ft8)
add_subdirectory(widgets)
add_subdirectory(fpga)
add_subdirectory(dsp)
add_subdirectory(python)
add_subdirectory(render)
add_subdirectory(settings)
add_subdirectory(olivia)
add_subdirectory(bands)
add_subdirectory(hw)

include_directories(utf8)
include_directories(${CMAKE_SYSROOT}/usr/include/RHVoice/)

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

target_compile_options(${PROJECT_NAME} PRIVATE -g -fno-omit-frame-pointer -fasynchronous-unwind-tables)
target_link_options(${PROJECT_NAME} PRIVATE -g -rdynamic)

#set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS "-save-temps")
#target_compile_options(${PROJECT_NAME} PRIVATE -g -pg)
#target_link_options(${PROJECT_NAME} PRIVATE -g -pg)

#target_compile_options(${PROJECT_NAME} PRIVATE -fsanitize=address -fsanitize=undefined -fno-sanitize-recover)
#target_link_options(${PROJECT_NAME} PRIVATE -fsanitize=address -fsanitize=undefined -fno-sanitize-recover -static-libasan -static-libubsan)

target_link_libraries(${PROJECT_NAME} PRIVATE Threads::Threads)
target_link_libraries(${PROJECT_NAME} PRIVATE lvgl lvgl::drivers)
target_link_libraries(${PROJECT_NAME} PRIVATE liquid specbleach m fftw3)
target_link_libraries(${PROJECT_NAME} PRIVATE pulse pulse-simple)
target_link_libraries(${PROJECT_NAME} PRIVATE png)
target_link_libraries(${PROJECT_NAME} PRIVATE gps)
target_link_libraries(${PROJECT_NAME} PRIVATE sndfile)
target_link_libraries(${PROJECT_NAME} PRIVATE RHVoice RHVoice_core RHVoice_audio)
target_link_libraries(${PROJECT_NAME} PRIVATE python3.11 pthread)
target_link_libraries(${PROJECT_NAME} PRIVATE gpiod cyaml iio)
target_link_libraries(${PROJECT_NAME} PRIVATE ${FREETYPE_LIBRARIES})
