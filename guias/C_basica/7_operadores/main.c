#include <stdio.h>

int main() {
    int a = 5, b = 3, c = 2, d = 1;

    printf("%x = %d. \n", a + b * c / d, 11);
    printf("%x = %d. \n", a % b, 2);
    printf("%x, %x = %d, %d. \n", a == b, a != b, 0, 1);
    printf("%x, %x = %d, %d. \n", a & b, a | b, 1, 7);
    printf("%x= %d. \n", ~a, -6);
    printf("%x, %x = %d, %d. \n", a && b, a || b, 1, 1);
    printf("%x = %d. \n", a << 1, 10);
    printf("%x = %d. \n", a >> 1, 2);
    int x1 = a;
    int x2 = a;
    int x3 = a;
    int x4 = a;
    printf("%x, %x, %x, %x, %x = %d, %d, %d, %d, %d. \n", a += b, x1 -= b, x2 *= b, x3 /= b, x4 %= b, 8, 2, 15, 1, 2);
    return 0;
}