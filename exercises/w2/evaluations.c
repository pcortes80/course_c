#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 0, d = 0; //initialize
    //c = a - b;
    //c = b - a;
    //c = a / b ; d = b / a;
    //c = a % b ; d = b % a;
    //c = -a - b ; d = -b - a;
    c = a++;
    d = b++;
    //c = ++a + b++ ; d += 5;
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
    return 0;
}