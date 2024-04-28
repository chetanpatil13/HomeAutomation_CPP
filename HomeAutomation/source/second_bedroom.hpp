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

#ifndef SECOND_BEDROOM_HPP
#define SECOND_BEDROOM_HPP

#include "rooms.hpp"

namespace second_bedroom
{
	enum appliances
	{
		LIGHT = 0,
		FAN = 1,
		AC = 2,
		MAX_NUM_OF_APPL = 3
	};

	class SecondBedroom : public Rooms
	{
	private:
		bool appliances[MAX_NUM_OF_APPL]{ false };
	public:
		void getStatus();
		void setStatus(int value);

		SecondBedroom() = default;
	};
}

#endif
