// high school application
#include<iostream>
using namespace std;
class person
{
private:
    char name[15];

public:
    void getdata()
    {
        cout<<"person name :";
        cin>>name;
    }
  };
class teacher:public person
{
private:
    int salary;
    int id;
    char chem[15],phy[15],math[15];
public:
    void getteacher()
    {

        cout<<"teacher data is :" ;
        cin>>salary>>id>>chem>>phy>>math;
    }
    void showteacher()
    {
        cout<<salary<<" "<<id<<" "<<chem<<" "<<phy<<" "<<math<<endl ;
    }
};
class clgstudent:public person
{
private:
    int year;
    int id;
    char branch[15];
public:
    void getstudent()
    {

        cout<<"collage student:";
        cin>>year>>id>>branch;
    }
    void showstudent()
    {
        cout<<year<<" "<<id<<" "<<branch<<endl ;
    }

};
int main()
{
    clgstudent ob1;
    ob1.getdata();
    ob1.getstudent();
    ob1.showstudent();
    return(0);

}
