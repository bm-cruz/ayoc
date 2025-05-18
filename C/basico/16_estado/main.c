#include <stdio.h>
#define FELIZ 0
#define TRISTE 1

void ser_feliz(int estado);
void print_estado(int estado);

int main() {
    int estado = TRISTE;  // tiene block scope y automatic duration
    ser_feliz(estado);
    print_estado(estado);
    return 0;
}

void ser_feliz(int estado) {  // este "estado" no es el mismo de la superfuncion "main", es una copia con el mismo valor
    estado = FELIZ;  // asigno otro valor a dicha copia
}

void print_estado(int estado) {  // este "estado" no es el mismo de la superfuncion "main", es una copia
    printf("Estoy %s \n", estado == FELIZ ? "feliz" : "triste");  // nuevamente, este "estado" es una copia de
}                                                                 // lo definido en "main" (linea 9)

/*
El programa imprime "Estoy triste"
Al compilar aparece una advertencia de que en la linea 15, donde defino la funcion "ser_feliz"
esta dice que declare el parametro "estado" pero nunca lo use
A mi parecer si use ese parametro, le asigne el valor 0 (FELIZ)
por lo que ignorare la advertencia, o la tomare como que me esta diciendo que lo que hace "ser_feliz"
no tiene ningun efecto fuera de ella (eso si es cierto, pues los valores se pasan por copia a la funciones)
Dentro de main: ser_feliz(estado) no cambia el valor de "estado" pues fue pasado por valor
por lo que "print_estado(estado)" devolvera "Estoy triste"
*/