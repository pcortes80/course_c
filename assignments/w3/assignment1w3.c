/*  Assignment 1 week 3
    Switch topic
    Patricio Cortés
    17-02-2022
*/

#include<stdio.h>
#include<math.h> /* has  sin(), abs(), and fabs() */
int main(void)
{ 
    double interval;
    int i;
        for(i = 0; i <30; i++)
        {
        interval = i/10.0;
        printf("sin( %lf ) = %lf \n", interval, abs(interval));
        }
    printf("\n+++++++\n");
    return 0;
}