cmake_minimum_required(VERSION 3.20)

project(Gamepp)
set(CMAKE_CXX_STANDARD 11)
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(Gamepp exampleGame/main.cpp EngineCore/Game.cpp EngineCore/Game.h utils/ErrorsEnum.h utils/Parameters.h EngineCore/Scene.cpp EngineCore/Scene.h EngineCore/GameObject.cpp EngineCore/GameObject.h EngineCore/Component.cpp EngineCore/Component.h EngineCore/DrawRectComponent.cpp EngineCore/DrawRectComponent.h exampleGame/ExampleScene.cpp exampleGame/ExampleScene.h exampleGame/ExampleObject.cpp exampleGame/ExampleObject.h EngineCore/Vector2.cpp EngineCore/Vector2.h EngineCore/Transform.cpp EngineCore/Transform.h)
target_link_libraries(Gamepp ${SDL2_LIBRARIES})