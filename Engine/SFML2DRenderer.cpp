#include "SFML2DRenderer.h"
#include "Logger.h"

#include <chrono>

namespace Engine {
	SFML2DRenderer::SFML2DRenderer()
	{
	}


	SFML2DRenderer::~SFML2DRenderer()
	{
	}

	void SFML2DRenderer::init(Game* game)
	{
		Logger::log("Initializing SFML Renderer...");
		fps = 60;
		this->game = game;
	}

	void SFML2DRenderer::start()
	{
		Logger::log("Starting SFML Renderer...");

		// create a new window
		window = new sf::RenderWindow(sf::VideoMode(800, 600), "My window");

		int frameTime = 1000 / fps;
		auto lastFrame = std::chrono::high_resolution_clock::now();
		
		while (game->getGameState() == running) {
			auto currentTime = std::chrono::high_resolution_clock::now();
			int timeSinceLastFrame = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - lastFrame).count();
			if (timeSinceLastFrame >= frameTime) {
				frame();
				lastFrame = std::chrono::high_resolution_clock::now();
			}//end tick check
		}
	}

	void SFML2DRenderer::frame()
	{
		if (window->isOpen()) {
			Scene scene = game->getScene();

			sf::Event event;
			while (window->pollEvent(event))
			{
				// "close requested" event: we close the window
				if (event.type == sf::Event::Closed) {
					window->close();
					game->setGameState(GameState::stopped);
				}
			}

			// clear the window with black color
			window->clear(sf::Color::Black);

			// draw everything here...
			// window.draw(...);

			// end the current frame
			window->display();
		}
		else {
			game->setGameState(GameState::stopped);
		}
		
	}
}