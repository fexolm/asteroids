add_subdirectory(entities)
add_subdirectory(physics)
add_subdirectory(rendering)

add_library(engine dummy.cpp)
target_link_libraries(engine PUBLIC entities physics rendering)