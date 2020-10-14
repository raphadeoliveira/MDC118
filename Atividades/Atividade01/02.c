#include <stdio.h>

int main (){
    int h, m, s;

    printf ("Digite os segundos: ");
    scanf ("%d", &s);

    h = s / 3600;
    s = s - h * 3600;
    m = s / 60;
    s = s - m * 60;

    printf ("%d horas, %d minutos e %d segundos\n", h, m, s);

    return 0;
}