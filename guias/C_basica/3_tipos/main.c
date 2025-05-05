#include <stdio.h>
#include <stdbool.h>

int main() {
    char c = 100;
    short s = -8712;
    int i = 123456;
    long l = 1234567890;
    long long ll = 1;
    printf("char(%lu): %hhd \n", sizeof(c), c);  // %d = %hd = %hhd?
    printf("short(%lu): %hd \n", sizeof(s), s);
    printf("int(%lu): %d \n", sizeof(i), i);
    printf("long(%lu): %ld \n", sizeof(l), l);
    printf("long long(%lu): %lld \n", sizeof(ll), ll);

    float f = 1.5;
    double d = 2.5;
    long double ld = 2.5;
    printf("float(%lu): %f \n", sizeof(f), f);
    printf("double(%lu): %lf \n", sizeof(d), d);  // %f = lf?
    printf("long double(%lu): %Lf \n", sizeof(ld), ld);  // ocupa 16 bytes?

    char ch = 'a';
    printf("char(%lu): %c \n", sizeof(ch), ch);

    int x = 9;
    int* pi = &x;
    char y = 99;
    char* pc = &y;
    printf("int*(%lu): %n \n", sizeof(pi), pi);
    printf("float*(%lu): %s \n", sizeof(pc), pc);
    //printf("void*(%lu): %p \n", sizeof(pv), pv);

    //void

    bool t = true;
    bool fa = false;
    printf("true(%lu): %d \n", sizeof(t), t);  //no tira error pero esta mal
    printf("false(%lu): %d \n", sizeof(fa), fa);
    return 0;
}