

add_library(rendering STATIC rendering_system.cpp renderer.cpp)

target_link_libraries(rendering PRIVATE ${SDL2_LIBRARIES} SDL2_gfx)