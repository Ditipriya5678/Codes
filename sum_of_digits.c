#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    int n, q1, q2, q3, q4, q5, r1, r2, r3, sum_digits;
    scanf("%d", &n);
    q1= n/10000 ;
    r1= n % 10000 ;
    q2=r1/1000 ;
    r2=r1 % 1000 ;
    q3=r2 / 100 ;
    r3=r2 % 100 ;
    q4=r3 / 10 ;
    q5= r3 % 10 ;
    sum_digits= (q1+q2+q3+q4+q5);
    printf("%d", sum_digits);
    return 0;
}
