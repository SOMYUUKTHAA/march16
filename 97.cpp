#include"iostream"
using namespace std;
int main()
{
int n,n1;
cout<<" enter a number : ";
cin>>n;
while(n>0)
{
    n1=n%10;
    cout<<n1;
    n/=10;
}
}
