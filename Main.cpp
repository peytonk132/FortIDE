#include <SFML/Graphics.hpp>
#include <windows.h>

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");

    sf::IntRect open(0, 0, 65, 35);

    sf::RectangleShape open_button(sf::Vector2f(open.width, open.height));
    open_button.setPosition(open.left, open.top);
    open_button.setFillColor(sf::Color::Blue); // Set the color of the rectangle

    while (window.isOpen())
    {


        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && open.contains(sf::Mouse::getPosition(window)))
        {
            ShellExecuteA(NULL, "open", "C:\\", NULL, NULL, SW_SHOWDEFAULT);
            printf("Clicked!\n");
        }


        sf::Text text;

        sf::Font font;
        if (!font.loadFromFile("src/fonts/tobias-font/Tobias-Regular.ttf"))
        {
            printf("Could Not load font!");
        }

        text.setFont(font);

        text.setString("Open");
        text.setCharacterSize(24);

        // set the color
        text.setFillColor(sf::Color::White);

        text.setStyle(NULL);




        window.clear();
        window.draw(open_button);
        window.draw(text);
        window.display();
    }

    return 0;
}