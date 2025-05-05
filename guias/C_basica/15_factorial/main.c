#include <stdio.h>

int factorial(int n);

int main() {
    int n;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (0 <= n) {
        printf("El factorial de %d es: %d. \n", n, factorial(n));
    } else {
        printf("El factorial de %d es indefinido. \n", n);
    }
    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        int res = 1;
        for (int m = n; m > 0; m--) {
            res *= m;
        }
        return res;
    }
}