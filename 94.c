#include"iostream"
using namespace std;
int main()
{
int a,b,c[100],i;
cout<<" enter two numbers : ";
cin>>a>>b;
cout<<"Enter array values: ";
for(i=0;i<a;i++)
{
    cin>>c[i];
}
cout<<c[b-1];
}
