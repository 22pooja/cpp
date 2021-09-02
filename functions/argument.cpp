#include<iostream>
using namespace std;
int add(int x=10,int y=50)
{
    int z;
    z=x+y;
    return z;
}
float area(float r=1.2)
{
    float a;
    a=3.14*r*r;
    return a;
}
int main()
{
    int z1;
    float a1;
    z1=add();
    a1=area();
    cout<<"addition is"<<z1<<endl;
    cout<<"area is"<<a1<<endl;
    return (0);

}
