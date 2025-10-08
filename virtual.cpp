#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Mammal : virtual public Animal
{
public:
    void run()
    {
        cout << "Mammal is running" << endl;
    }
};

class Bird : virtual public Animal
{
public:
    void fly()
    {
        cout << "Bird is flying" << endl; 
    }
};

int main()
{
    Mammal m;
    Bird b;

    m.eat();
    m.run();

    b.eat();
    b.fly();

    return 0;
}
