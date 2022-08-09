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

enum typeOfSchoolSubject
{
	DiscreteMath, mathAnalysis, quantumPhysics, mechanics
};

class Admin
{

	void doQuize(typeOfSchoolSubject subject);
public:
	void createQuize(typeOfSchoolSubject subject);
	
};



class Student : public Admin
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
	void mechanics();
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
	cout << "Which Test you need?\n1)Math;\n2)physics;\n3)mechanics: ";
	int vibor; cin >> vibor;
	switch (vibor)
	{
	case 1:
		math();
	case 2:
		physics();
	case 3:
		mechanics();
	default:
		break;
	}
}

void Student::math()
{
	cout << "You reale want do in test?\n1)DiscreteMath;\n2)mathAnalysis: ";
	int vibor; cin >> vibor;
	switch (vibor)
	{
	case 1:
		
	case 2:
		
	default:
		break;
	}
}
