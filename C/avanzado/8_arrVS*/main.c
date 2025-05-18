#include <stdio.h>

int main() {
    char* str1 = "Hola";   // Un puntero definido a un arreglo es valido,
    char str2[] = "Hola";  // siempre apunta al primer elemento.

    printf("%s\n", str1);  // Con "%p" devuelve la direccion de memoria de 'H' (la de l4).
    printf("%s\n", str2);  // Aca tambien (la de l5).
    return 0;
}

/*
Aparentemente... SI. Incluso comparten "compatibilidad de conversores".
Pero una gran diferencia es que en la linea 4 estamos definiendo
un puntero que apunta a un string literal, es decir, estamos
reservando memoria unicamente al puntero (8 bytes)
el string NO se creo en la memoria dedicada, esa en otra seccion
de unicamente lectura, por lo que no puede ser modificado.
Por otro lado en la linea 5, estamos creando un arreglo de chars
en nuestra memoria dedicada, es decir, reservamos 1 byte para cada char
mas el caracter nulo; ademas, al estar en nuestra porcion de memoria
podemos modificarlo libremente.
*/