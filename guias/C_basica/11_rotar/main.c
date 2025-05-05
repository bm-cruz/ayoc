#include <stdio.h>

int main() {
    int arreglo[] = {1, 2, 3, 4};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    int ultimo = arreglo[0];

    for (int i = 0; i < (longitud-1); i++) {
        arreglo[i] = arreglo [i+1];
    }

    arreglo[longitud-1] = ultimo;

    for (int i = 0; i < longitud; i++) {
        printf("%d \n", arreglo[i]);
    }
    return 0;
}
// (?) ESTO SE PEDIA