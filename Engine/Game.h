#pragma once
namespace Engine {
	class Game
	{
	private:
		int tps; //ticks per second

	public:
		Game();
		~Game();

		virtual void init();
		virtual void start();
		virtual void tick();
	};
}