#include<iostream>
#include<string.h>
using namespace std;
class student
{
private:
    int id;
    char name[15];
public:
    void getdata()
    {
        cout<<"enter id and name  :"<<endl;
        cin>>id>>name;
    }
    void showdata()
    {
        cout<<id<<" "<<name<<endl;
    }

};


class mark
{
private:
    int m1,m2;
public:
    void getmark()
    {
        cout<<"enter marks :"<<endl;
        cin>>m1>>m2;

    }
    void showmark()
    {
        cout<<m1<<" "<<m2<<endl;
    }
     int getm1()
    {
        return m1;
    }
    int getm2()
    {
        return m2;
    }

};
class result :public mark,public student
{

public:
    void calavg()
    {int avg;
    avg=(getm1()+getm2())/2;
        cout<<"avarage is :"<<avg;
    }



};

int main()
{
    result ob;

    ob.getdata();
    ob.getmark();
    ob.showdata();
    ob.calavg();
    return(0);

}
