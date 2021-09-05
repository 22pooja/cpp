#include<iostream>
using namespace std;
class test
{
private:
    int i,j;
public:
    test()
    {
        i=10;
        j=20;
        cout<<"constructor without argument "<<endl;
    }
    void add()
    {
        cout<<i+j<<endl;

    }

};


int main()
{
    test t1;
    test t2;
    t1.add();
    t2.add();

    return(0);
}


