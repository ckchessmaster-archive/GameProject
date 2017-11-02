#pragma once
#include "Game.h"

namespace Engine {
	class Renderer
	{
	protected:
		int fps;
		Game* game;

	public:
		Renderer();

		static void startThread(Renderer* renderer);

		virtual void init(Game* game) = 0;
		virtual void start() = 0;
		virtual void frame() = 0;
	};
}