#pragma once
#ifndef SPLITSTRING_H
#define SPLITSTRING_H

#include <string>
#include <vector>

class splitString
{
private:
	unsigned numOfTokens = 0;
	std::vector<std::string> tokens;
public:
	splitString(const std::string & str, const char & delim = ' ');
	unsigned getNumOfTokens();
	std::string getTokenAt(const unsigned & tokenIndex);
	splitString(const char & delim, const std::string & str);
};

#endif // !SPLITSTRING_H