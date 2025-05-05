#include <stdio.h>

int main() {
    int i = 0;
    while(i < 10) {  // (?) ESTA EXPRESION NO FUNCIONA (i++) && (i < 10)
        printf("%d \n", i);
        i += 1;
    }
    return 0;
}