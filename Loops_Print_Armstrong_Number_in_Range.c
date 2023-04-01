/*
  Write a C program to print Armstrong number in range:
  Input:
  Enter the number where you want to start the range : 1
  Enter the number upto which you want to print the range : 1000
  Output :
  

*/
#include<stdio.h>
#include<math.h>
int isarmstrong(int n){
    int temp=n,t=n,count=0,dig,sum=0;
    while (n!=0){
        n=n/10;
        count++;
    }
    while (temp!=0){
        dig=temp%10;
        sum=sum+pow(dig,count);
        temp=temp/10;
    }
    if (t==sum){
        printf("%d ",t);
    }
    else
    return 0;
}
int main(){
    int input1, input2;
    printf("Enter the number where you want to start the range : \n");
    scanf("%d", &input1);
    printf("Enter the number upto which you want to print the range : \n");
    scanf("%d", &input2);
    for (int i=input1;input2>=i;i++){
        isarmstrong(i);
        //printf("%d ",isarmstrong(i));
    }
}