#pragma once

#include <sstream>

class StringUtils 
{
public:
	static std::vector<std::string> &Split(const std::string &s, char delim, std::vector<std::string> &elems) {
		std::stringstream ss(s);
		std::string item;
		while (std::getline(ss, item, delim)) 
		{
			if (!item.empty())
				elems.push_back(item);
		}
		return elems;
	}


	static std::vector<std::string> Split(const std::string &s, char delim)
	{
		std::vector<std::string> elems;
		Split(s, delim, elems);
		return elems;
	}

private:
	StringUtils();

};