#pragma once
#include <iostream>


using namespace std;

class FullName
{
	string surName;
	string name;

public:
	void createName(string surNameUser, string nameUser)
	{
		surName = surNameUser;
		name = nameUser;
	}
};

class Admin
{

};



class Student
{
	FullName name;
	string password;
	int address;
	int numberPhone;

public:
	Student() {}
	~Student();
	void registration(string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser);
	void tests();
	void math();
	void physics();
	void mechanick();
};

Student::~Student()
{
	cout << "End!" << endl;
}

void Student::registration(string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser)
{
	name.createName(surNameUser, nameUser);
	password = passwordUser;
	address = addressUser;
	numberPhone = numberPhoneUser;
}

void Student::tests()
{
	cout << "Which Test you need?\n1)Math;\n2)physics;\n3)mechanick:";
	int vibor; cin >> vibor;
	switch (vibor)
	{
	case 1:
		math();
	case 2:
		physics();
	case 3:
		mechanick();
	default:
		break;
	}
}
