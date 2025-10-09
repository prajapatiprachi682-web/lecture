#include<iostream>
using namespace std;

class Two;

class One
{
    friend class Two;
    int a=24;
    public:
    void show()
    {
        cout<<"This is class One"<<endl;
    }
};

class Two
{
    friend class one;
    public:
    void show2()
    {
        cout<<"And this is class two"<<endl;
    }
    void accessonePrivate(One &obj)
    {
        cout<<"accessing private data of class one from base class"<<obj.a<<endl;
    }
};

int main()
{
    One O1;
    Two O2;
    O2.accessonePrivate(O1);
}