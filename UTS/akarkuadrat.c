#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
float d,e;
printf("Masukan Nilai A = ");
scanf("%d", &a);
printf("Masukan Nilai B = ");
scanf("%d", &b);
printf("Masukan Nilai C = ");
scanf("%d", &c);
if (a==0){
    printf("Persamaan Linier");}
else{
    d =(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    e =(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("X1 = %f\n",d);
    printf("X2 = %f\n",e);
}
}
