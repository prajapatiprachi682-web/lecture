// #include<iostream>
// #include<string>
// using namespace std;

// class Student
// {
//     string name;
//     int roll, marks;
//     public:
//     Student(string s, int r, int m)
//     {
//         name=s;
//         roll=r;
//         marks=m;
//     }
//     void display()
//     {
//         cout<<"Name is:"<<name<<endl;
//         cout<<"Marks is:"<<marks<<endl;
//         cout<<"roll is:"<<roll<<endl;
//     }
// };

// int main()
// {
//     Student S1("Akash", 21, 90);
//     S1.display();
// }


#include<iostream>
#include<string>
using namespace std;

class rectangle
{
    int len, breadth;
    public:

    rectangle(int l, int b)
    {
        len=l;
        breadth=b;
    }
    
    void Area()
    {
      cout<<"area is:"<<len*breadth<<endl;
    }

    void Perimeter()
    {
        cout<<"Perimeter is:"<<2*(len+breadth)<<endl;
    }

    void isSquare()
    {
        if(len )
    }
};

int main()
{

}