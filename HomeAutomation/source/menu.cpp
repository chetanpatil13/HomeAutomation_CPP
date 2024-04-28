#include<iostream>
#include"menu.hpp"

using namespace std;

void Menu::selectRoom()
{
	auto print{ [](string str) { cout << str << endl; } };

	print("Welcome Home Automation !!!");
	cout << endl;

	print("Select the room : ");
	print("1. Hall");
	print("2. Kitchen");
	print("3. Master Bedroom");
	print("4. Second Bedroom");
	cin >> roomNumber;	
}

void Menu::control()
{
	cout << "Press number to ON/OFF appliances :: " << endl;	
	cin >> option;
	cout << endl;
}
