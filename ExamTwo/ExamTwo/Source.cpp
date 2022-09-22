#include <iostream>
#include <string>
#include "Test.h"
#include "Menu.h"

using namespace std;


int main()
{
	Admin admin;
	bool login;
	string surNameAdmin;
	string nameAdmin;
	string passwordAdmin;
	//----------------------------------------------------------------------------------//
	Student student;
	string surNameUser;
	string nameUser;
	string passwordUser;
	int addressUser;
	int numberPhoneUser;
	while (true)
	{
		size_t c = Menu::select_vertical({
		"Admin",
		"Student",
		"exit" },
		HorizontalAlignment::Center, 5);

		switch (c)
		{
		case 0:
			system("cls");
			size_t c = Menu::select_vertical({
			"register",
			"login",
			"exit" },
			HorizontalAlignment::Center, 5);

			switch (c)
			{
			case 0:
				system("cls");

				cout << "Print surName"; cin >> surNameAdmin;
				cout << "Print Name"; cin >> nameAdmin;
				cout << "Print password"; cin >> passwordAdmin;
				admin.registration(surNameAdmin, nameAdmin, passwordAdmin);
				break;
			case 1:
				system("cls");
				cout << "Print surName"; cin >> surNameAdmin;
				cout << "Print Name"; cin >> nameAdmin;
				cout << "Print password"; cin >> passwordAdmin;
				admin.login(surNameAdmin, nameAdmin, passwordAdmin, login);
				if (login == true);
				{
					bool flag = false;
					while (true)
					{
						system("cls");
						int c = Menu::select_vertical({
							"create student",
							"delete student",
							"change student",
							"create quize",
							"do your test",
							"Exit" },
							HorizontalAlignment::Center, 5);

						switch (c)
						{
						case 0:
							system("cls");
							cout << "Print surName student"; cin >> surNameUser;
							cout << "Print Name student"; cin >> nameUser;
							cout << "Print password student"; cin >> passwordUser;
							cout << "Print address student"; cin >> addressUser;
							cout << "Print phone student"; cin >> numberPhoneUser;
							admin.createStudent(surNameUser, nameUser, passwordUser, addressUser, numberPhoneUser);
							break;
						case 1:
							system("cls");
							cout << "Print phone"; cin >> numberPhoneUser;
							for (size_t i = 0; i < admin.sizeStudent; i++)
							{
								if(numberPhoneUser == admin.allYourStudent[i].numberPhone)
									admin.deleteStudent(i);
							}
							break;
						case 2:
							system("cls");
							cout << "Print surName student"; cin >> surNameUser;
							cout << "Print Name student"; cin >> nameUser;
							cout << "Print password student"; cin >> passwordUser;
							cout << "Print address student"; cin >> addressUser;
							cout << "Print phone student"; cin >> numberPhoneUser;
							for (size_t i = 0; i < admin.sizeStudent; i++)
							{
								if (numberPhoneUser == admin.allYourStudent[i].numberPhone)
									admin.newCreateStudent(i, surNameUser, nameUser, passwordUser, addressUser, numberPhoneUser);
							}
							break;
						case 3:
							system("cls");
							
							bool flag = false;
							while (true)
							{
								system("cls");
								int c = Menu::select_vertical({
								"DiscreteMath",
								"mathAnalysis",
								"quantumPhysics",
								"mechanics" },
								HorizontalAlignment::Center, 5);

								switch (c)
								{
								case 0:
									system("cls");
									admin.createQuize(DiscreteMath);
									break;
								case 1:
									system("cls");
									admin.createQuize(mathAnalysis);
									break;
								case 2:
									system("cls");
									admin.createQuize(quantumPhysics);
									break;
								case 3:
									system("cls");
									admin.createQuize(mechanics);
									break;
								case 4:
									flag = true;
									break;
								default:
									break;
								}

								if (flag)
									break;
							}

							break;
						case 4:
							system("cls");
							bool flag = false;
							while (true)
							{
								system("cls");
								int c = Menu::select_vertical({
								"DiscreteMath",
								"mathAnalysis",
								"quantumPhysics",
								"mechanics" },
								HorizontalAlignment::Center, 5);

								switch (c)
								{
								case 0:
									system("cls");
									admin.doTest(DiscreteMath);
									break;
								case 1:
									system("cls");
									admin.doTest(mathAnalysis);
									break;
								case 2:
									system("cls");
									admin.doTest(quantumPhysics);
									break;
								case 3:
									system("cls");
									admin.doTest(mechanics);
									break;
								case 4:
									flag = true;
									break;
								default:
									break;
								}

								if (flag)
									break;
							break;
						case 5:
							system("cls");
							flag = true;
							break;
						default:
							break;
						}

						if (flag)
							break;
					}
				}
				break;
			case 2:
				exit(0);
			default:
				break;
			}
			break;
		case 1:
			system("cls");
			size_t c = Menu::select_vertical({
			"Реєстрація",
			"Вхід",
			"Закрити програму" },
			HorizontalAlignment::Center, 5);

			switch (c)
			{
			case 0:
				system("cls");
				//при нажатии на первый пункт меню должен выполняться кусок кода находящийся здесь.
				//ну и также со всеми остальными пунктами
				break;
			case 1:
				system("cls");

				break;
			case 2:
				exit(0); //в случае с выходом, тут есть два варианта. если это должен быть выход вообще из программы, то есть завершить, то вот этот вариант.
			default:
				break;
			}
			break;
		case 2:
			exit(0);
		default:
			break;
		system("cls");
	}

	system("pause");
	return 0;
}