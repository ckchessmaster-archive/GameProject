#pragma once
namespace Engine {
	class Game
	{
	private:
		int tps; //ticks per second

	public:
		Game();
		~Game();

		static void startThread(Game* game);

		virtual void init();
		virtual void start();
		virtual void tick();
	};
}