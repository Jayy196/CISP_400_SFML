#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>

// using namespace sf;

int main()
{
	//For setting up windows
	sf::RenderWindow window(sf::VideoMode(640, 500), "My first game", sf::Style::Titlebar | sf::Style::Close);
	sf::Event ev;

	//Game Loop
	while (window.isOpen())
	{
		while (window.pollEvent(ev))
		{
			switch (ev.type) //Type of Event
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (ev.key.code == sf::Keyboard::Escape)
					window.close();
				break;
			}
		}

		//update


		//render
		window.clear(sf::Color::Black);// clear old frame
		//Draw your game

		window.display(); //tell app that window is done drawing

	}
	// End of application
	return 0;

}
