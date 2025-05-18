#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t memoria[9] = {255,31,42,0,55,67,-128,127,-99};
    uint8_t *x = (uint8_t*) &memoria[0];  // (?) EL CASTEO ES POSIBLE PARA ABSOLUTAMENTE
    int8_t *y = &memoria[6];              //     TODAS LAS COMBINACIONES DE TIPOS?

    printf("Direccion de memoria de x: %p Valor: %d\n", (void*) x, *x);  // (?) EL CASTEO
    printf("Direccion de memoria de y: %p Valor: %d\n", (void*) y, *y);  //     ES NECESARIO?
}

/*
Notar que al compilar sale un warning que nos avisa que en la linea 5 ocurre overflow
en el primer elemento (255).
Esto se debe a que al pasarlo de int a int8/char (casteo implicito por parte del compilador)
el valor se sale del rango de int8/char (-128 a 127), por lo que se convierte en "-1".
Aun asi, la declaracion, definicion y casteo de la linea 6 crea un puntero que,
en efecto apunta a la misma direccion de memoria, PERO LO INTERPRETA DE MANERA DISTINTA
PUES ES UN PUNTERO A "UINT8_T", OSEA QUE EL VALOR AL QUE APUNTA ES INTERPRETADO COMO "255"
(representacion de la informacion, orga1).
*/