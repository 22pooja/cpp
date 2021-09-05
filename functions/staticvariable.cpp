#include<iostream>
using namespace std;
class test
{
private:
    int i;
    static int j;
public:
    void setij()
    {
        i=0;
        j=0;
    }
    void add()
    {
        i=i+1;
        j=j+1;
        cout<<i<<" "<<j<<" "<<endl;
    }


};
int test::j;
int main()
{
    test t1,t2,t3;
    t1.setij();
    t2.setij();
    t1.add();
    t2.add();
    t3.add();
    return(0);
}
