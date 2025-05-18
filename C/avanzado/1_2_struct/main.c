#include <stdio.h>
#define NAME_LEN 20

typedef struct monstruo {
    char nombre[NAME_LEN];
    int vida;
    double ataque;
    double defensa;
} monstruo_t;

monstruo_t evolution(monstruo_t monstruo) {
    monstruo.ataque += 1.0;
    monstruo.defensa += 1.0;
}

int main() {
    monstruo_t little_monsters[5] = {
        {"Judas", 30, 7.0, 2.0},
        {"Mary", 60, 4.0, 7.5},
        {"Poker", 40, 5.0, 6.5},
        {"JD", 50, 5.5, 2.5},
        {"Romanz", 70, 4.5, 3.5},
    };

    for(int i = 0; i < 5; i++) {
    printf("%s, %d, %f, %f\n", little_monsters[i].nombre,
                               little_monsters[i].vida,
                               little_monsters[i].ataque,
                               little_monsters[i].defensa);    
    }

    struct monstruo judas = little_monsters[0];

    evolution(judas);
    printf("%s, %d, %f, %f\n", judas.nombre,
                               judas.vida,
                               judas.ataque,
                               judas.defensa);
    return 0;
}