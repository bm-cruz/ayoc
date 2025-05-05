# include <stdio.h>
# define FELIZ 0
# define TRISTE 1

int estado = TRISTE;  // tiene file scope y static duration

void alcoholizar();
void print_estado();

int main() {
    print_estado();                               // imprime "Estoy triste"
    alcoholizar();
    print_estado();                               // imprime "Estoy feliz"
    alcoholizar(); alcoholizar(); alcoholizar();
    print_estado();                               // imprime "Estoy triste"
}

void alcoholizar() {
    int cantidad = 0;  // static duration. block scope
    cantidad++;
    if (cantidad < 3) {
        estado = FELIZ;
    } else {
        estado = TRISTE;
    }
}

void print_estado() {
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}

/*
El programa imprime "Estoy triste", luego "Estoy feliz" y por ultimo "Estoy triste"
Si se le quita la palabra clave "static" a la variable cantidad, esta pasara de tener
"static duration" a "automatic duration",
esto significa que el tiempo durante el cual esta variable
tendra un espacio de memoria asignado sera modificado,
pasara de existir en todo el programa, a solo existir dentro de la funcion "alcoholizar"
cuando termine la esta funcion, la variable "cantidad" dejara de existir
Esto implica que cada vez que se llame a la funcion alcoholizar, se creara una variable nueva
llamada "cantidad" que valdra 0, se le sumara 1, y el chequeo del if siempre ira por el primer caso,
asignando a estado el valor FELIZ
*/