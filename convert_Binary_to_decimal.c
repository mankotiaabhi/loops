#include<stdio.h>
int main(){
    int n,rem=0,i=1,sum=0,ans;
    printf("Enter the number :\n");
    scanf("%d",&n);
    int temp=n;
    while (n!=0){
      rem=n%10;
      sum=sum+rem*i;
      n=n/10;
      i=i*2;
    }
    printf("%d is converted to %d decimal number",temp,sum);


}