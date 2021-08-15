#include<stdio.h>
#include<math.h>

int main()
{
	int t,j;
	scanf("%d",&t);
	
	for(j=1;j<=t;j++)
	{
		int n, i, sum1=0, sum2=0;
		scanf("%d",&n);
		int arr[n];
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		for(i=0;i<n/2;i++)
		{
			sum1 = sum1 + arr[i];
		}
		//printf("%d\n",sum1);
		for(i=n-1;i>=n/2;i--)
		{
			sum2 = sum2 + arr[i];
		}
		//printf("%d\n",sum2);
		if(sum1==sum2)
		{
			printf("GOOD\n");
		}
		else
		{
			printf("SPOILT\n");
		}
		
	}
}
