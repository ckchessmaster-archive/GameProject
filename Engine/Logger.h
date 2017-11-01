#pragma once

#include <string>

namespace Engine {
	enum LogLevel {
		log,
		warning,
		error
	};
	
	class Logger
	{
	public:
		static void init();
		static void log(std::string message, LogLevel loglvl = LogLevel::log);
	};
}
