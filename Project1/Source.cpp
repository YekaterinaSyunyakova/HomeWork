
#include "stdafx.h"


class Employer 
{
public:

	Employer();
	

	~Employer();

	virtual void Print() = 0 {};

};


class President:Employer 
{
public:
	string *name;
	string *type;

	President(string name, string type) {
		this->name = new string(name);

	}


	void Print() {
		cout << *name << " " << *type << endl;
	
	}
	~President();




};
/*
class Manager
{

     Manager();
	~Manager();


};

class Worker
{

	Worker();
	~Worker();


};
*/
void main() {
	//President("gff","dhdhfh") A;

	//A.Print();




	system("pause");
};