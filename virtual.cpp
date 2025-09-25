#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
        cout<<"Animal is eating"<<endl;
    }
};

class Mammal: virtual public Animal
{
    public:
    void run()
    {
        cout<<"Mammal is runnig end l;"
    }
};

class Bird:virtual public Animal
{
    public:
    void Fly()
    {
        cout<<"Bird is flying"<<endl;
    }
};

