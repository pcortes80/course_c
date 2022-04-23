/*  call-by-value example
    Feb 22, 2022
*/

#include <stdio.h>

int compute_sum_to_n(int n)
{
    int sum = 0;
    for( ;n > 0; n--)
        {
            sum+= n;
        }
    return sum;
}

// now I define the function
int main(void)
{
    int m = 10;
    printf("Sum = %d\n", compute_sum_to_n(m));
    return 0;
}