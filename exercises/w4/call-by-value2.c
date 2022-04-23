/*  call-by-value example 2
    Feb 22, 2022
*/

#include <stdio.h>

int foobar(int n)
{
    n = n + 1;
    return n;
}

int main(void)
{
    int k = 6;
    printf("Foobar(k) = %d, k = %d\n", foobar(k), k);
    return 0;
}