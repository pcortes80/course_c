/*  Sorting merge sort
    (n log n) efficient
    Sally Coder Jan 18, 2018
*/

#include <stdio.h>

void print_array(int how_many, int data[], char *str)
{
    int i;
    printf("%s",str);

    for (i = 0; i < how_many; i++)
        printf("%d\t", data[i]);
}

void merge(int a[], int b[], int c[], int how_many) /*a and b same size */
{
    int i = 0, j = 0, k = 0;
    int go_on;

    while (i < how_many &&  j < how_many)
        if (a[i] < b[j])
            {
            printf("a[i] < b[j] = True\n");
            printf("i = %d\t a[i] = %d\t j = %d\t b[j] = %d\n", i, a[i], j, b[j]);
            printf("c[k++] = a[i++]\n");
            c[k++] = a[i++];
            print_array(2*how_many, c, "c array\n");
            printf("\n");
            printf("Press any number to continue: \n");
            scanf("%d", &go_on);
            }
        else
            {
            printf("a[i] < b[j] = False\n");    
            printf("i = %d\t a[i] = %d\t j = %d\t b[j] = %d\n", i, a[i], j, b[j]);
            printf("c[k++] = b[j++]\n");
            c[k++] = b[j++];
            print_array(2*how_many, c, "c array:\n");
            printf("\n");
            scanf("%d", &go_on);
            }
    while (i < how_many){
        c[k++] = a[i++];
        printf("while (i < how_many)\n");
        printf("k = %d\t i = %d\t how_many = %d\t a[i] = %d\t\n", k-1, i-1, how_many, a[i-1]);
        printf("c[k++] = a[i++]\n");
        print_array(2*how_many, c, "c array:\n");
        printf("\n");}
    while (j < how_many){
        c[k++] = b[j++];
        printf("while (j < how_many)\n");    
        printf("k = %d\t j = %d\t how_many = %d\t b[j] = %d\t\n", k-1, j-1, how_many, b[j-1]);
        printf("c[k++] = b[j++]\n");
        print_array(2*how_many, c, "c array:\n");
        printf("\n");}
}

int main(void)
{
    const int SIZE = 4;
    int a[4] = {2, 4, 1, 8};
    int b[4] = {3, 7, 5, 6};
    int c[2*4] = {0};
    print_array(SIZE, a, "My grades\n");
    printf("\n\n");
    print_array(SIZE, b, "More grades\n");
    printf("\n\n");
    merge(a, b, c, SIZE);
    print_array(2*SIZE, c, "My sorted grades\n");
    printf("\n\n");
    return 0;
};