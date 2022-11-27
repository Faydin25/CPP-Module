#include "HumanB.hpp"

HumanB::HumanB() {};

HumanB::HumanB(const std::string &s) {
    this->name = s;
};

void HumanB::attack() {
    std::cout << this->name << " attack with " << this->_weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon &obj) {
    this->_weapon = &obj;
}

