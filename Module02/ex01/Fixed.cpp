#include "Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
    std::cout << "Default constructor called" << std::cout;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits =(int)round(value *  256);
}
Fixed::Fixed(const float nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = (int) roundf(nbr * 256);
}

void Fixed::setRawBits(const int rawBits)
{
    this->_rawBits = rawBits;
    return;
}

int Fixed::getRawBits() const
{
    return (this->_rawBits);
}

int Fixed::toInt() const
{
    return ((int)this->_rawBits / 256);
}

float Fixed::toFloat() const
{
    return ((float)this->_rawBits / 256);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{

    this->_rawBits = other._rawBits;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    this->_rawBits = other.getRawBits();
    return *this;

}

std::ostream &operator<<(std::ostream &o, const Fixed &Fixed)
{
    o << Fixed.toFloat();
    return o;
}