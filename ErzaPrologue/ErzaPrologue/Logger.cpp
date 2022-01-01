#include "Logger.h"
#include <fstream>
#include <iostream>
#include <ctime>

void Logger::logMessage(std::string message)
{
	if (mOutStream.is_open() == false)
	{
		std::cout << "failed" << std::endl;
	}
	else
	{
		time_t now = time(nullptr);
		char dateBuffer[50];
		ctime_s(dateBuffer, sizeof(dateBuffer), &now);
		mOutStream << "\n" << dateBuffer << message << std::endl;
	}
}

void Logger::truncateFile() 
{
	mOutStream.open(mFilePath, std::ofstream::out | std::ofstream::trunc);
}