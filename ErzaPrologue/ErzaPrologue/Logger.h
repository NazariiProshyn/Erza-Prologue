#pragma once
#include <string>

class Logger
{
public:
	Logger(std::string filePath) :mFilePath(filePath) {}
	void logMessage(std::string message);
private:
	std::string mFilePath;

};

