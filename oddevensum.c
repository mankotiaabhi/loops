#include<stdio.h>
int main()
{
    int n,i,sume=0,sumo=0,temp;
    scanf("%d",&n);
    temp=n*2;
    for (i=0;temp>=i;i=i+2){
       
        sume=sume+i;
    }
    
    for (int j=1;temp>=j;j=j+2){
        
        sumo=sumo+j;
    }
     printf("sum of even = %d\n",sume);
     printf("sum of odd = %d\n",sumo);
    
}