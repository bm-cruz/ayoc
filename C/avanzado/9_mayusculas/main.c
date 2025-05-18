#include <stdio.h>

int diff = 'A' - 'a';

void all_caps(char* p) {
    while(*p != '\0') {
        if(('a' <= *p) & (*p <= 'z')) {
            *p += diff;
        }
        p++;
    }
    return;
}

int main() {
    char arr[] = "3a4Bmb!0q@.";
    printf("%s\n", arr);

    char* p = arr;
    all_caps(p);          // Puedo pasarle &arr, y funciona ya que 
    printf("%s\n", arr);  // los arreglos se comportan como punteros
    return 0;             // a su primer elemento.
}