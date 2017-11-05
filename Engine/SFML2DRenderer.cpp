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

	// Start the renderer (creates a new window and begins calling frames)
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

	// Called to go to the next frame
	void SFML2DRenderer::frame()
	{
		if (window->isOpen()) {
			// take care of window events
			sf::Event event;
			while (window->pollEvent(event))
			{
				// "close requested" event: we close the window
				if (event.type == sf::Event::Closed) {
					window->close();
					game->setGameState(GameState::stopped);
				}
			}//end events

			// render the frame
			renderFrame();
		}
		else {
			game->setGameState(GameState::stopped);
		}//end window open check
	}//end frame()

	// Render the current scene to the screen
	void SFML2DRenderer::renderFrame() const
	{
		Scene scene = game->getScene();
		std::vector<Object> objects = scene.getObjects();

		for (int i = 0; i < objects.size(); i++) {
			sf::CircleShape obj(10);
			obj.setFillColor(sf::Color(100, 250, 50));
			obj.setOutlineThickness(2);
			obj.setOutlineColor(sf::Color(250, 150, 100));
			obj.setPosition(objects.at(i).getTransform().position.x, objects.at(i).getTransform().position.y);
			window->draw(obj);
		}

		window->display();
	}//end renderFrame
}//end namespace