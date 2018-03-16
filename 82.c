#include"iostream"
using namespace std;
int main()
{
int Num,a[100000],i,sum=0;
cout<<"enter Num number : ";
cin>>Num;
cout<<"enter "<<Num<<" values:";
for(i=0;i<Num;i++)
{
    cin>>a[i];
    sum+=a[i];
}
cout<<"Result: "<<sum;
}
