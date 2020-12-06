  
#include<stdio.h>

struct d_t
{
    int dia, mes, ano;

};

int main()
{
    struct d_t d;

    printf("Digite o dia: ");
    scanf("%d", &d.dia);

    printf("Digite o mes: ");
    scanf("%d", &d.mes);

    printf("Digite o ano: ");
    scanf("%d", &d.ano);

    printf("Data no formato BR: %d/%d/%d\n", d.dia, d.mes, d.ano);
    printf("Data no formato US: %d/%d/%d\n", d.mes, d.dia, d.ano);
    


    return 0;
}