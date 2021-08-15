/* You have prepared four problems. The difficulty levels of the problems are A1,A2,A3,A4 respectively. A problem set comprises at least two problems 
and no two problems in a problem set should have the same difficulty level. A problem can belong to at most one problem set. Find the maximum number of 
problem sets you can create using the four problems.

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers A1, A2, A3, A4, denoting the difficulty level of four problems.

For each test case, print a single line containing one integer - the maximum number of problem sets you can create using the four problems.

Input
3
1 4 3 2
4 5 5 5
2 2 2 2

Output
2
1
0
*/

#include<stdio.h>

int main()
{
	int i, t;
	scanf("%d",&t);
		
	for(i=1;i<=t;i++)
	{
		int a,b,c,d;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		
		if(a==b && b==c && c==d && d==a)
		{
			printf("0\n");
		}
		else if(b==c && c==d || a==b && b==c || a==c && c==d || a==b && b==d)
		{
			printf("1\n");
		}
		else
		{
			printf("2\n");
		}
	}
	return 0;
}
