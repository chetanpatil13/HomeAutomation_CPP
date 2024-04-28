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

#ifndef HOME_AUTOMATION_HPP
#define HOME_AUTOMATION_HPP

// 2BHK apartment 
// Properties:
// Hall : 2 lights, 2 fans, tv, ac, 
// Master Bedroom : ac, 1 light, 1 fan, 1 tv
// Second Bedroom : ac, 1 light, 1 fan, 
// Kitchen : light, fan, chimney

class Rooms
{
public:
	virtual void getStatus() = 0;
	virtual void setStatus(int value) = 0;

	Rooms() = default;
};

#endif