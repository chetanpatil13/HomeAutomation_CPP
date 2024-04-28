// Project : Home Automation
// Date    : 28 April 2024
// Author  : Chetan Patil

#ifndef MASTER_BEDROOM_HPP
#define MASTER_BEDROOM_HPP

#include "rooms.hpp"

namespace master_bedroom
{
	enum appliances
	{
		LIGHT = 0,
		FAN = 1,
		TV = 2,
		AC = 3,
		MAX_NUM_OF_APPL = 4
	};

	class MasterBedroom : public Rooms
	{
	private:
		bool appliances[MAX_NUM_OF_APPL]{ false };

	public:
		void getStatus();
		void setStatus(int value);

		MasterBedroom() = default;
	};
}
#endif
