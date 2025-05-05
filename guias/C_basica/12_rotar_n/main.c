#include <stdio.h>

int main() {
    int arreglo[] = {1,2,3,4,5,6,7,8};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int rotacion = 3;

    int guardados[3];
    for(int i = 0; i < rotacion; i++) {
        guardados[i] = arreglo[i];
    }

    for (int i = rotacion; i < longitud; i++) {
        arreglo[i-rotacion] = arreglo[i];
    }

    int j = 0;
    for (int i = (longitud - rotacion); i < longitud; i++) {
        arreglo[i] = guardados[j];
        j += 1;
    }

    for(int i = 0; i < longitud; i++) {
        printf("%d \n", arreglo[i]);
    }

    return 0;
}

// otra forma mas sencilla y modular seria ejecutar n veces lo hecho en 11_rotar