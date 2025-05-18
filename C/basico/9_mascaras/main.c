#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t p1 = 0x2000A000;
    uint32_t p2 = 0x0000000F;

    p1 >>= 29;
    uint32_t mask = 0x00000007;
    p2 &= mask;

    if (p1 == p2) {
        printf("Los 3 bits mas altos de la primer palabra son iguales a los 3 bits mas bajos de la segunda palabra \n");
    } else {}

    return 0;
}
/*  (?) COMO LO HAGO INTERACTIVO
int main() {
    uint32_t a, b;
    printf("Ingrese la primer palabra de 32 bits: ");
    scanf("%u", &a);
    
    printf("Ingrese la segunda palabra de 32 bits: ");
    scanf("%u", &b);

    if (comparar_bits(a, b)) {
        printf("Los 3 bits mas altos de la primer palabra son iguales a los 3 bits mas bajos de la segunda palabra");
    } else {}

    return 0;
}
*/