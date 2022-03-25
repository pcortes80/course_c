#include<stdio.h>

int foobar(int *n)
{
    *n = *n + 1;
    return *n;
}

int main(void)
{
    int k = 6;
    printf("foobar(k) = %d\n", foobar(&k));
    printf("k = %d\n", k);
}