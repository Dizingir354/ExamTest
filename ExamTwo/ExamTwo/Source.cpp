#include <iostream>
#include <string>
#include "Test.h"

using namespace std;


int main()
{
	cout << "__________________________________________________________________________________________________________________________\n_________________________________________________________________________________________\n";
	cout << "																	Admin mode\n";
	int vibor;
	Admin admin;
	string surNameUser; string nameUser; string passwordAdmin; string passwordUser; int addressUser; int numberPhoneUser;
	cout << "print your surname ";	cin >> surNameUser;	cout << endl;
	cout << "print your name ";	cin >> nameUser; cout << endl;
	cout << "print your password ";	cin >> passwordAdmin; cout << endl;
	admin.registration(surNameUser, nameUser, passwordAdmin);
	cout << "_________________________________________________________________________________________\n__________________________________________________________________________________________________________________________\n";
	system("pause");
	system("cls");
	while (true)
	{
		cout << "You`re 1)admin or 2)student "; cin >> vibor; cout << endl;
		if (vibor == 1)
		{
			cout << "__________________________________________________________________________________________________________________________\n_________________________________________________________________________________________\n";
			cout << "																	Admin mode\n";
			string name;
			string password;
			cout << "Print your name:\n";	cin >> name; cout << endl;
			cout << "Print your password:\n";	cin >> password; cout << endl;
			if (admin.name == name->name && admin.password == password)
			{
				if (vibor == 1)
				{
					cout << "Do you want do create student or delete student or create Test:\n1)Create;\n2)Delete;\n3)Test: ";	cin >> vibor; cout << endl;
					if (vibor == 1)
					{
						cout << "You are Admin or student:\n1)Admin;\n2)Student: ";	cin >> vibor; cout << endl;
						cout << "print surname student ";	cin >> surNameUser;	cout << endl;
						cout << "print student name ";	cin >> nameUser; cout << endl;
						cout << "print student password ";	cin >> passwordUser; cout << endl;
						cout << "print student address ";	cin >> addressUser; cout << endl;
						cout << "print student number phone ";	cin >> numberPhoneUser; cout << endl;
						admin.createStudent(surNameUser, nameUser, passwordUser, addressUser, numberPhoneUser);
					}
					else if (vibor == 2)
					{
						cout << "print surname student ";	cin >> surNameUser;	cout << endl;
						for (size_t i = -1; i < admin.sizeStudent; i++)
						{
							if (surNameUser == admin.allYourStudent[i])
							{
								admin.deleteStudent(i);
							}
						}

					}
					else
					{
						cout << "print Theme Test:\n1)DiscreteMath;\2)mathAnalysis;\n3)quantumPhysics;\n4)mechanics: ";
						cin >> vibor;
						if (vibor == 1)
						{
							admin.createQuize(DiscreteMath);
						}
						else if (vibor == 2)
						{
							admin.createQuize(mathAnalysis);
						}
						else if (vibor == 3)
						{
							admin.createQuize(quantumPhysics);
						}
						else
						{
							admin.createQuize(mechanics);
						}
					}
				}
			}
			cout << "_________________________________________________________________________________________\n__________________________________________________________________________________________________________________________\n";
			system("pause");
			system("cls");
		}
		else
		{
			Student you;
			cout << "print your surname ";	cin >> surNameUser;	cout << endl;
			cout << "print your name ";	cin >> nameUser; cout << endl;
			cout << "print your password ";	cin >> passwordUser; cout << endl;
			cout << "print your address ";	cin >> addressUser; cout << endl;
			cout << "print your number phone ";	cin >> numberPhoneUser; cout << endl;
			you.registration(surNameUser, nameUser, passwordUser, addressUser, numberPhoneUser);
			cout << "What you want do:\n1)delete someself\n2)doing test: ";
			cin >> vibor;
			cout << endl;
			if (vibor == 1)
			{
				you.deleteReg();
			}
			else
			{
				you.tests();
			}
		}
	}
	



	system("pause");
	return 0;
}