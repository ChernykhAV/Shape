#pragma once
#include <string>

class Shape
{

public:
	virtual float S() = 0;
	virtual float P() = 0;
	virtual std::string GetName() = 0;
};