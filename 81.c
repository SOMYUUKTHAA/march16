#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b,c,i;
    for(i=0;i<3;i++)
    {
    cout<<"enter kabali's ninja number ";
    cin>>a;
    cout<<"enter opponent's ninja number ";
    cin>>b;
    c=abs(a-b);
    cout<<"difference:"<<c<<"\n";
    }
}
