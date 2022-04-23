#include <stdio.h>

void print_array(int how_many, int data[], char *str)
{
    int i;
    printf("%s",str);

    for (i = 0; i < how_many; i++)
        printf("%d\t", data[i]);
}

int main(void)
{
    const int SIZE = 3;
    int i = 0;
    int a[3] = {3, 5, 7};
    printf("i++ = %d\n", i++);
    printf("a[i++] = %d\n", a[i++]);
    printf("i++ = %d\n", i++);
    printf("a[i++] = %d\n", a[i++]);
    printf("i++ = %d\n", i++);
    printf("a[i++] = %d\n", a[i++]);
    return 0;
}