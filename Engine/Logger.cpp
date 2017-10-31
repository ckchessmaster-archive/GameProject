#include "Logger.h"

#include <iostream>

namespace Engine {
	
	void Logger::init()
	{
	}

	void Logger::log(std::string message) {
		std::cout << message + "\n";
	}
}