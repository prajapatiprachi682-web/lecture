// #include<iostream>
// #include<string>
// using namespacestd;

// class Vehicle
// {
//     float speed;
//     Vehicle(float s)
//     {
//         speed =s;
//     }
// };

// class Car: public Vehicle
// {
//     public:
//     int seats;
//     Car(float s,int seatcount):
//     Vehicle(s)
//     {
//         seats = seatcount;
//     }
// };

// class ElectricCar:
// public Car
// {
//     string battery;
//     ElectricCar(float s, int seatcount, string b): Car(s, seatcount)
//     {
//         battery = b;
//     }
// };

// class Airplane
// {
//     public:
//     float maxspeed;
//     Airplane(int m)
//     {
//         maxspeed =m;
//     }
// };

// class flyingCar: public Car, public Airplane
// {
//     public:
//     flyingCar(float s, int seatcount, float m): Car(s, seatcount), Airplane(m)
//     {

//     }
// };

#include<iostream>
#include<string>
using namespace std;

class Bankaccount
{
    int accountNumber;
    int balance;
    Bankaccount(int acc, int bal)
    {
        accountNumber = acc;
        balance = bal;
    }


Bankaccount(const Bankaccount &obj)
{
    balance = obj.balance;
    accountNumber = obj.accountNumber;
}

void add_balance(int amt)
{
    balance+=amt;
}

void show()
{
    cout<<"Account Number:"<<accountNumber<<endl;
    cout<<"Balance:"<<balance<<endl;
}
};

int main()
{
    Bankaccount b(101,3000);
    b.add_balance(300);
    Bankaccount b2 = b;
    b.show();
    b2.add_balance(400);
    b2.show();\
    
}
