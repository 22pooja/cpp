#include<iostream>
#include<string.h>
using namespace std;
class patient
{
private:
    char name[15];
    float height;
    float weight;
    float bmi;
public:
    void getdata()
    {
        cout<<"data is :";
        cin>>name>>height>>weight;
    }
    void showdata()
    {
        cout<<name<<" "<<weight<<" "<<height<<" "<<endl;
        bmi=(weight/(height*height))*703;
        cout<<"bmi is :"<<bmi<<endl;
    }
};

int main()
{
    patient v1;
    v1.getdata();
    v1.showdata();

    return(0);
}
