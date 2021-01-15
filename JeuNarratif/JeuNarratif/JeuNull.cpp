/*#include "SFML/Graphics.hpp"
#include <iostream>
#include "Menu.h"

using namespace sf;


int main()
{
	RenderWindow window(VideoMode(800, 800), "Janus");

	Menu menu(window.getSize().x, window.getSize().y);

	while (window.isOpen())
	{
		Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::KeyReleased:
				switch (event.key.code)
				{
				case Keyboard::Up:
					menu.MoveUp();
					break;

				case Keyboard::Down:
					menu.MoveDown();
					break;

				case Keyboard::Return:
					switch (menu.GetPressedItem())
					{
					case 0:
						std::cout << "Veuillez vous installer, nous allons commencer" << std::endl;
						break;
					case 1:
						std::cout << "En fait il n'y a pas d'option, mais merci" << std::endl;
						break;
					case 2:
						window.close();
						break;
					}
					
					break;
				}

				break;
			case Event::Closed:
				window.close();

				break;
			}
		}

		window.clear();

		menu.draw(window);

		window.display();
	}
}*/