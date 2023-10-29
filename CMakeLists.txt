cmake_minimum_required(VERSION 3.10)
project(Gamepp)

# Définir les sources
file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/src/EngineCore/*.cpp)

# Ajoutez la cible de bibliothèque
add_library(Gamepp ${SOURCES})

# Spécifiez les répertoires d'inclusion pour Gamepp
target_include_directories(Gamepp PUBLIC 
   ${CMAKE_SOURCE_DIR}/include
   ${CMAKE_SOURCE_DIR}/third_party/SDL2/include
)

# Liez la bibliothèque avec SDL2
target_link_libraries(Gamepp PRIVATE 
   ${CMAKE_SOURCE_DIR}/third_party/SDL2/lib/x64/SDL2.lib
   ${CMAKE_SOURCE_DIR}/third_party/SDL2/lib/x64/SDL2main.lib
)

# Installation
install(TARGETS Gamepp
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib)
install(DIRECTORY include/ DESTINATION include)