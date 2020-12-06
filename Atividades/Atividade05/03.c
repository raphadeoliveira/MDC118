#include <stdio.h>
#include <string.h>

int main ()
{
    int cont, tam;
    char nome[80];

    printf("Informe um caractere: ");
    fgets (nome, sizeof(nome), stdin);

        tam = strlen(nome);

    for(cont=tam; cont>=0; cont--){
        printf("%c", nome[cont]);
    }
    printf("\n");
        

   return 0; 
}