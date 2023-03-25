#include<stdio.h>
int main()
{
    int a,steps=1;
    printf("enter the table");
    scanf("%d",&a);
    do{
        printf("i x 1 = %d\n",a*steps);
        steps+=1;
        }while(a>=steps);
    return 0;
}