// Project : Home Automation
// Date    : 28 April 2024
// Author  : Chetan Patil

#include<iostream>

#include"common.hpp"
#include"menu.hpp"
#include"hall.hpp"
#include"kitchen.hpp"
#include"master_bedroom.hpp"
#include"second_bedroom.hpp"

int main()
{
	Menu menu;
	hall::Hall h;
	kitchen::Kitchen k;
	master_bedroom::MasterBedroom mb;
	second_bedroom::SecondBedroom sb;

	Rooms* pt_room[MAX_NUM_OF_ROOMS]{&h, &k, &mb, &sb};

	while (true)
	{
		menu.selectRoom();
		system("cls");

		while (true)
		{
			pt_room[(menu.getRoomNumber() - 1)]->getStatus();
			menu.control();

			if (menu.getOption() > 0)
				pt_room[(menu.getRoomNumber() - 1)]->setStatus(menu.getOption());
			else
				break;

			system("cls");
		}

		system("cls");		
	}

	return 0;
}