#include "funca.h"
#include "funcb.h"

int main() {
    a();
    b();
    return 0;
}

/*
Si se modifica un header, igualmente el programa hace todos los procesos y genera
el binario, y al ejecutarlo funciona correctamente
Lo que significa que el programa como tal no necesita obligatoriamente las declaraciones
de los archivos de cabecera, siempre y cuando en los archivos fuente ya esten
definidos (y por lo tanto declarados implicitamente tambien)
*/