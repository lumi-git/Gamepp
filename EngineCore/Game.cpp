//
// Created by Ronan Tremoureux on 10/10/2023.
//

#include "Game.h"
#include <string>
#include <SDL2/SDL.h>
#include "../utils/ErrorsEnum.h"
#include "../utils/Parameters.h"
#include "Time.h"
#include "../Debug/Debug.h"

Game *Game::m_instance = nullptr;

Game::Game(std::string & windowName) :
    m_renderer(nullptr),
    m_window(nullptr),
    m_windowName(windowName),
    m_width(SCREEN_WIDTH),
    m_height(SCREEN_HEIGHT),
    m_fps(SCREEN_FPS){
}


int Game::init() {

    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        SDL_Log("Failed to initialise SDL : %s", SDL_GetError());
        return DEFAULT_ERROR;
    }

    // Create a window
    Game::m_window = SDL_CreateWindow(m_windowName.c_str(),
                                      SDL_WINDOWPOS_UNDEFINED,
                                      SDL_WINDOWPOS_UNDEFINED,
                                      m_width,
                                      m_height,
                                      SDL_WINDOW_OPENGL);
    if (Game::m_window == nullptr) {
        SDL_Log("Could not create a window: %s", SDL_GetError());
        return -1;
    }

    m_renderer = SDL_CreateRenderer(Game::m_window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if (m_renderer == nullptr) {

        return DEFAULT_ERROR;
    }

    return SUCCESS;
}

int Game::create() {
    if (Game::init() == SUCCESS) {
        Game::start();
        Game::run();
        Game::end();
        return SUCCESS;
    }
    return DEFAULT_ERROR;
}

int Game::start() {
    m_CurrentScene->mandatoryStart();
    return SUCCESS;
}

void Game::update() {
    m_CurrentScene->mandatoryUpdate();
}

void Game::run() {
    const double frameDelay = 1000 / m_fps;

    Uint32 frameStart;
    double frameTime;


    while (true) {

        frameStart = SDL_GetTicks();
        // Get the next event
        SDL_Event event;
        if (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                break;
            }
        }
        Game::update();
        Game::draw();
        frameTime = SDL_GetTicks() - frameStart;

        if (frameDelay > frameTime) {

            SDL_Delay(frameDelay - frameTime);
        }
        Time::getInstance().setDeltaTime(SDL_GetTicks() - frameStart);

    }
}

void Game::end() {
    SDL_DestroyRenderer(m_renderer);
    SDL_DestroyWindow(m_window);
    SDL_Quit();
}

void Game::draw() {
    // drow a rectangle and fill it with white
    SDL_RenderClear(m_renderer);
    m_CurrentScene->mandatoryDraw(m_renderer);

    SDL_SetRenderDrawColor(m_renderer, 100, 200, 50, 255);
    SDL_RenderPresent(m_renderer);

}

Game *Game::getInstance() {
    if (m_instance == nullptr) {
        std::string title = WINDOW_TITLE;
        m_instance = new Game(title);
    }
    return m_instance;
}

//scene managment
void Game::setCurrentScene(int sceneId) {
    m_CurrentScene = m_scenes[sceneId];
}

void Game::addScene(Scene *scene) {
    m_scenes.push_back(scene);
}

Scene &Game::getCurrentScene() {
    return *m_CurrentScene;
}

void Game::setWindowHeight(const int & height) {
    if (height < 1){
        m_height = 1;
    }
    else {
        m_height = height;
    }
}

const int & Game::getWindowHeight() const {
    return m_height;
}

void Game::setWindowWidth(const int & width) {
    if (width < 1) {
        m_width = 1;
    }
    else {
        m_width = width;
    }
}

const int & Game::getWindowWidth() const {
    return m_width;
}

void Game::setFPS(const int & fps) {
    if (fps < 1) {
        m_fps = 1;
    }
    else {
        m_fps = fps;
    }
}

const int & Game::getFPS() const {
    return m_fps;
}

const std::string &Game::getWindowName() const {
    return m_windowName;
}

void Game::setWindowName(const std::string &windowName) {
    m_windowName = windowName;
}

GameObject * Game::instanciate(GameObject *gameObject) {
    Game::getInstance()->getCurrentScene().addGameObject(gameObject);
    return gameObject;
}
