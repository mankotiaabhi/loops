#include<stdio.h>
int main()
{
    int n,i=0,sum=0,h,temp;
    printf("enter the number ");
    scanf("%d",&n);
    temp=n;
    while(n>i){
        h=n%10;
        sum=sum+h*h*h;
        n=n/10;
    }
    if (sum==temp){
        printf("yes");
    }
    else{
        printf("no %d",sum);
    }
    return 0;
}