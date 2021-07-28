/*You have three shoes of the same size lying around. Each shoe is either a left shoe (represented using 0) or a right shoe (represented using 1).
Given A, B, C, representing the information for each shoe, find out whether you can go out now, wearing one left shoe and one right shoe.

The first line contains an integer T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, three integers A, B, C

Sample Input
3
0 0 0
0 1 1
1 0 1
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t, i, a, b, c, sum;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d %d",&a, &b, &c);
		sum = (a+b+c);
		if(sum==0 || sum==3)
		{
			printf("0\n");
		}
		else
		{
			printf("1\n");
		}
	}
}
