#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "Window.h"

class Game
{
public:
    Game();
    ~Game();

    void HandleInput();
    void Update();
    void Render();

    Window* GetWindow();
private:
    Window m_window;
};

#endif // GAME_H_INCLUDED
