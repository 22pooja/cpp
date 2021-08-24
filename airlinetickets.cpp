// capture data of airline tickets
#include<iostream>
using namespace std;
class tickets
{
private:
    int f_number;
    char d_city[15],a_city[15],s_assignment[15];
public:
    void setdata()
    {
        cout<<"enter data :"<<endl;
        cin>>d_city>>a_city>>f_number>>s_assignment;

    }

    void showdata()
    {
        cout<<d_city<<" "<<a_city<<" "<<f_number<<" "<<s_assignment<<endl;

    }
};

int main()
{
    tickets t1,t2;
    t1.setdata();
    t2.setdata();
    t1.showdata();
    t2.showdata();
    return(0);
}
