#include <gex_logmanager.h>
#include <iostream>

namespace Gex {
	LogManager& g_LogManager = LogManager::instance();

	void LogManager::VStartup()
	{
		std::cout << "LogManager starting up..." << std::endl;
	}

	void LogManager::VShutdown()
	{
		std::cout << "LogManager shutting down..." << std::endl;
	}
}