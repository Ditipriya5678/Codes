#include<stdio.h>

int main()
{
	int t,i;
	scanf("%d",&t);
	
	for(i=1;i<=t;i++)
	{
		int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
		int sum1,sum2;
		scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
		sum1 = a1+a3+a5+a7+a9;
		sum2 = a2+a4+a6+a8+a10;
		if(sum1 > sum2)
		{
			printf("1\n");
		}
		else if(sum1 < sum2)
		{
			printf("2\n");
		}
		else
		{
			printf("0\n");
		}
	}
}
