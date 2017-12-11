#include "stdafx.h"

class MyException: public exception
{
public:
	MyException() {};
	~MyException() {};

};

float divide(float a, float b) {
	if(b==0){
		throw MyException();
	}
	else {
		return a / b;
	}

}

int main() {

	try {
		divide(2, 0);
	}
	catch (MyException e){
		e.what();
	}

	system("pause");

	return 0;
}