#include "Game.h"

Game::Game():
    m_window("Game", sf::Vector2u(800, 600))
{

}

Game::~Game()
{

}

void Game::Update()
{
    m_window.Update();
}

void Game::Render()
{
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    m_window.BeginDraw();
    m_window.Draw(shape);
    m_window.EndDraw();
}

Window* Game::GetWindow()
{
    return &m_window;
}

void Game::HandleInput()
{

}
