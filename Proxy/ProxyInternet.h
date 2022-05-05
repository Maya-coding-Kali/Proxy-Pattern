#pragma once
#include <iostream>
#include "Internet.h"
#include <vector>
class ProxyInternet : Internet
{
private:
	Internet* realInternet;
	std::vector<std::string> bannedSites ;
public:
	
	ProxyInternet() : realInternet(new Internet())
	{
		bannedSites = { "banned.com" };
	}
	~ProxyInternet() {
		delete realInternet;
	}
	void connetTo(std::string host)
	{
		if (std::find(bannedSites.begin(), bannedSites.end(), host) != bannedSites.end())
		{
			std::cout << "you cannot go to "<< host<<std::endl;
		}
		else
		{
			realInternet->connetTo(host);
		}
	}
};