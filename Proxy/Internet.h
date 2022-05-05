#pragma once
#include <iostream>
class Internet
{
public:
	Internet();
	~Internet();
	virtual void connetTo(std::string host);
private:

};

Internet::Internet()
{
}

Internet::~Internet()
{
}
void Internet::connetTo(std::string host)
{
	std::cout << "Open Connection to " + host << std::endl;
}