#include<iostream>
using namespace std;

class Animal
{
	public:
		void eat()
		{
			cout<<"This animal eats food."<<endl;
			
		}
};
class Mammal: public Animal
{
	public:
		void walk()
		{
			cout<<"This mammal walk on land."<<endl;
		}
};
class Dog: public Mammal
{
	public:
		void bark ()
		{
			cout<<"The dog barks."<<endl;
		}
};

int main()
{
	Dog d;
	d.eat();
	d.walk();
	d.bark();
	return 0;
}

