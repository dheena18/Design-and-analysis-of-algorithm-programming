/*recursive algorithm for finding no of digits in binary for a given decimal number*/
#include<iostream>
#include <math.h>
using namespace std;
int recbindec(int n)
{
	if(n==1)
		return 1;
//     return (int)log2(n)+1;
	return recbindec(n/2)+1;
}
int main()
{
	int n;
	cout<<"enter a number";
	cin>>n;
	cout<<"the no of digits in binary is"<<recbindec(n);
	return 0;
}
