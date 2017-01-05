#include<stdio.h>
int main()
{
int a,b,c;
a=1;
c=1;
for (b=1; b<=10; b++)
{
c=c+1;
a=b*a;
printf("Faktorial dari %d = %d\n",c,a);
}
}
