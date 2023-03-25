#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter the number\n");
    scanf("%d",&n);
    {
        do{
            printf("%d",i+1);
            i=i+1;

        }while(n>i);
        return 0;
    }
}