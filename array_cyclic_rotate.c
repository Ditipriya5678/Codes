//Right rotate an array
/* Given an array Arr[ ] of N integers and a positive integer K. The task is to cyclically rotate the array clockwise by K.
Note : Keep the first of the array unaltered.

Example 1:
5  ---Value of N
{10, 20, 30, 40, 50}  ---Element of Arr[]
2  -----Value of K

Output :
40 50 10 20 30

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
}

void rotate_by_one(int arr[],int n)
{
	int temp,i;
	temp=arr[n-1];
	for(i=n-2; i >= 0; i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0] = temp;
}

int main()
{
	int i, j, k, n;
	scanf("%d",&n);
	int arr[n];
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr[j]);
	}
	scanf("%d",&k);
	rotate_by_d(arr,k,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
