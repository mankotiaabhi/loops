#include <stdio.h>
/*
Input 1: 4
Output 1: 100
Input 2: 20
Output 2:


*/
int main()
{
    int n, x, a[10], sum = 0, i = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        x = n % 2;
        n = n / 2;
        a[i] = x;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
}
