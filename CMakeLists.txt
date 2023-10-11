cmake_minimum_required(VERSION 3.20)

project(Gamepp)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(Gamepp exampleGame/main.cpp Game.cpp Game.h utils/ErrorsEnum.h utils/Parameters.h Scene.cpp Scene.h GameObject.cpp GameObject.h Component.cpp Component.h DrawRectComponent.cpp DrawRectComponent.h exampleGame/ExampleScene.cpp exampleGame/ExampleScene.h exampleGame/ExampleObject.cpp exampleGame/ExampleObject.h)
target_link_libraries(Gamepp ${SDL2_LIBRARIES})