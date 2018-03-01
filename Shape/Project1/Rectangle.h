#pragma once
#include "Shape.h"
class Rectangle :
	public Shape
{
public:
	Rectangle(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4);
	virtual ~Rectangle();

	virtual float S() override;
	virtual float P() override;
	virtual std::string GetName() override;


private:
	float x1, y1, x2, y2, x3, y3, x4, y4, ab, bc, s, p;

};