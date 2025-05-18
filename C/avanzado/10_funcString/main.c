#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "BEP!!";
    char s2[] = "me ";
    char s3[] = "halfway";

    strcpy(s1,s2);            // s1 = {'m','e',' ','\0','\0','\0'}
    printf("s1 = %s\n", s1);
    size_t l1 = strlen(s1);
    size_t b1 = sizeof(s1);
    printf("Longitud de s1: %ld elementos.\n", l1);
    printf("Tamanio de s1: %ld bytes.\n", b1);


    char s4[20];                // {'\0','\0',...}
    char* p = s4;
    printf("%p\n", (void*) p);  // notar que el puntero
    *p = 'M';                   //
    *(p+1) = 'e';               //
    *(p+2) = 'e';               //
    p[3] = 't';                 // 
    p[4] = ' ';                 //
    printf("%p\n", (void*) p);  // no se movio

    char* pd = p+5;           // o tambien: char* pd = &s4[5]
    pd = stpcpy(pd,s2);
    pd = stpcpy(pd,s3);       // pd termina apuntando al primer '\0' de s4,
    printf("s4 = %s\n", s4);  // si imprimimos *pd imprime nada (literalmente)

    char s5[] = "Gimme ";
    char s6[] = "more";
    strcat(s5, s6);
    printf("s5 = %s\n", s5);

    printf("%d\n", strcmp(s4, s5));  // usa orden lexicografico (en este caso: G < M
    return 0;                        // pues G = 71 y M = 77 en ASCII)
}

/*
"restrict" es una palabra clave que solo aplica a punteros.
Dice que:
Dentro del alcance donde vive el puntero en cuestion (p1),
no se usara otro puntero (p2) para operar en la misma direccion de memoria donde apuntaba p1.
Operar significa ni leer ni modificar la direccion de memoria en cuestion.
Si podemos declarar y definir un puntero que apunte a ella, pero sin usarlo para nada mas.
*/