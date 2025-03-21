/*finding unique element in a group*/
#include<iostream>
using namespace std;
int unique(int a[],int n)
{
	for(int i=0;i<=n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[i]==a[j])
				return 0;
		}
	}
}
int main()
{
	int a[]={11,25,17,96,58,336};
	int n=sizeof(a)/sizeof(a[0]);
	if(unique(a,n))
		cout<<"the array is unique";
	else
		cout<<"the array is not unique";
	return 0;
}
