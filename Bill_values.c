#include <stdio.h>

int main(void) 
{
	int a, b, c, d;
	printf("Enter price values of A and B:\n");
	scanf("%d %d", &a, &b);
	c= a+b ;
	d= b+c ;
	printf("The bill value of A is %d\n", a);
	printf("The bill value of B is %d\n", b);
	printf("The bill value of C is %d\n", c);
	printf("The bill value of D is %d\n", d);
	return 0;
}
