cmake_minimum_required(VERSION 3.20)

project(SDLBasic)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDLBasic exampleGame/main.cpp Game.cpp Game.h utils/ErrorsEnum.h utils/Parameters.h Scene.cpp Scene.h GameObject.cpp GameObject.h Component.cpp Component.h DrawRectComponent.cpp DrawRectComponent.h exampleGame/ExampleScene.cpp exampleGame/ExampleScene.h)
target_link_libraries(SDLBasic ${SDL2_LIBRARIES})