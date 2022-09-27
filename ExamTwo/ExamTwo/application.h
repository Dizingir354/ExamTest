//#pragma once
//#include <iostream>
//#include <string>
//
//#include "Test.h"
//#include "Menu.h"
//
//using namespace std;
//
//
//class application
//{
//	Admin admin;
//	string surNameAdmin;
//	string nameAdmin;
//	string passwordAdmin;
//	bool login;
//
//	Student student;
//	string surNameUser;
//	string nameUser;
//	string passwordUser;
//	int addressUser;
//	int numberPhoneUser;
//
//public:
//	void adminOrStudent();
//	void registerOrLoginAdmin(Admin Admin);
//	void menuAdmin();
//	void menuCreateTest();
//	void menuDoTest();
//	void registerOrLoginStudent(Student Student);
//	void menuStudent();
//};
//
//void application::adminOrStudent()
//{
//	size_t c = Menu::select_vertical({
//		"Admin",
//		"Student",
//		"exit" },
//		HorizontalAlignment::Center, 5);
//
//	switch (c)
//	{
//	case 0:
//		system("cls");
//		registerOrLoginAdmin(admin);
//		break;
//	case 1:
//		system("cls");
//		registerOrLoginStudent(student);
//		break;
//	case 2:
//		exit(0);
//	default:
//		break;
//		system("cls");
//	}
//}
//
//void application::registerOrLoginAdmin(Admin Admin)
//{
//	system("cls");
//	size_t c = Menu::select_vertical({
//	"register",
//	"login",
//	"exit" },
//	HorizontalAlignment::Center, 5);
//
//	switch (c)
//	{
//	case 0:
//		system("cls");
//		if (login == true)
//		{
//			cout << "Print surName"; cin >> surNameAdmin;
//			cout << "Print Name"; cin >> nameAdmin;
//			cout << "Print password"; cin >> passwordAdmin;
//			admin.registration(surNameAdmin, nameAdmin, passwordAdmin);
//			login = true;
//		}
//		break;
//	case 1:
//		system("cls");
//		cout << "Print surName"; cin >> surNameAdmin;
//		cout << "Print Name"; cin >> nameAdmin;
//		cout << "Print password"; cin >> passwordAdmin;
//		admin.login(surNameAdmin, nameAdmin, passwordAdmin, login);
//		if (login == true);
//		{
//			menuAdmin();
//		}
//		break;
//	case 2:
//		exit(0);
//	default:
//		break;
//}
//
//void application::menuAdmin()
//{
//	while (true)
//	{
//		system("cls");
//		size_t c = Menu::select_vertical({
//			"create student",
//			"delete student",
//			"change student",
//			"create quize",
//			"do your test",
//			"Exit" },
//			HorizontalAlignment::Center, 5);
//
//		switch (c)
//		{
//		case 0:
//			system("cls");
//			cout << "Print surName student"; cin >> surNameUser;
//			cout << "Print Name student"; cin >> nameUser;
//			cout << "Print password student"; cin >> passwordUser;
//			cout << "Print address student"; cin >> addressUser;
//			cout << "Print phone student"; cin >> numberPhoneUser;
//			admin.createStudent(surNameUser, nameUser, passwordUser, addressUser, numberPhoneUser);
//			break;
//		case 1:
//			system("cls");
//			cout << "Print phone"; cin >> numberPhoneUser;
//			for (int i = 0; i < admin.sizeStudent; i++)
//			{
//				if (numberPhoneUser == admin.allYourStudent[i].numberPhone)
//					admin.deleteStudent(i);
//			}
//			break;
//		case 2:
//			system("cls");
//			cout << "Print surName student"; cin >> surNameUser;
//			cout << "Print Name student"; cin >> nameUser;
//			cout << "Print password student"; cin >> passwordUser;
//			cout << "Print address student"; cin >> addressUser;
//			cout << "Print phone student"; cin >> numberPhoneUser;
//			for (int i = 0; i < admin.sizeStudent; i++)
//			{
//				if (numberPhoneUser == admin.allYourStudent[i].numberPhone)
//					admin.newCreateStudent(i, surNameUser, nameUser, passwordUser, addressUser, numberPhoneUser);
//			}
//			break;
//		case 3:
//			system("cls");
//			menuCreateTest();
//			break;
//		case 4:
//			system("cls");
//			menuDoTest();
//		case 5:
//			system("cls");
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//void application::menuCreateTest()
//{
//	while (true)
//	{
//		system("cls");
//		int c = Menu::select_vertical({
//		"DiscreteMath",
//		"mathAnalysis",
//		"quantumPhysics",
//		"mechanics" },
//		HorizontalAlignment::Center, 5);
//
//		switch (c)
//		{
//		case 0:
//			system("cls");
//			admin.createQuize(DiscreteMath);
//			break;
//		case 1:
//			system("cls");
//			admin.createQuize(mathAnalysis);
//			break;
//		case 2:
//			system("cls");
//			admin.createQuize(quantumPhysics);
//			break;
//		case 3:
//			system("cls");
//			admin.createQuize(mechanics);
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//void application::menuDoTest()
//{
//	while (true)
//	{
//		system("cls");
//		int c = Menu::select_vertical({
//		"DiscreteMath",
//		"mathAnalysis",
//		"quantumPhysics",
//		"mechanics" },
//		HorizontalAlignment::Center, 5);
//
//		switch (c)
//		{
//		case 0:
//			system("cls");
//			admin.doTest(DiscreteMath);
//			break;
//		case 1:
//			system("cls");
//			admin.doTest(mathAnalysis);
//			break;
//		case 2:
//			system("cls");
//			admin.doTest(quantumPhysics);
//			break;
//		case 3:
//			system("cls");
//			admin.doTest(mechanics);
//			break;
//		default:
//			break;
//		}
//	}
//}
//
//void application::registerOrLoginStudent(Student Student)
//{
//	system("cls");
//	size_t c = Menu::select_vertical({
//	"register",
//	"login",
//	"exit" },
//	HorizontalAlignment::Center, 5);
//
//	switch (c)
//	{
//	case 0:
//		system("cls");
//
//		break;
//	case 1:
//		system("cls");
//
//		break;
//	case 2:
//		exit(0);
//	default:
//		break;
//		system("cls");
//	}
//}
