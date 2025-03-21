#include<stdio.h>
#include<math.h>
int main()
{
	int set[30],w,n;
	int po_Comb,par_Sum=0,res=1,count=0;
	long answer[500],k=0;
	int inittotal=0,settotal=0,i,j;
	printf("Enter number of elements in the set\n");
	scanf("%d",&n);
	po_Comb=pow(2,n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&set[i]);
		settotal+=set[i];
	}
    printf("Enter the sum value \n");
    scanf("%d",&w);
    for(i=0;i<po_Comb;i++)
    {
    	res=7;
    	par_Sum=0;
    	count=0;
    	for(j=0;j<n;j++)
    	{
    		res=res*10;
    		if(i & (1<<j))
    		{
    			res=res+1;
    			par_Sum+=set[j];
    			count++;
			}
			if(par_Sum>w)
			    break;
			if(par_Sum==w)
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
