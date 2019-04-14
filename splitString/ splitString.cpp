#include "splitString.h"

splitString::splitString(const std::string & str, const char & delim)
{
	std::string temp = "";

	for (auto c : str)
		if (c == delim)
		{
			tokens.push_back(temp);
			temp.clear();
		}
		else
			temp += c;
	tokens.push_back(temp);

	numOfTokens = tokens.size();
}

splitString::splitString(const char & delim, const std::string & str)
{
	unsigned pos = 0;
	unsigned posDelim = str.find(delim, pos);
	for (unsigned index = 0; index <= count(str.begin(), str.end(), delim); index++)
	{
		tokens.push_back(str.substr(pos, posDelim - pos));
		pos = posDelim + 1;
		posDelim = str.find(delim, pos);
	}

	numOfTokens = tokens.size();
}

unsigned splitString::getNumOfTokens()
{
	return numOfTokens;
}

std::string splitString::getTokenAt(const unsigned & tokenIndex)
{
	return tokenIndex < numOfTokens ? tokens[tokenIndex] : "Out of scope";
}
