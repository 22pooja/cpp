// function overloading
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void add(int x, int y)
{
    int z;
    z=x+y;
    cout<<"addition is :"<<z<<endl;
}
void add(float a,float b)
{
    float z;
    z=a+b;
    cout<<"float addition is :"<<z<<endl;
}
void add(char *s1,char *s2)
{
    int x,y;
    char *s3;
    x=strlen(s1);
    y=strlen(s2);
    s3=(char*)calloc(x+y+1,sizeof(char));
    strcpy(s3,s1);
    strcat(s3,s2);
    cout<<s3<<endl;
}
int main()
{
    add(1.3f,4.6f);
    add(20,80);
    add("wel","come");
    return(0);
}
