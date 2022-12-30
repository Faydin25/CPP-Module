#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed &str);
        ~Fixed(void);
        Fixed &operator=(const Fixed &str);

        int getRawBits(void);
        void setRawBits(int nbr);
    private:
        int _value;
        static const int _fractional = 8;
};
 
#endif