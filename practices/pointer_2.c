#include<stdio.h>

void jugar(int n)
{
    n = (n + 3)* 2 - 1;
    printf("%d\n", n);
}

int main()
{
    int x = 10;
    // pasamos x como argumento de la funcion
    jugar(x);
    // aca se imprimira el valor antiguo de x
    // esto porque el anterior valor de x que
    // se le paso a jugar(x) es solo una copia
    // de la variable x, y no se va a modificar
    // el valor antiguo de x.
    printf("%d\n", x);
    return 0;
}
