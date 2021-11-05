#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

#include <SFML/Graphics.hpp>

class Window
{
public:
    Window();
    Window(const std::string& l_title, const sf::Vector2u& l_size);
    ~Window();

    void BeginDraw();
    void EndDraw();

    void Update();

    bool IsDone();
    bool IsFullScreen();
    sf::Vector2u GetWindowSize();
    void SetWindowSize(const sf::Vector2u& l_size);

    void ToggleFullscreen();

    void Draw(sf::Drawable& l_drawble);
private:
    void Setup(const std::string& l_title, const sf::Vector2u& l_size);
    void Destroy();
    void Create();

    sf::RenderWindow m_window;
    sf::Vector2u m_windowSize;
    std::string m_windowTitle;
    bool m_isDone;
    bool m_isFullscreen;
};

#endif // WINDOW_H_INCLUDED
