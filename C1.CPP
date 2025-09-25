#include<iostream>
using namespace std;
class Myclass
{
    int x;
    float y;
    public:
    Myclas()
    {
        x=0;
        y=2;
    }
    Myclas(const Myclas &other)
    {
        x= other.x;
        y= other.y;
    }
    void display()
    {
        cout<<"x:"<< x << "y:"<< y <<endl;
    }
};

int main()
{
    Myclass m1;
    m1.display();

    Myclas m2=m1;
    m2.display();

    return 0;
}