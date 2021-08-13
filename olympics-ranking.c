/* In Olympics, the countries are ranked by the total number of medals won. You are given six integers G1, S1, B1, and G2, S2, B2, 
the number of gold, silver and bronze medals won by two different counties respectively. Determine which country is ranked better on the leaderboard. 
It is guaranteed that there will not be a tie between the two countries.

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers G1, S1, B1, and G2, S2, B2.

For each test case, print "1" if the first country is ranked better or "2" otherwise. Output the answer without quotes.

3
10 20 30 0 29 30
0 0 0 0 0 1
1 1 1 0 0 0
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t, i;
	int g1, s1, b1, g2, s2, b2;
	int sum1, sum2;
	scanf("%d",&t); //no of test cases
	for(i=1;i<=t;i++)
	{
		scanf("%d %d %d",&g1,&s1,&b1);
		scanf("%d %d %d",&g2,&s2,&b2);
		sum1 = g1+s1+b1;
		sum2 = g2+s2+b2;
		if(sum1>sum2)
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
