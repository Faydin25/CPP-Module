#include "HumanA.hpp"

HumanA::HumanA() {};

HumanA::HumanA(const std::string &s, Weapon &obj) {
    this->name = s;
    this->_weapon = &obj;
}

void HumanA::attack() {
    std::cout << this->name << " attack with " << this->_weapon->getType() << std::endl;
};

