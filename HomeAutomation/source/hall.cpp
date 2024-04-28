#include"iostream"
#include"hall.hpp"

using namespace std;
using namespace hall;

void Hall::getStatus()
{
	cout << "Status of Hall :: " << endl;

	auto statusOf{
		[](bool value)->string { if (value) return "ON"; else return "OFF"; } };
	auto printStatus{
		[](string str1, string str2) { cout << str1 << str2 << endl; } };
	
	cout << "0. Exit to Main Menu" << endl;
	printStatus("1. Light1 :: ", statusOf(appliances[LIGHT1]));
	printStatus("2. Light2 :: ", statusOf(appliances[LIGHT2]));
	printStatus("3. Fan1   :: ", statusOf(appliances[FAN1]));
	printStatus("4. Fan2   :: ", statusOf(appliances[FAN2]));
	printStatus("5. TV     :: ", statusOf(appliances[TV]));
	printStatus("6. AC     :: ", statusOf(appliances[AC]));
	cout << endl;
}

void Hall::setStatus(int value)
{
	appliances[(value - 1)] = !(appliances[(value - 1)]) && true;		
}
