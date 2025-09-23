#include<iostream>
using namespace std;

class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"This is a Vehicle"<<endl;
		}
};

class Fare
{
	public:
		Fare()
		{
			cout<<"Fare of vehicle"<<endl;
		}
};

class Car: public Vehicle
{
	public:
		Car()
		{
			cout<<"This vehicle is car"<<endl;
		}
};

class Bus: public Vehicle, public Fare
{
	public:
		Bus()
		{
			cout<<"This vehicle is a bus with fare";
		}
};

int main()
{
	Bus obj2;
	return 0;
}
