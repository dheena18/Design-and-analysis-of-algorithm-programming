#include<iostream>
using namespace std;
int gcd(int m,int n)
{
int t,sml;
if(m<n)
{
sml=m;
}
else
{
sml=n;
}
t=sml;
while(t>0)
{
if(m%t==0 && n%t==0)
{
return t;
}
t=t-1;
}
}
int main()
{
int m,n,res;
cout<<"Enter Two Values";
cin>>m>>n;
res=gcd(m,n);
cout<<"gcd is "<<" "<<res;
return 0;
}
