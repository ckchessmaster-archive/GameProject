#include "Renderer.h"
#include "Logger.h"

namespace Engine {

	Renderer::Renderer()
	{
	}

	void Renderer::startThread(Renderer* renderer)
	{
		renderer->start();
	}
}