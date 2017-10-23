//#include "Main.h"
//#include <SFML/Graphics.hpp>
#include <iostream>
#include <chrono>

int main()
{
	//sf::RenderWindow window(sf::VideoMode(1600, 900), "Game Engine");
	//sf::CircleShape shape(100.f);
	//shape.setFillColor(sf::Color::Green);

	//// run the program as long as the window is open
	//while (window.isOpen())
	//{
	//	// check all the window's events that were triggered since the last iteration of the loop
	//	sf::Event event;
	//	while (window.pollEvent(event))
	//	{
	//		// "close requested" event: we close the window
	//		if (event.type == sf::Event::Closed)
	//			window.close();
	//	}

	//	window.clear();
	//	window.draw(shape);
	//	window.display();
	//}

	using namespace std::chrono;
	std::cout << "Running sim...\n";

	int i = 0, endTime;
	int startTime = duration_cast< milliseconds >(system_clock::now().time_since_epoch()).count();

	while (i < 1000000000) {
		i++;
	}
	endTime = duration_cast< milliseconds >(system_clock::now().time_since_epoch()).count();
	std::cout << "Total time: " << (endTime - startTime) << "ms\nFinal number: " << i << "\n";

	return 0;
}