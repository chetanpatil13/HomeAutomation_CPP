#include"iostream"
#include"kitchen.hpp"

using namespace std;
using namespace kitchen;

void Kitchen::getStatus()
{
	cout << "Status of Kitchen :: " << endl;

	auto statusOf{
		[](bool value)->string { if (value) return "ON"; else return "OFF"; } };
	auto printStatus{
		[](string str1, string str2) { cout << str1 << str2 << endl; } };

	cout << "0. Exit to Main Menu" << endl;
	printStatus("1. Light   :: ", statusOf(appliances[LIGHT]));
	printStatus("2. Fan     :: ", statusOf(appliances[FAN]));
	printStatus("3. Chimney :: ", statusOf(appliances[CHIMNEY]));

	cout << endl;
}

void Kitchen::setStatus(int value)
{
	appliances[(value - 1)] = !(appliances[(value - 1)]) && true;
}