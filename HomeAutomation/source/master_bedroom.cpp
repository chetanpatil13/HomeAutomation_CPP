#include"iostream"
#include"master_bedroom.hpp"

using namespace std;
using namespace master_bedroom;

void MasterBedroom::getStatus()
{
	cout << "Status of Master Bedroom :: " << endl;

	auto statusOf{
		[](bool value)->string { if (value) return "ON"; else return "OFF"; } };
	auto printStatus{
		[](string str1, string str2) { cout << str1 << str2 << endl; } };

	cout << "0. Exit to Main Menu" << endl;
	printStatus("1. Light1 :: ", statusOf(appliances[LIGHT]));
	printStatus("2. Fan1   :: ", statusOf(appliances[FAN]));
	printStatus("3. TV     :: ", statusOf(appliances[TV]));
	printStatus("4. AC     :: ", statusOf(appliances[AC]));
	cout << endl;
}

void MasterBedroom::setStatus(int value)
{
	appliances[(value - 1)] = !(appliances[(value - 1)]) && true;
}