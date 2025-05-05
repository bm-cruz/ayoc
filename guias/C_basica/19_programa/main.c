#include <stdio.h>

int g = 10;  // variable global: file scope, static duration

void functionA() {
    int a = 20;         // variable local: block scope, automatic duration
    static int b = 30;  // variable local estatica: block scope, static duration

    printf("Dentro de functionA:\n");
    printf("  g = %d\n", g);
    printf("  a = %d\n", a);
    printf("  b = %d\n", b);

    g += 5;
    a += 10;
    b += 5;
}

void functionB() {
    int a = 40;         // variable local: block scope y automatic duration
    static int c = 50;  // variable local estatica: block scope y static duration

    printf("\nDentro de functionB:\n");
    printf("  g = %d\n", g);
    printf("  a = %d\n", a);
    printf("  c = %d\n", c);

    g += 5;
    a += 10;
    c += 5;
}

int main() {
    printf("Dentro de main:\n");
    printf("  g = %d\n", g);      // "g = 10"

    functionA();  // g => 15, a => 30 (muere), b => 35
    functionB();  // g => 20, a => 50 (muere), c => 55
    functionA();  // g => 25, a => 30 (muere), b => 40
    functionB();  // g => 30, a => 50 (muere), c => 60

    printf("\nFinal en main:\n");
    printf("  g = %d\n", g);       // "g = 30"

    return 0;
}

/*
imprime los valores que van teniendo las variables a los largo del programa
demostrando claramente como, dependiendo del scope y duration
unas variables nacen, viven o mueren al entrar y salir de las funciones
*/