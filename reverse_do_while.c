#include<stdio.h>
int main()
{
    int n,i=0,sum=0,h,temp;
    printf("enter the number ");
    scanf("%d",&n);
    temp=n;
    do{
        h=n%10;
        sum=sum*10+h;
        n=n/10;
    }while(n>i);
    if (sum==temp)
    {
        printf("true");
    }
    else{
        printf("false");
    }
    
    
    return 0;
}
