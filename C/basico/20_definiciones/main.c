int b, c;         // variable global: file scope, static duration
void f(void)
{
    int b, d;     // variable local: block scope, automatic duration
}

void g(int a)     // variable local: block scope, automatic duration (pasaje por valor)
{
    int c;        // variable local: block scope, automatic duration
    {
        int a,d;  // variable local: block scope, automatic duration
    }
}