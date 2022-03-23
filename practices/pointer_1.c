#include<stdio.h>

int main()
{
    int x = 10;
    printf("x= %d\n", x);

    // con & pedimos que entregue la direccion
    // de memoria de x, no el valor de x
    printf("Direccion de x = %d\n", &x);

    // definimos un tipo de dato int* para 
    // que guarde la direccion de memoria &x 
    // en la variable dirX
    int* dirX = &x;
    
    // tambien podemos imprimir el valor
    // de la variable dirX
    printf("Direccion de x = %d\n", dirX);
}