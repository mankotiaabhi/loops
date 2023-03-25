#include<stdio.h>
int main()
{
    int a, i=0;
    printf("enter any number\n");
    scanf("%d",&a);
    do{
        printf("%d\n",i);
        i=i+2; 

    }while(a>i);
    return 0;
}