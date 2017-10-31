#pragma once

#include <string>

namespace Engine {
	class Logger
	{
	public:
		static void init();
		static void log(std::string message);
	};
}
