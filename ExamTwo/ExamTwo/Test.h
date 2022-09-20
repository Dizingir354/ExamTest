#pragma once
#include <iostream>
#include <string>

#include <iomanip>
#include <fstream>

using namespace std;

class FullName
{
public:
	string surName;
	string name;

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

class Quize
{
public:
	string* quest;
	int sizeQuest = 0;
	string* variantAnswer;
	int sizeAnswer = 4;
	int numberTrueAnswer;
	int ball;
	typeOfSchoolSubject subject;
};

class Admin : public FullName, public Quize
{
	
public:
	FullName name;
	string password;
	Quize* AllQuize;
	int sizeQuize = 0;
	Student* allYourStudent = new Student[sizeStudent];
	int sizeStudent = 0;

	void registration(string surNameUser, string nameUser, string passwordAdmin);
	void login(string surNameUser, string nameUser, string passwordAdmin, bool loginOrNot);
	void createStudent(string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser);
	void deleteStudent(int pos);
	void newCreateStudent(int pos, string surNameUser, string nameUser, string passwordUser, int addressUser, int numberPhoneUser);
	void printResultTest();
	void createQuize(typeOfSchoolSubject subject);
	void createQuest();
	void doTest(typeOfSchoolSubject subject);
};

void Admin::registration(string surNameUser, string nameUser, string passwordAdmin)
{
	name.createName(surNameUser, nameUser);
	password = passwordAdmin;
}

void Admin::login(string surNameUser, string nameUser, string passwordAdmin, bool loginOrNot)
{
	if (surNameUser == name.surName && nameUser == name.name && passwordAdmin == password)
		loginOrNot == true;
	else
		loginOrNot == false;
}

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
	for (int i = 0; i < sizeStudent; i++)
	{
		if (name == allYourStudent[i].name.name)
		{
			cout << allYourStudent[i].name.name << "have " << allYourStudent[i].bal <<"bal" << endl;
		}
	}
}

void Admin::createQuize(typeOfSchoolSubject subject)
{
	sizeQuize++;
	AllQuize[sizeQuize].subject = subject;
	for (size_t i = 0; i < sizeQuest; i++)
	{
		createQuest();
		cout << "Want you create to Quest?\n1)Yes\n2)No " << endl;	int vibor;	cin >> vibor;
		if (vibor == 1)
			sizeQuest++;
		else if (vibor == 2)
			cout << "Okey" << endl;
		else
			cout << "You no have variant three, this variant two." << endl;
	}
}

void Admin::createQuest()
{
	sizeQuest++;
	cout << "print your Quest ";	cin >> AllQuize[sizeQuize].quest[sizeQuize];
	for (int i = 0; i < sizeAnswer; i++)
	{
		cout << "print your " << i << " question";	cin >> AllQuize[sizeQuize].variantAnswer[i];
	}
	cout << "print number true answer ";	cin >> AllQuize[sizeQuize].numberTrueAnswer;
}

void Admin::doTest(typeOfSchoolSubject subject)
{
	cout << "print your name ";		string yourName;	cin >> yourName;	cout << ".\n";
	int answer;
	for (int i = 0; i < sizeStudent; i++)
	{
		if (yourName == allYourStudent[i].name.name)
		{
			for (int j = 0; j < sizeQuize; j++)
			{
				if (subject == AllQuize[j].subject)
				{
					for (int k = 0; k < sizeQuest; k++)
					{
						cout << "your " << k << " question " << quest[k];
						cin >> answer;
						if (numberTrueAnswer == answer)
						{
							cout << "it's true answer" << endl;
							ball++;
						}
						else
						{
							cout << "it's false answer" << endl;
						}
					}
				}
			}
		}
	}
}

class Student : public Admin
{

public:
	FullName name;
	string password;
	int address;
	int numberPhone;
	int bal;

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
	address = 0;
	numberPhone = 0;
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
