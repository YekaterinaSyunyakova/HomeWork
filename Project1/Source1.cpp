
#include "stdafx.h"

class Figure
{
public:
	Figure() {};
	virtual ~Figure() {};
	virtual  float getArea()=0;



};

class Rectangle:public Figure 
{
public:
	float width, height;


	Rectangle() {};
	Rectangle(float width, float height) {
		this->width = width;
		this->height = height;

	}
	~Rectangle() {};

	float getArea() final {
		return width * height;
	}



};

class Circle: public Figure

{
public:
	float radius;

	Circle(float radius) {
		this->radius = radius;

	};
	~Circle() {};

	float getArea() override {
		return radius * radius * 3.14;
	}



};

void main() {

	Figure **arr = new Figure *[2];

	arr[0] = new Rectangle(3, 2);
	arr[1] = new Circle(2);


	for (size_t i = 0; i < 2; ++i) {
		cout << arr[i]->getArea() << endl;
		delete arr[i];
	}

	delete arr;

	//return 0;

	system("pause");
}