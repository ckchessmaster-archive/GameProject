#pragma once
namespace Engine {
	class Game
	{
	public:
		Game();
		~Game();

		virtual void init();
		virtual void start();
		virtual void tick();
	};
}