// function pass by value
#include<iostream>
using namespace std;
void add(int x,int y)
{
    int z;
    z=x+y;
    cout<<"addition is: "<<z<<endl;
}
void area(float r)
{
    float a;
    a=3.14*r*r;
    cout<<"area is :"<<a<<endl;
}
int main()
{
    add(356,786);
    area(7.8);
   return(0);
}
