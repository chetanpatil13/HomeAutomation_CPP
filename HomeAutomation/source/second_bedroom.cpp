// Project : Home Automation
// Date    : 28 April 2024
// Author  : Chetan Patil

#include"iostream"
#include"second_bedroom.hpp"

using namespace std;
using namespace second_bedroom;

void SecondBedroom::getStatus()
{
	cout << "Status of Second Bedroom :: " << endl;

	auto statusOf{
		[](bool value)->string { if (value) return "ON"; else return "OFF"; } };
	auto printStatus{
		[](string str1, string str2) { cout << str1 << str2 << endl; } };

	cout << "0. Exit to Main Menu" << endl;
	printStatus("1. Light1 :: ", statusOf(appliances[LIGHT]));
	printStatus("2. Fan1   :: ", statusOf(appliances[FAN]));
	printStatus("3. AC     :: ", statusOf(appliances[AC]));
	cout << endl;
}

void SecondBedroom::setStatus(int value)
{
	appliances[(value - 1)] = !(appliances[(value - 1)]) && true;
}