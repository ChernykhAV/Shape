#include "Circle.h"



Circle::Circle(float r)
{
	this->r = r;
}


Circle::~Circle()
{
}

float Circle::S()
{
	s = r * r * 3, 14;
	return  s;
}

float Circle::P()
{
	p = 2 * r * 3, 14;
	return  p;
}

std::string Circle::GetName()
{
	return std::string("Окружности");
}

