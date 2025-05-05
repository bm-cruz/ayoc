#include <stdio.h>

int main() {
    float f = 0.1F;
    double d = 0.1;
    printf("%f es de tipo float. \n", f);
    printf("%lf es de tipo double. \n", d);  // (?) tiene la misma precision que un float

    int fi = (int) f;
    int di = (int) d;
    printf("%f fue casteado a %d. \n", f, fi);
    printf("%lf fue casteado a %d. \n", d, di);
    return 0;
}

/* sucede que al castear un float/double a int, se pierden todos los
decimales y se conserva solo la parte entera, sin redondear */