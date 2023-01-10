#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(800, 600), L"new", Style::Default);

    window.setVerticalSyncEnabled(true);

    CircleShape circle(25.f);
    circle.setPosition(375, 275);
    circle.setFillColor(Color::Blue);

    const float BAT_DY = 8.f;
    const float BAT_RY = 0.f;

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {


            if (Keyboard::isKeyPressed(Keyboard::W)) {
                circle.move(0.f, -BAT_DY);
            }
            if (Keyboard::isKeyPressed(Keyboard::S)) {
                circle.move(0.f, BAT_DY);
            }
            if (Keyboard::isKeyPressed(Keyboard::D)) {
                circle.move(8.f, -BAT_RY);
            }
            if (Keyboard::isKeyPressed(Keyboard::A)) {
                circle.move(-8.f, BAT_RY);
            }

            window.clear(Color::Yellow);
            window.draw(circle);
            window.display();
        }
    }
    return 0;
}