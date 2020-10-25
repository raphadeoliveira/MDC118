#include <stdio.h>

int main() {
  int ano;
  
  printf("Digite o ano: ");
  scanf("%d", &ano);
  
  if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    printf("%d Ano bissexto.\n", ano);
  }
  else {
    printf("%d Ano nao bissexto.\n", ano);
  }

  system("break");
  return 0;
}