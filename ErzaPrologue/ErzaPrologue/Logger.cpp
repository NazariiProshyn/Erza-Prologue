#include "Logger.h"
#include <fstream>
#include <iostream>
#include <ctime>

void Logger::logMessage(std::string message)
{
	std::ofstream out(mFilePath, std::ios_base::app);
	if (out.is_open() == false)
	{
		std::cout << "failed" << std::endl;
	}
	else
	{
		time_t now = time(nullptr);
		char dateBuffer[50];
		ctime_s(dateBuffer, sizeof(dateBuffer), & now);
		out << "\n" << dateBuffer << message << std::endl;
		out.close();
	}
}