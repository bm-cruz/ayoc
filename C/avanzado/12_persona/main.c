#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NAME_LEN 85

typedef struct {
    char nombre[NAME_LEN + 1];
    int edad;
} persona_t;

/*
persona_t* crearPersona(char* nombre, int edad) {
    persona_t persona = {nombre, edad};
    return &persona;  // Al salir de esta funcion, "persona" deja de existir,
}                     // por lo tanto "&persona" tambien.
*/

persona_t* crearPersona(char* nombre, int edad) {
    persona_t* p = malloc(sizeof(persona_t));

    if (p == NULL) {   // es lo mismo que if(p == NULL) return NULL;
        return NULL;
    }

    strcpy((*p).nombre,nombre);
    (*p).edad = edad;
    return p;
}

void eliminarPersona(persona_t* p) {
    free(p);
    return;
}

int main() {
    persona_t* p = crearPersona("Brian", 24);
    
    if (p == NULL) {
        // Manejar el error de asignacion de memoria
        return 1;
    }

    printf("Nombre: %s Edad: %d\n", (*p).nombre, (*p).edad);

    eliminarPersona(p);
    return 0;
}