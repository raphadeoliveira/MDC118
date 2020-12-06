#include <stdio.h>

int main(){
    int a, maior=0, menor=0;
    int Valor[10];

    printf("digite 10 Valores");
    printf("\n");

    for (a=0;a<10;a++){
      printf("Valor %d : ", a+1);
      scanf("%d", &Valor[a]);

      if(a==0){maior=Valor[a];menor=Valor[a];}
      if(Valor[a]>maior){
        maior=Valor[a];
      }
      else{
        if(Valor[a]<menor){
            menor=Valor[a];
        }
      }
    }
    printf("\no maior valor é %d\n", maior);
    printf("\ne o menor valor é %d\n\n", menor);
    
    return 0;
}