#include<iostream>
using namespace std;

class Parent
{
	public:
		int n;
		void print()
		{
			cout<<n<<endl;
		}
};

class Child: public parent
{
	public:
		void set_num()
		{
			n=22;
		}
};

int main()
{
	Parent P;
	Child C1;
	//P1.print
}

