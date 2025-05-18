#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int max = 6;

    int dado[] = {0,0,0,0,0,0};

    for (int i = 0; i < 60000000; i++) {
        int azar = rand() % max;
        switch (azar) {
            case 0:
                dado[0] += 1;
                break;
            case 1:
                dado[1] += 1;
                break;
            case 2:
                dado[2] += 1;
                break;
            case 3:
                dado[3] += 1;
                break;
            case 4:
                dado[4] += 1;
                break;
            case 5:
                dado[5] += 1;
                break;
        }
    }

    int longitud = sizeof(dado) / sizeof(dado[0]);
    for (int i = 0; i < longitud; i++) {
        printf("%d \n", dado[i]);
    }

    return 0;
}