#pragma once

namespace Engine {
	class Renderer
	{
	public:
		Renderer();

		static void startThread(Renderer &renderer);

		void init();
		void start();
	};
}