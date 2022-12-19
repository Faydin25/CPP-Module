#pragma once

#include <iostream>
#include <string>

class Harl
{
    public:
        void debug();
        void info();
        void warning();
        void error();
        void complain(std::string level);
    private:
};