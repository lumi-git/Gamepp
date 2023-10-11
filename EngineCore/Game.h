//
// Created by Ronan Tremoureux on 10/10/2023.
//

#ifndef SDLBASIC_GAME_H
#define SDLBASIC_GAME_H

#include <string>
#include <vector>
#include <SDL_render.h>
#include "Scene.h"

class Game {

public:
    int create();

    static Game *getInstance();

    void setWindowHeight(const int & height);

    const int & getWindowHeight() const;

    void setWindowWidth(const int & width);

    const int & getWindowWidth() const;

    void setFPS(const int & fps);

    const int & getFPS() const;

    void setWindowName(const std::string & windowName);

    const std::string & getWindowName() const;

    // Scene managment
    void setCurrentScene(int sceneId);

    void addScene(Scene *scene);

    Scene& getCurrentScene();

    static GameObject * instanciate(GameObject *gameObject);

protected:
    Game(std::string & windowName);


private:
    int init();

    int start();

    void run();

    void update();

    void draw();

    void end();

    //instance of the game used for the singleton purpose
    static Game *m_instance;
    //SDL Variables
    SDL_Renderer *m_renderer;
    SDL_Window *m_window;

    //Game Variables
    std::string m_windowName;
    int m_width;
    int m_height;
    int m_fps;

    Scene *m_CurrentScene;
    std::vector<Scene*> m_scenes;

};

#endif //SDLBASIC_GAME_H
