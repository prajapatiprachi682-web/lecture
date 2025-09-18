//#include<iostream>
//using namespace std;
//
//class X
//{
//	public:
//		int plusfunc(int x, int y)
//		{
//			return x+y;
//		}
//};
//
//int main()
//{
//	X x1;
//	int myNum1=x1.plusfunc(8,5);
//	double myNum2=x1.plusfunc(4.3, 6.26);
//	
//	cout<<"int:"<<myNum1<<"\n";
//	cout<<"double:"<<myNum2;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void greet()
//{
//	cout<<"hello!";
//}
//void greet(string name){
//	cout<<"hello,"<<name;
//	
//}
//int main()
//{
//	string name;
////	cin>>name;
//	greet();
//	return 0;
//}


#include<iostream>
using namespace std;
class Myclass 
{
	public:
		int x;
		private:
			int y;
};

int main(){
	Myclass myobj;
	myobj.x=25;
	myobj.y=50;
	return 0;
}
