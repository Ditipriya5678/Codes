//Chess Format
/*Given the time control of a chess match as a+b, determine which format of chess out of the given 4 it belongs to.
1) Bullet if a+b<3
2) Blitz if 3≤a+b≤10
3) Rapid if 11≤a+b≤60
4) Classical if 60<a+b
*/

#include <stdio.h>

int main(void) 
{
	int i, n, a, b;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		if((a+b) < 3)
		{
			printf("1\n");
		}
		if((a+b) >= 3 && (a+b) <= 10)
		{
			printf("2\n");
		}
		if((a+b) >= 11 && (a+b) <= 60)
		{
			printf("3\n");
		}
		if((a+b) > 60)
		{
			printf("4\n");
		}
	}
	return 0;
}
