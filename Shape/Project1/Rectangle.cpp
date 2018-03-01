#include "Rectangle.h"



Rectangle::Rectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->x3 = x3;
	this->y3 = y3;
	this->x4 = x4;
	this->y4 = y4;
}


Rectangle::~Rectangle()
{
	
}

float Rectangle::S()
{
	ab = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	bc = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
	s = ab * bc;
	return  s;
}

float Rectangle::P()
{
	p = 2 * (ab + bc);
	return  p;
}

std::string Rectangle::GetName()
{
	return std::string("Прямоугольника");
}
