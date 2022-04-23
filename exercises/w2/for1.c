#include<stdio.h>

int main(void)
{
    int sum = 0, n = 5, i = 0;

    for(i = 1; i < n ; i++)
        sum = sum + i;
    printf("Sum is %d, i is %d\n", sum, i);
        
}