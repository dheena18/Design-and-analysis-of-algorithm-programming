/*finding max element in a group*/
#include<iostream>
using namespace std;
int findmax(int a[],int n)
{
	int maxelement=a[0];
	for(int i=1;i<n;i++)
		if(maxelement < a[i])
		maxelement=a[i];
	return maxelement;
			
}
int main()
{
	int a[]={11,25,17,96,58,336};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<findmax(a,n);
	return 0;
}
