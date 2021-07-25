//Cricket Problem
#include <stdio.h>

int main(void) 
{
	int i, n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int r1, w1, c1, r2, w2, c2; //runs,wickets,catches
    scanf("%d %d %d",&r1,&w1,&c1);
		scanf("%d %d %d",&r2,&w2,&c2);
		if(((r1>r2 && w1>w2)||(r1>r2 && c1>c2)||(w1>w2 && c1>c2))||(r1>r2 && w1>w2 && c1>c2))
    	{
            printf("A\n");
    	}
    	
		else
		{
			printf("B\n");
		}
		
		
	}
    
	return 0;
}
