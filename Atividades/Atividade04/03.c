#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "portuguese");

    char x;

    printf("Aperte uma tecla: ");
    scanf("%c", &x);
        if(x>=48 && x<=57) {
            printf("%c É um digito\n", x);
        }
        else if(x>=65 && x<=90 || x>=97 && x<=122) {
            printf("%c É uma letra\n", x);
        }
        else {
            printf("%c É um caractere especial\n", x);
        }

    getchar();
    return 0;
}