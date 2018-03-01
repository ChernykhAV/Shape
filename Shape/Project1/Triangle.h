#pragma once
#include "Shape.h"

class Triangle : public Shape
{
private:
	float x1, y1, x2, y2, x3, y3, ab, bc, ca, s, p;
public:
	Triangle(float x1, float y1, float x2, float y2, float x3, float y3);
	
	virtual float S() override;
	
	virtual float P() override;
	
	~Triangle();

	virtual std::string GetName() override;
};