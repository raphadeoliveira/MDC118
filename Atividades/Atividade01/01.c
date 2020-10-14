#include <stdio.h>

int main (){
    float perimetro, raio, pi = 3.1416;


    printf ("Digite o valor do raio: ");
    scanf ("%f", &raio);

    perimetro = 2 * pi * raio;

    printf ("%f\n", perimetro);

    return 0;

}