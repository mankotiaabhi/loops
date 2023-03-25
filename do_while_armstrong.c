#include<stdio.h>
int main()
{
    int n,i=1,sum=0,x,temp;
    printf("enter the number\n");
    scanf("%d",&n);
    temp=n;
    do{
        x=n%10;
        sum=sum+x*x*x;
        n=n/10;
    }while(n>i);
    if(sum==temp){
        printf("your number is armstrong ");
    }
    else{
        printf("your number is not armstrong %d ",sum);
    }
    return 0;
}