#pragma once
#include <string>
#include <vector>

class Character
{
public:
	Character();
	void setAmmo(int _ammo);
	int getAmmo();
private:
	int ammo;

};


class Intruder : public Character
{
public:
	Intruder();
	void addCargo(std::string item);
	void removeCargo();

private:
	std::vector<std::string> cargo;
};

