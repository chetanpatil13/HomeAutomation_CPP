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
