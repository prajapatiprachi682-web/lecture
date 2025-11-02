#include<iostream>
#include<string>
using namespace std;

class Person
{
    string name;
    int age;
    int salary;
    public:

    Person()
    {
        name ="Amit";
        age = 25;
        salary =2500;
    }

    void new_salary(int n)
    {
        salary = n;
    }

    void new_age(int ag)
    {
        age = ag;
    }

    void display()
    {
        cout<<"Name is:"<<name<<endl;
        cout<<"Age is:"<<age<<
    }
}
