#include <stdio.h>

int main() 
{
int a=0, b=1, c,i,n;
printf("Enter the range: ");
scanf("%d",&n);
printf("Fibonacci Series:\n");
for(i=1;i<=n;++i)
 {
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
 } 
return 0;
}
