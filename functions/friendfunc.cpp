#include<iostream>
using namespace std;
class test2;
class test1
{
private:
    int i;
public:
    void seti()
    {
        i=10;
    }
    friend void add(test1 ob1,test2 ob2);
};
class test2
{
private:
    int j;
public:
    void setj()
    {
        j=20;
    }
    friend void add(test1 ob1,test2 ob2);
};
void add(test1 ob1,test2 ob2)

{
    cout<<ob1.i+ob2.j;
}
int main()
{
    test1 t1;
    test2 t2;
    t1.seti();
    t2.setj();
    add(t1,t2);
    return(0);
}


