#include <iostream>
#include <cmath>
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

void PrintOut(Shape *sh)
{
	cout << "Площадь " << sh->GetName() <<  " равна s = " << sh->S() << endl;
	cout << "Периметр " << sh->GetName() << " равен p = " << sh->P() << endl;
}
int main()
{
	setlocale(0, "");
	Shape* sh = new Triangle(100, 100, 200, 200, 150, 150);
	PrintOut(sh);

	delete sh;

	sh = new Rectangle(200, 200, 200, 300, 300, 300, 300, 200);
	PrintOut(sh);
	
	delete sh;

	sh = new Circle(50);
	PrintOut(sh);
	delete sh;
	cin.get();

	return 0;
}

