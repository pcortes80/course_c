/*  Assignment 2 W2
    Write a program that prints the sine function 
    for an input x between (0, 1)
    Patricio CortÃ©s
    17-02-2022
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double x = 0.0; // declare x as the input
    double y = 0.0; // declare y as the output
    
    printf("Enter the input to calculate the sin: ");
    scanf("%lf", &x);
    y = sin(x); // calculate the sin in radians
    printf("The sin of %lf is %lf.\n", x, y); // print the result

    return 0;
}