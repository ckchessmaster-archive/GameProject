#include "Renderer.h"
#include "Logger.h"

namespace Engine {

	Renderer::Renderer()
	{
	}

	void Renderer::startThread(Renderer &renderer)
	{
		renderer.start();
	}

	void Renderer::init()
	{
		Logger::log("Initializing renderer...");
	}

	void Renderer::start()
	{
		Logger::log("Starting renderer...");
	}
}