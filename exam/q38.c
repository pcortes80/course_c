#include<stdio.h>

int main(void)
{
    char a[5] = "abcd";
    char *str = &a[0] ;
    printf("%c\n", *str);
}