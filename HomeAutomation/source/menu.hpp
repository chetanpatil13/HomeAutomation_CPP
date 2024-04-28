#ifndef MENU_HPP
#define MENU_HPP

class Menu
{
private:
	int roomNumber{};
	int option{};
public:
	int getRoomNumber() { return roomNumber; }
	int getOption() { return option; }
	void selectRoom();
	void control();

	Menu() = default;
};

#endif 