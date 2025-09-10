#include<iostream>
using namespace std;
//int main()
//{
//	int day=8-;
//	switch(day)
//	{
//		case 1:
//			cout<<"monday";
//			break;
//			case 2:
//				cout<<"tuesday";
//				break;
//				case 3:
//					cout<<"wednsday";
//					break;
//					case 4:
//						cout<<"thrusday";
//						break;
//						case 5:
//							cout<<"friday";
//							break;
//							case 6:
//								cout<<"saturday";
//								break;
//								case 7:
//									cout<<"sunday";
//									break;
//									default:
//										cout<<"invalid value";
//										break;
//										return 0;
//	}
//}

//class test
//{
//	public :
//		int val;
//		
//		void show()
//		{
//			cout<<"\asad"<<val;
//		}
//};
//
//int main()
//{
//	test t1,a2;
//	t1.val=9;
//	a2.val=10;
//	
//	t1.show();
//	a2.show();
//	return 0;
//}


class outer
{
	public :
		class inner
		{
			public :
				void display()
				{
					std::cout<<"inner class\n";
				}
				
		};
		
};




