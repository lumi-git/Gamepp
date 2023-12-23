cmake_minimum_required(VERSION 3.20)

project(Gamepp)
set(CMAKE_CXX_STANDARD 11)

# Include directories for SDL2
include_directories(${CMAKE_SOURCE_DIR}/third_party/SDL2/include)

# SDL2 Libraries
set(SDL2_LIBRARIES "${CMAKE_SOURCE_DIR}/third_party/SDL2/lib/x64/SDL2.lib")
set(SDL2MAIN_LIBRARIES "${CMAKE_SOURCE_DIR}/third_party/SDL2/lib/x64/SDL2main.lib")

add_executable(
        Gamepp
        exampleGame/main.cpp
        EngineCore/Game.cpp
        EngineCore/Game.h
        utils/ErrorsEnum.h
        utils/Parameters.h
        EngineCore/Scene.cpp
        EngineCore/Scene.h
        EngineCore/GameObject.cpp
        EngineCore/GameObject.h
        EngineCore/Component.cpp
        EngineCore/Component.h
        EngineCore/DrawRectComponent.cpp
        EngineCore/DrawRectComponent.h
        exampleGame/ExampleScene.cpp
        exampleGame/ExampleScene.h
        exampleGame/ExampleObject.cpp
        exampleGame/ExampleObject.h
        EngineCore/Vector2.cpp
        EngineCore/Vector2.h
        EngineCore/Transform.cpp
        EngineCore/Transform.h
        Debug/Debug.cpp
        Debug/Debug.h
        EngineCore/ComponentType.h
        EngineCore/Time.cpp
        EngineCore/Time.h
)
# Add a preprocessor definition to avoid SDL redefining main
target_compile_definitions(Gamepp PRIVATE SDL_MAIN_HANDLED)

target_link_libraries(Gamepp ${SDL2_LIBRARIES} ${SDL2MAIN_LIBRARIES})

