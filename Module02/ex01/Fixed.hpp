#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
using std::cout;
using std::endl;

class Fixed
{
    public:
        Fixed();
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed(const Fixed& other);
        ~Fixed();
        Fixed& operator=(const Fixed &other);
        
        void setRawBits(const int rawBits);
        int getRawBits() const;
        int toInt() const;
        float toFloat() const;
    private:
        static const int _nFracBits = 8;
        int _rawBits;
};

std::ostream& operator<<(std::ostream& o, const Fixed& Fixed);

#endif