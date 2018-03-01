#include "Triangle.h"

Triangle::Triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
	this->x3 = x3;
	this->y3 = y3;
}
 float Triangle::S()
{
	ab = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	bc = sqrt((x2 - x3)*(x2 - x3) + (y2 - y3)*(y2 - y3));
	ca = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
	s = ab * bc*ca;
	return  s;
}
float Triangle::P()
{
	p = ab + bc + ca;
	return  p;
}
Triangle::~Triangle()
{
}
std::string Triangle::GetName()
{
	return std::string("Треугольника");
}
