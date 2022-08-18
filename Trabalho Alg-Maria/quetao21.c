#include <stdio.h>
int main (void )
{
  int codigo;
  float preco;
  
  printf("Qual é o preço do produto..:\n");
  scanf("%f",&preco);
  printf("******************************\n");
  printf("************ATENÇÃO***********\n");
  printf("******************************\n\n");
  printf("Código de origem deve ser de entre 1 a 30\n\n");
  printf ("Digite o código de origem: \n");
  scanf("%d", &codigo);
if(codigo == 1){
    printf ("Procedência: Sul\n");
}
else if(codigo == 2){
    printf ("Origem: Norte\n");
}    
  else if(codigo == 3){
    printf ("Origem: Leste\n");
  }
    
    else if(codigo == 4){
    printf ("Origem: Oeste\n");
    }
    
    else if(codigo == 5 || codigo == 6){
    printf ("Origem: Nordeste\n");
    }
    
    else if(codigo == 7 || codigo == 8 || codigo == 9){
    printf ("Origem: Sudeste\n");
    }
    
    else if (codigo>= 10 && codigo<=20) {
    printf ("Origem: Centro-Oeste\n");
}
    
   else if (codigo>= 21 && codigo<=30) {
    printf ("Origem: Nordeste\n");
   }
 
    else{
    printf ("Origem não encontrada!\n");
  }
 
  printf("O valor do produto é..: R$%.2f", preco);

  return=0;  
}
