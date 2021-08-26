#include<iostream>
using namespace std;
class a
{
private:
    int x,y;
public:
    void getdata()
    {
        cout<<"enter 2 values :";
        cin>>x>>y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }

};
class b :public a
{
public:
    void product()
    {
        int p;
        p=(getx()*gety());
        cout<<"product is :" <<p<<endl;
    }
};
class c:public a
{
public:
    void sum()
    {
        int s;
        s=(getx()+gety());
        cout<<"sum is :"<<s<<endl;
    }
};
int main()
{
    b ob1;
    c ob2;
    ob1.getdata();
    ob1.product();
    ob2.getdata();
    ob2.sum();
    return(0);

}
