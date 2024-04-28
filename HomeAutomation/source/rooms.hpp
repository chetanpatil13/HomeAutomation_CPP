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