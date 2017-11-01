#include "Logger.h"

#include <iostream>

namespace Engine {
	
	void Logger::init()
	{
	}

	void Logger::log(std::string message, LogLevel loglvl) {
		switch (loglvl)
		{
		case LogLevel::log: std::cout << "Log: " + message + "\n"; break;
		case LogLevel::warning: std::cout << "Warning: " + message + "\n"; break;
		case LogLevel::error: std::cout << "Error!! " + message + "\n"; break;
		}//end switch
	}//end log()
}//end namespace