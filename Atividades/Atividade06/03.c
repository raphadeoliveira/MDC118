#include <stdio.h>

  enum meses_do_ano { 
      Janeiro = 1,
      Fevereiro,
      Marco,
      Abril,
      Maio,
      Junho,
      Julho,
      Agosto,
      Setembro,
      Outubro,
      Novembro,
      Dezembro
      };
int main()
{
    int meses;
  printf("Digite o numero do mes: ");
  scanf("%d", &meses);
  
  if((meses >= Janeiro) && (meses <= Dezembro))
  {
  
    switch(meses)
    {
    case Janeiro:
    printf("%d - Janeiro\n", meses);
    break;
    
    case Fevereiro:
    printf("%d - Fevereiro\n", meses);
    break;
    
    case Marco:
    printf("%d - Marco\n", meses);
    break;
    
    case Abril:
    printf("%d - Abril\n", meses);
    break;
    
    case Maio:
    printf("%d - Maio\n", meses);
    break;
    
    case Junho:
    printf("%d - Junho\n", meses);
    break;
    
    case Julho:
    printf("%d - Julho\n", meses);
    break;
    
    case Agosto:
    printf("%d - Agosto\n", meses);
    break;
    
    case Setembro:
    printf("%d - Setembro\n", meses);
    break;
    
    case Outubro:
    printf("%d - Outubro\n", meses);
    break;
    
    case Novembro:
    printf("%d - Novembro\n", meses);
    break;
    
    case Dezembro:
    printf("%d - Dezembro\n", meses);
    break;
    
    }
  }
  else
  {
    printf("Valor INVALIDO!!!\n");
    
    printf("Os valores validos para os meses do ano sao: \n\n");
    
    for(meses = Janeiro; meses <= Dezembro; meses++)
      printf("Mes: %d \n", meses);
  }
  
  return 0;
}