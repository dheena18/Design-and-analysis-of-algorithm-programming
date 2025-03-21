//subset sum
#include<stdio.h>
#include<math.h>
int main()
{
	int set[30],W,n;
	int po_Comb,par_Sum=0,res=1,count=0;
	long answer[500],k=0;
	int initTotal=0,setTotal=0,i,j;
	printf("enter number of elements in the set");
	scanf("%d",&n);
	po_Comb=pow(2,n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&set[i]);
		setTotal+=set[i];
	}
	printf("enter the sum value");
	scanf("%d",&W);
	for(i=0;i<po_Comb;i++)
	{
		res=7;
		par_Sum=0;
		count=0;
		for(j=0;j<n;j++)
		{
			res=res*10;
			if(i&(1<<j))
			{
				res=res+1;
				par_Sum+=set[j];
				count++;
			}
			if(par_Sum>W)
				break;
			if(par_Sum==W)
			{
				answer[k]=res;
				printf("%d\n",answer[k]);
				k++;
				break;
			}
		}
	}
	return 0;
}
