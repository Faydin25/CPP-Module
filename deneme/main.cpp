#include <iostream>

// base class
class Animal {

   public:
    void eat() {
        std::cout << "I can eat!" << std::endl;
    }

    void sleep() {
        std::cout << "I can sleep!" << std::endl;
    }
};

// derived class
class Dog : public Animal {
 
   public:
    void bark() {
        std::cout << "I can bark! Woof woof!!" << std::endl;
    }
};

// int main() {
//     // Create object of the Dog class
//     Dog dog1;

//     // Calling members of the base class
//     dog1.eat();
//     dog1.sleep();

//     // Calling member of the derived class
//     dog1.bark();

//     return 0;
// }

class data
{
    public:
    data();
    data(const int& a){
        yas = a;
    }

    data(const data& other){
        yas = other.yas;
    }

    data& operator=(const data& other){
        yas = other.yas;
        return (*this);
    }
    int getYas(){
        return this->yas;
    }
    private:
    int yas;
};



data::data()
{
    this->yas = 5;
}

std::ostream& operator<<(std::ostream& o, data& other){
    o << other.getYas();
    return o;
}

int main()
{
    data mehmet(5);
    data yigit(mehmet);
    std::cout << yigit << std::endl;
}