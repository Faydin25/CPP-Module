#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
    std::cout << "Default constructor called" << std::cout;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = value << Fixed::_nFracBits;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}