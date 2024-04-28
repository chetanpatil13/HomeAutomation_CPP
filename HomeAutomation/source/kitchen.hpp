#ifndef KITCHEN_HPP
#define KITCHEN_HPP

#include "rooms.hpp"

namespace kitchen
{
	enum appliances
	{
		LIGHT = 0,
		FAN = 1, 
		CHIMNEY = 2,
		MAX_NUM_OF_APPL = 3
	};

	class Kitchen : public Rooms
	{
	private:
		bool appliances[MAX_NUM_OF_APPL]{ false };

	public:
		void getStatus();
		void setStatus(int value);

		Kitchen() = default;
	};
}

#endif
