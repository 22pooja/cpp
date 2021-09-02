// writing value from function
#include<iostream>
using namespace std;
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
float area(float r)
{
    float a;
    a=3.14*r*r;
    return a;
}
int main()
{
    int z1;
    int a1;
    z1=add(179,600);
    a1=area(4.5);
    cout<<"addition is :"<<z1<<endl;
    cout<<"area is :"<<a1<<endl;
    return(0);
}

