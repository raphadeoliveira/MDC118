#include <stdio.h>

int main (){
    int num;

    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("%d, é Par\n", num);
    }
    else
    {
        printf("%d, É Impar\n", num);
    }
    
    return 0;
}