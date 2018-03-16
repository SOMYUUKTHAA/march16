#include<iostream>
#include<math.h>
#include"stdlib.h"
using namespace std;
int main()
{
int l,b,h,vol,area;
cout<<"enter lenght,breadth,height: ";
cin>>l>>b>>h;
area=(2*l*b)+(2*b*h)+(2*h*l);
vol=l*b*h;
cout<<"surface area: "<<area<<"\n";
cout<<"volume: "<<vol;
}
