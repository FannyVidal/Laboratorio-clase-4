#include <stdio.h>
#include <stdlib.h>

/** \brief calcula el factorial de un numero
 *
 * \param int el numero sobre el que se calcula
 * \return int el factorial
 *
 */

int factorial(int);



int main()
{
    int numero = 13;
    int resultado = 1;
    /*int i;

    for(i = numero; i >= 1; i--){

        resultado = resultado * i;
    }

    printf("%d",resultado);
    */

    resultado = factorial(numero);
    printf("El factorial es: %d",resultado);


    return 0;
}

// FORMA RECURSIVA
int factorial(int numero){
    int resultado;
    if(numero == 0){
        resultado = 1;
    }else{
        resultado = numero*factorial(numero -1);
    }

    return resultado;

}

