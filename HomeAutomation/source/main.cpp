// MIT License
//
// Copyright(c) 2022 Chetan Patil
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

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