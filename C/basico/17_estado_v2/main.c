# include <stdio.h>
# define FELIZ 0
# define TRISTE 1

int estado = TRISTE;  // tiene file scope y static duration

void ser_feliz();
void print_estado();

int main() {
    print_estado();  // imprime "Estoy triste"
    ser_feliz();
    print_estado();  // imprime "Estoy feliz"
}

void ser_feliz() {
    estado = FELIZ;  // "estado" es una variable global, puede ser accedida desde aqui (pues posee file scope)
                     // y esta viva en este momento (pues tiene static duration)
                     // luego, "estado" es alterada exitosamente
}
void print_estado() {
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}

/*
El programa imprime "Estoy triste" y luego imprime "Estoy feliz"
Demostrando que es posible modificar el valor de una variable por referencia
desde una funcion, si la variable es una variable global
*/