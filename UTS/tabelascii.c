#include<stdio.h>
int main()
{
    int x;
    printf("\tTabel ASCII\n");
    printf("------------------------------------\n");
    printf("Simbol\t|Desimal| Hex\t| Binary\n");
    printf("------------------------------------\n");

    for (x=48;x<=122; x++)
    {
        printf("ASCII %c\t| %d \t| %x\t| Binary\n",x,x,x);
    }
}
