//static function
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

}
static void show()
{
   cout<<"in static"<<endl;
}
};
int test ::j;
int main()
{
    test t1,t2,t3;
    t1.setij();
    t2.setij();
    t3.setij();
    t1.add();
    t2.add();
    t3.add();
    test::show();

    return(0);
}
