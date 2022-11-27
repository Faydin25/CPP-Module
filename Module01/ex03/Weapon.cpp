

#include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(const std::string &s) {
    this->_weapon = s;
};

void Weapon::setType(const std::string &str) {
    this->_weapon = str;
}

const std::string Weapon::getType() const {
    return this->_weapon;
}