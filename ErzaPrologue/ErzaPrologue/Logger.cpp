#include "Logger.h"
#include <fstream>

void Logger::logMessage(std::string message)
{
	std::ofstream out(mFilePath, std::ios_base::app);
	if (out.is_open())
	{
		//throw here our exception
	}
	else
	{
		out << message << std::endl;
		out.close();
	}
}