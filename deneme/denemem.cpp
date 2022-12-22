#include <iostream>

class Animal
{
    public:
        void eat()
        {
            std::cout << "I can eat!" << std::endl;
        }

        void sleep()
        {
            std::cout << "I can sleep!" << std::endl;
            std::cout << "Who Am I Aq xd" << std::endl;
        }
};

class Dog : public Animal
{
    public:
        void setName(std::string name)
        {
            this->name = name;
            std::cout << "My Name Is " << this->name << std::endl;
        }
        void makenoise()
        {
            std::cout << "Noise: " << "Konya Konya.." << std::endl;
        }
    private:
        std::string name;
};


int main(void)
{
    Dog dog1;

    dog1.setName("Luna");
    dog1.makenoise();
    dog1.eat();
    dog1.sleep();

    return 0;
}