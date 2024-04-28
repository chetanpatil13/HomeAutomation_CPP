// Project : Home Automation
// Date    : 28 April 2024
// Author  : Chetan Patil

#ifndef HALL_HPP
#define HALL_HPP

#include "rooms.hpp"

namespace hall
{
	enum appliances
	{
		LIGHT1 = 0,
		LIGHT2 = 1,
		FAN1 = 2,
		FAN2 = 3,
		TV = 4,
		AC = 5,
		MAX_NUM_OF_APPL = 6
	};

	class Hall : public Rooms
	{
	private:
		bool appliances[MAX_NUM_OF_APPL]{ false };

	public:
		void getStatus();
		void setStatus(int value);

		Hall() = default;
	};
}

#endif
