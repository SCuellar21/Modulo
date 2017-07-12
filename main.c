/*
 * File:   modulo.c
 * Author: Sergio
 *
 * Created on 25 de julio de 2014, 14:47
 */

#include <stdio.h>
#include <stdlib.h>

int modulo();
int main(int argc, char** argv)
{
    char opcion;
    do
    {
        modulo();
        printf("\nDesea hacer otra operacon? \nS  ->  Si \nN  ->  Salir \n");
        scanf(" %c", &opcion);
    } while(opcion != 110 && opcion != 78);

    return(EXIT_SUCCESS);
}

/*
 * Devuelve el residuo de la division
 * de dos numeros enteros
 */
int modulo()
{
    int x, y;
    printf("Uso: 'x' modulo de 'y' \nEscribe 'x' \n");
    scanf("%d", &x);
    printf("Escribe 'y'\n");
    scanf("%d", &y);
    int resultado = x % y;
    printf("Resultado: %d modulo de %d = %d\n", x, y, resultado);
}

