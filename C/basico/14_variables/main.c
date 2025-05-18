#include <stdio.h>

int var = 10;

int main() {
    int var = 24;
    printf("Variable global = %d \n", var);
    printf("Variable local = %d \n", var);
    return 0;
}

/*
sucede que la variable global es ocultada/opacada por la variable local
pues la variable global tiene "file scope" mientras que la local "block scope"
y como estamos imprimiendo dentro de el bloque donde fue inicializada la variable local
el scope actual es "block", por lo tanto el valor de var sera 24
*/

// (?) DEFINICION DE "INICIALIZAR", COMPARACION CON DECLARAR Y DEFINIR