#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t i8 = 1;
    int16_t i16 = 2;
    int32_t i32 = 3;
    int64_t i64 = 4;

    printf("int8_t(%lu): %d \n", sizeof(i8), i8);
    printf("int16_t(%lu): %d \n", sizeof(i16), i16);
    printf("int32_t(%lu): %d \n", sizeof(i32), i32);
    printf("int64_t(%lu): %ld \n", sizeof(i64), i64);

    int_fast8_t if8 = 5;
    int_fast16_t if16 = 6;
    int_fast32_t if32 = 7;
    int_fast64_t if64 = 8;

    printf("int_fast8_t(%lu): %d \n", sizeof(if8), if8);
    printf("int_fast16_t(%lu): %ld \n", sizeof(if16), if16);
    printf("int_fast32_t(%lu): %ld \n", sizeof(if32), if32);
    printf("int_fast64_t(%lu): %ld \n", sizeof(if64), if64);

    int_least8_t il8 = 9;
    int_least16_t il16 = 10;
    int_least32_t il32 = 11;
    int_least64_t il64 = 12;

    printf("int_least8_t(%lu): %d \n", sizeof(il8), il8);
    printf("int_least16_t(%lu): %d \n", sizeof(il16), il16);
    printf("int_least32_t(%lu): %d \n", sizeof(il32), il32);
    printf("int_least64_t(%lu): %ld \n", sizeof(il64), il64);

    intmax_t im = 13;

    printf("intmax_t(%lu): %ld \n", sizeof(im), im);

    int x = 14;
    int* p = &x;
    intptr_t ip = (intptr_t)p;

    printf("intptr_t(%lu): %ld \n", sizeof(ip), ip);
    return 0;
}