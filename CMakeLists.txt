cmake_minimum_required(VERSION 3.20)

project(Gamepp)

# Add SDL2 from the third_party directory
add_subdirectory(third_party/SDL2)

# Create a library for Gamepp
add_library(gamepp STATIC
    src/EngineCore/Game.cpp
    src/EngineCore/Scene.cpp
    src/EngineCore/GameObject.cpp
    src/EngineCore/Component.cpp
    src/EngineCore/DrawRectComponent.cpp
    src/EngineCore/Vector2.cpp
    src/EngineCore/Transform.cpp
    src/EngineCore/Debug.cpp
    src/EngineCore/Time.cpp
)

# Specify include directories for the library
target_include_directories(gamepp PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> 
    $<INSTALL_INTERFACE:include>
)

# Link against the built SDL2 library
target_link_libraries(gamepp PUBLIC SDL2-static)


# Installation rules (if you want to install the library to system folders)
install(TARGETS gamepp
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)
install(DIRECTORY include/ DESTINATION include)