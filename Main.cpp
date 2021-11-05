#include "Window.h"

int main()
{
    Window window;
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (!window.IsDone())
    {
        window.Update();
        window.BeginDraw();
        window.Draw(shape);
        window.EndDraw();
    }

    return 0;
}
