#include <stdio.h>

int main() {
    int mensaje_secreto[] = {116, 104, 101, 101, 32, 103, 105, 102, 116, 32, 111,
        102, 32, 119, 111, 114, 100, 115, 32, 105, 115, 32, 116, 104, 101, 32,
        103, 105, 102, 116, 32, 111, 102, 32, 100, 101, 99, 101, 112, 116, 105,
        111, 110, 32, 97, 110, 100, 32, 105, 108, 108, 117, 115, 105, 111, 110};

    size_t length = sizeof(mensaje_secreto) / sizeof(int);
    char decoded[length];

    for (unsigned int i = 0; i < length; i++) {
        decoded[i] = (char) (mensaje_secreto[i]);  // casting de int a char
    }

    for (unsigned int i = 0; i < length; i++) {
        printf("%c", decoded[i]);
    }
    return 0;
}

/*
- el mensaje secreto es "the gift of words is the gift of deception and illusion"
- length se calcula de esa manera pues el mensaje codificado esta en int (cada elemento ocupa 4 bytes)
  mientras que la decodificacion del mismo sera en char, que ocupa 1 byte
  entonces si ejecutamos la decodificacion, cada int sera transformado a char (4 bytes -> 1 byte)
  por lo que la longitud del mensaje (y la memoria que ocupa) sera reducida a su cuarta parte
- si el mensaje tiene un tamanio distinto no sucede nada extranio, la decodificion sigue funcionando
  pues aniadir o quitar un entero de mensaje_secreto suma o resta 4 bytes a su tamanio en memoria
  es decir, siempre sera multiplo de 4, por lo que la division funcionara correctamente
  y la decodificacion tendra 1 caracter mas o menos, segun sea el caso
- (?) POR QUE SE USA SIZE_T EN LUGAR DE UNSIGNED INT?
*/