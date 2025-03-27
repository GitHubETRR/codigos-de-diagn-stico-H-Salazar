#include <stdio.h>

void funcion (int *, int *);

int main()
{
    int valor1=10;
    int valor2=5;
    printf("Valor 1: 0x%X   Valor 2: 0x%X", &valor1, &valor2);//imprime la direccion por eso el &
    funcion(&valor1,&valor2); 
    printf("\nValor 1: %d   Valor 2: %d", valor1, valor2);
    return 0;
}

void funcion (int *var, int *var2){
    /*var++;
    var++;
    printf("\nValor 1: 0x%X   Valor 2: 0x%X", *var, *var2);*/
    (*var)++; //El parentesis es necesario porque sino estaria moviendo el conjunto de puntero y valor
    printf("\nEn funcion Var 1: 0x%X   Var 2: 0x%X", *var, *var2); //Imprime lo que esta en la direccion
}

