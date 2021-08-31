// Student data s1 & s2
#include<iostream>
using namespace std;
class student
{
private:
    int year;
    char f_name[15],l_name[15],major[15];
public:
    void setdata()
    {
        cout<<"enter student data :"<<endl;
        cin>>f_name>>l_name>>year>>major;

    }

    void showdata()
    {
        cout<<f_name<<" "<<l_name<<" "<<year<<" "<<major<<" "<<endl;
    }
};

int main()
{
    student s1,s2;
    s1.setdata();
    s2.setdata();
    s1.showdata();
    s2.showdata();
    return(0);
}
