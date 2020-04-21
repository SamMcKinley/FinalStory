#include "Classes.h"
#include <string>
#include <vector>

Character::Character() : ammo(10) {}
void Character::setAmmo(int _ammo)
{
	ammo = _ammo;
}
int Character::getAmmo()
{
	return ammo;
}

Intruder::Intruder() : Character() {}
void Intruder::addCargo(std::string item)
{
	cargo.push_back(item);
}
void Intruder::removeCargo()
{
	cargo.pop_back();
}
