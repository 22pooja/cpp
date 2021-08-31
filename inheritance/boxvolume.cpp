#include<iostream>
#include<string.h>
using namespace std;
class box
{
private:
    float width;
    float height;
    float depth;
public:
    void getdata()
    {
        cout<<"data is :";
        cin>>width>>height>>depth;
    }
    void showdata()
    {
        cout<<width<<" "<<height<<" "<<depth<<endl;
    }
    float getwidth()
    {
        return width;
    }
    float getheight()
    {
        return height;
    }
    float getdepth()
    {
        return depth;
    }
};
class volume:public box
{
public:
    void calvolume()
    {
        float vol;
        vol=(getwidth()*getheight()*getdepth());
        cout<<"volume is :"<<vol<<endl;
    }
};
int main()
{
    volume v1;
    v1.getdata();
    v1.showdata();
    v1.calvolume();
    return(0);
}
