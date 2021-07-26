/* Grooving Monkeys Problem
Problem Description
N monkeys are invited to a party where they start dancing. They dance in a circular formation, very similar to a Gujarati Garba
or a Drum Circle. The dance requires the monkeys to constantly change positions after every 1 second.
The change of position is not random & you, in the audience, observe a pattern. Monkeys are very disciplined & follow a specific
pattern while dancing.
Consider N = 6, and an array monkeys = {3,6,5,4,1,2}.
This array (1-indexed) is the dancing pattern. The value at monkeys[i], indicates the new of position of the monkey who is standing
at the ith position.
Given N & the array monkeys[ ], find the time after which all monkeys are in the initial positions for the 1st time.

Test Case

Example 1
Input
1
6
3 6 5 4 1 2
*/

#include<stdio.h>
#include<stdlib.h>

void rotate_by_one(int arr[],int n); //rotate 1 time

void rotate_by_d(int arr[],int d,int n) //rotate 'd' no of times, n = size of array 
{
	int i;
	for(i=0;i<d;i++)
	{
		rotate_by_one(arr,n);
	}
	printf("%d\n",d);
}

void rotate_by_one(int arr[],int n)
{
	int temp,i;
	temp=arr[0]; //temporary variable assigned the value of array's 1st element
	for(i=0; i < n-1; i++)
	{
		arr[i]=arr[i+1];
	}
	temp=arr[n-1];
}

int main()
{
	int i, j, t, n;
	scanf("%d",&t); //t = no of testcases
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		int arr[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[j]);
		}
		rotate_by_d(arr,6,n);
	}
	
	return 0;
}
