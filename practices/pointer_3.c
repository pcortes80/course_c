#include<stdio.h>

// vamos a poner en practica los punteros
void jugar(int* n)
{
    // recuperamos el valor de la direccion
    // de x (&x) y lo ponemos en *n.
    // Luego sacamos el valor de *n
    // y se lo pasamos a y
    int y = *n;
    y = (y + 2) / 2 + 2 - (3 * y);
    // ponemos el nuevo valor de y en la 
    // posicion de memoria de n
    *n = y;
}

int main()
{
    int x = 10;
    // pasamos la direccion de x como 
    // argumento de la funcion
    // y no el valor de x
    jugar(&x);
    // ahora se imprimira el contenido
    // del valor de x 
    printf("%d\n", x);
    return 0;
}
