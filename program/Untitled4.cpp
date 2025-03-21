/*non recursive algorithm for finding no of digits in binary for a given decimal number*/
#include<iostream>
using namespace std;
int bindec(int n)
{
	int count=1;
	while(n>1)
	{
		n=n/2;
		count++;
	}
	return count;
}
int main()
{
	int n;
	cout<<"enter a number";
	cin>>n;
	cout<<"the no of digits in binary is"<<bindec(n);
	return 0;
}
