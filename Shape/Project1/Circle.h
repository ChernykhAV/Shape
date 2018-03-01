#pragma once
#include "Shape.h"
class Circle :
	public Shape
{

public:
	Circle(float r);
	virtual ~Circle();

	virtual float S() override;
	virtual float P() override;
	virtual std::string GetName() override;
private:
	float r, s, p;
};

