#include "UtilsFunctions.h"

std::string UtilsFunctions::getFileName(std::string relativeFilePath)
{
	char slashes[] = "/\\";
	int slashPosition = relativeFilePath.find_last_of(slashes);
	char dot = '.';
	int dot_position = relativeFilePath.find(dot, slashPosition);
	return relativeFilePath.substr(slashPosition + 1, dot_position - slashPosition - 1);
}
