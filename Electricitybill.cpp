// electricity bill
#include <iostream>
#include <conio.h>
#include<dos.h>
using namespace std;
void res()
{
    int unit,stir_a=112;
    float a,vij_a,vahan_a,vij_s,f_amount;
    cout<<"Enter your unit: ";
    cin>>unit;
    if(unit>0 && unit<=100)
    {
        cout<<"Bill amount is: ";
        a=unit*3.44;
        cout<<a<<endl;
    }
    else if(unit>100 && unit<=200)
    {
        cout<<"Bill amount is: ";
        a=(100*3.44)+(unit-100)*7.34;
        cout<<a<<endl;
    }
    else if( unit>200 && unit<=300)
    {
        cout<<"Bill amount is: ";
        a=(100*3.44)+(100*7.34)+(unit-200)*10.36;
        cout<<a<<endl;
    }
    else if(unit>300)
    {
        cout<<"Bill amount is: ";
        a=(100*5)+(100*7)+(100*10)+(unit-300)*15;
        cout<<a<<endl;
    }
    else
    {
        cout<<"Bill amount is: "<<endl;
        cout<<"No value";
    }
    cout<<"stir aacar is :"<<stir_a<<endl;
    vij_a=a;
    cout<<"vij aacar is :"<< vij_a<<endl;
    vahan_a=unit*1.38;
    cout<<"vahan aacar is : "<<vahan_a<<endl;
    vij_s=(stir_a+vij_a+vahan_a)*0.16;
    cout<<"vij shulk is :"<<vij_s<<endl;
    f_amount=stir_a+vij_a+vahan_a+ vij_s;
    cout<<"final amount to be paid is :"<<f_amount<<endl;
}
void commer()
{
     int unit,stir_a=415;
    float a,vij_v,vij_a,vahan_a,vij_s,f_amount;
    cout<<"Enter your unit: ";
    cin>>unit;
    if(unit>0 && unit<=100)
    {
        cout<<"Bill amount is: ";
        a=unit*3.44;
        cout<<a<<endl;
    }
    else if(unit>100 && unit<=200)
    {
        cout<<"Bill amount is: ";
        a=(100*3.44)+(unit-100)*7.34;
        cout<<a<<endl;
    }
    else if( unit>200 && unit<=300)
    {
        cout<<"Bill amount is: ";
        a=(100*3.44)+(100*7.34)+(unit-200)*10.36;
        cout<<a<<endl;
    }
    else if(unit>300)
    {
        cout<<"Bill amount is: ";
        a=(100*5)+(100*7)+(100*10)+(unit-300)*15;
        cout<<a<<endl;
    }
    else
    {
        cout<<"Bill amount is: "<<endl;
        cout<<"No value";
    }
    cout<<"stir aacar is :"<<stir_a<<endl;
    vij_a=a;
    cout<<"vij aacar is :"<< vij_a<<endl;
    vahan_a=unit*1.38;
    cout<<"vahan aacar is : "<<vahan_a<<endl;
    vij_s=(stir_a+vij_a+vahan_a)*0.21;
    cout<<"vij shulk is :"<<vij_s<<endl;
    vij_v=unit*0.1904;
     cout<<"vij vikri kar is :"<<vij_v<<endl;
    f_amount=stir_a+vij_a+vahan_a+ vij_s+vij_v;
    cout<<"final amount to be paid is :"<<f_amount<<endl;
}
int main()
{
    int n;
    while(1)
    {
        cout<<"\n 1.Residential \n 2.Commercial \n 3.Exit";
        cout<<"\n Enter your choice :";
        cin>>n;
        switch(n)
        {
        case 1:
            res();
            break;
        case 2:
            commer();
            break;
        case 3:
            exit(0);
            break;
        default :
            cout<<"Wrong choice";

        }
    }
    return(0);
}

