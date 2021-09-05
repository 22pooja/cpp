//constructor with argument
#include<iostream>
using namespace std;

class test
{
private:
    int i,j;
public:
    test(int x,int y)
    {
        i=x;
        j=y;
        cout<<"constructor with argument "<<endl;
    }
    void add()
    {
        cout<<i+j<<endl;

    }

};


int main()
{
    test t1(10,70);
    test t2(60,40);
    t1.add();
    t2.add();

    return(0);
}


