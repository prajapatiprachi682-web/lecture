#include<iostream>
using namespace std;

class Myfriend
{
    public:
     virtual void Myshoes()=0;

};

class Me: public Myfriend
{
  public:
  virtual void Myshoes() override
  {
    cout<<"These are my shoes now"<<endl;
  }
};

int main()
{
    Me obj; 
    obj.Myshoes();
    return 0;
}