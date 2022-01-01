#pragma once
#include <string>
#include <fstream>

class Logger
{
public:
	Logger(std::string filePath) :mFilePath(filePath) {
		truncateFile();
	}
	void logMessage(std::string message);
	~Logger() {
		mOutStream.close();
	}
private:
	std::string mFilePath;
	std::ofstream mOutStream;
	void truncateFile();

};
