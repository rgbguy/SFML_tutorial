#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "SFML-tutorial", sf::Style::Close | sf::Style::Resize);
	sf::RectangleShape player(sf::Vector2f(100.0f,100.0f));
	player.setFillColor(sf::Color::Cyan);
	while (window.isOpen())
	{
		sf::Event evnt;
		while (window.pollEvent(evnt))
		{
			window.clear();
			if (evnt.type == evnt.Closed)
			{
				window.close();
			}
			if (evnt.type == evnt.Resized)
			{
				std::cout << evnt.size.width << " "<< evnt.size.height << "\n";
			}
		}

		window.draw(player);
		window.display();
	}
}