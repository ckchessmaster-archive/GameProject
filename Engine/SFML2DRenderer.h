#pragma once
#include "Renderer.h"

#include <SFML/Graphics.hpp>

namespace Engine {
	class SFML2DRenderer : public Renderer
	{
	private:
		sf::RenderWindow* window;

		void renderFrame() const;

	public:
		SFML2DRenderer();
		~SFML2DRenderer();

		virtual void init(Game* game);
		virtual void start();
		virtual void frame();

		sf::RenderWindow* getWindow() { return window; }
	};
}
