//fibnaci series
#include<iostream>
using namespace std;   
int fibnaci(int n) 
{ 
    if ((n == 1)||(n==0))
    {
        return n;
	}
	else
	{	
    return fibnaci(n-1) + fibnaci(n-2);
	}
} 
int main()
{
	int n;
	cout<<"enter a number";
	cin>>n;
	cout<<"the no of digits in binary is"<<fibnaci(n);
	return 0;
}
