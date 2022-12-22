#include "Fixed.hpp"

Fixed::Fixed(): _rawBits(0)
{
    std::cout << "Default constructor called" << std::cout;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = (value * 256); 
}

Fixed::Fixed(const Fixed& other){
    this->_rawBits = other._rawBits;
    return;
}

void Fixed::setRawBits(const int rawBits){
    this->_rawBits = rawBits;
    return;
}

int Fixed::getRawBits() const{
    return (this->_rawBits);
}

Fixed::~Fixed(){
    return;
}

Fixed& Fixed::Fixed(const Fixed& other){
    this->_rawBits = other._rawBits;
    return *this;
}

int Fixed::toInt() const{
    return ((int)this->_rawBits / 256);
}

float Fixed::toFloat() const{
    return ((float)this->_rawBits / 256);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& o, Fixed& Fixed){
    o << Fixed.toInt();
    o << Fixed.toFloat();
    return o;
}