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
	void deleteName()
	{
		surName = nullptr;
		name = nullptr;
	}
};

enum typeOfSchoolSubject
{
	DiscreteMath, mathAnalysis, quantumPhysics, mechanics
};

class Admin : public FullName
{
	

	Student* allYourStudent;
	int sizeStudent;
public:
	void createStudent(string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser);
	void deleteStudent(int pos);
	void newCreateStudent(int pos, string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser);
	void printResultTest();
	void createQuize(typeOfSchoolSubject subject);
	void doTest(typeOfSchoolSubject subject);
};

void Admin::createStudent(string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser)
{
	allYourStudent[sizeStudent]->name.createName(surNameUser, nameUser);
	allYourStudent[sizeStudent]->password = passwordUser;
	allYourStudent[sizeStudent]->address = addressUser;
	allYourStudent[sizeStudent]->numberPhone = numberPhoneUser;
}

void Admin::deleteStudent(int pos)
{
	if (pos == -1)
	{
		allYourStudent[sizeStudent].deleteName();
		allYourStudent[sizeStudent]->password = nullptr;
		allYourStudent[sizeStudent]->address = nullptr;
		allYourStudent[sizeStudent]->numberPhone = nullptr;
	}
	else
	{
		allYourStudent[pos].deleteName();
		allYourStudent[pos]->password = nullptr;
		allYourStudent[pos]->address = nullptr;
		allYourStudent[pos]->numberPhone = nullptr;
	}
}

void Admin::newCreateStudent(int pos, string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser)
{
	deleteStudent(pos);
	createStudent(surNameUser, nameUser, passwordUser, addressUser, numberPhoneUser);
}

void Admin::printResultTest()
{
	cout << "Print test what you want see:\n1)DiscreteMath;\n2)mathAnalysis;\n3)quantumPhysics;\n4)mechanics;\n5)nothing: ";
	int vibor;	cin >> vibor;	cout << endl;
	typeOfSchoolSubject subject;
	switch (vibor)
	{
	case 1:
		subject = DiscreteMath;
		break;
	case 2:
		subject = mathAnalysis;
		break;
	case 3:
		subject = quantumPhysics;
		break;
	case 4:
		subject = mechanics;
		break;
	case 5:
		break;
	default:
		break;
	}
	cout << "Print name student what you want see:";
	string name;	cin >> name;	cout << endl;
}

class Student : public Admin
{
private:
	FullName name;
	string password;
	int address;
	int numberPhone;

public:
	Student() { cout << "Constr!" << endl; }
	~Student();
	void registration(string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser);
	void deleteReg();
	void tests();
	void math();
	void physics();
	void Mechanics();
};

Student::~Student()
{
	cout << "Destr!" << endl;
}

void Student::registration(string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser)
{
	createStudent(surNameUser, nameUser, passwordUser, addressUser, numberPhoneUser);
	name.createName(surNameUser, nameUser);
	password = passwordUser;
	address = addressUser;
	numberPhone = numberPhoneUser;
}

void Student::deleteReg()
{
	deleteStudent(-1);
	deleteName();
	password = nullptr;
	address = nullptr;
	numberPhone = nullptr;
}

void Student::tests()
{
	cout << "Which Test you need?\n1)Math;\n2)physics;\n3)mechanics: ";
	int vibor; cin >> vibor;
	switch (vibor)
	{
	case 1:
		math();
		break;
	case 2:
		physics();
		break;
	case 3:
		Mechanics();
		break;
	default:
		break;
	}
}

void Student::math()
{
	cout << "What you want do in test?\n1)DiscreteMath;\n2)mathAnalysis: ";
	int vibor; cin >> vibor;
	switch (vibor)
	{
	case 1:
		doTest(DiscreteMath);
		break;
	case 2:
		doTest(mathAnalysis);
		break;
	default:
		break;
	}
}

void Student::physics()
{
	cout << "Do you want do this test?\n1)Yes(do quantumPhysics);\n2)No: ";
	int vibor; cin >> vibor;
	switch (vibor)
	{
	case 1:
		doTest(quantumPhysics);
		break;
	case 2:
		break;
	default:
		break;
	}
}

void Student::Mechanics()
{
	cout << "Do you want do this test?\n1)Yes(do mechanics);\n2)No: ";
	int vibor; cin >> vibor;
	switch (vibor)
	{
	case 1:
		doTest(mechanics);
		break;
	case 2:
		break;
	default:
		break;
	}
}
