#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    
    if (numero1 > numero2){
        printf("Primeiro numero é maior que o segundo : %d\n", numero1);
    }
    else{
        printf("Segundo numero e maior que o primeiro: %d\n", numero2);
    }
    
system ("break");
return 0;
}