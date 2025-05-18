/*
"x" es un entero, "p" es un puntero, 
"&x" es la direccion de memoria donde esta almacenado "x",
"*p" el valor que esta almacenado en p

"Direccion de x: NUMERO_HEXADECIMAL_1 Valor: 42"
"Direccion de p: NUMERO HEXADECIMAL_2 Valor: NUMERO HEXADECIMAL_1"
"Valor de lo que apunta p: 42"
*/

#include <stdio.h>

int main() {
    int x = 42;
    int *p = &x;

    printf("Direccion de x: %p Valor: %d\n", (void*) &x, x);
    printf("Direccion de p: %p Valor: %p\n", (void*) &p, (void*) p);
    printf("Valor de lo que apunta p: %d\n", *p);
    return 0;
}

/*
se imprimio:

"Direccion de x: 0x7ffe6193202c Valor: 42"
"Direccion de p: 0x7ffe61932030 Valor: 0x7ffe6193202c"
"Valor de lo que apunta p: 42"

"0x7ffe6193202c" es la direccion de memoria donde esta almacenada x (&x)
"42" es el valor de x

"0x7ffe61932030" es la direccion de memoria donde esta almacenada p (&p)
"0x7ffe6193202c" es el valor de p
"42" es el valor de *p
*/