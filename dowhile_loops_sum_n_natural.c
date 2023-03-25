#include<stdio.h>
int main()
{
    int n,i=0,sum=0;
    printf("enter the number upto which you want to print the sum\n");
    scanf("%d",&n);
    do{
        printf("%d\n",sum);
        i=i+1;
        sum=sum+i;

    }while(n>=i);
    return 0;
}