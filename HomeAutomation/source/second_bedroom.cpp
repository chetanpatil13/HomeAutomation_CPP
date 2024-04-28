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