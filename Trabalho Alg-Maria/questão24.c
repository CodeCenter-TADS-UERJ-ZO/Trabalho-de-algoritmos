
#include <stdio.h>
int main (void )
{
float preco,aumento;
int categoria,refri;

printf("Qual é o preço ..:\n");
scanf("%f",&preco);

printf("**************************\n");
printf("********CATEGORIAS********\n");
printf("**************************\n\n");
printf("1 - Limpeza\n");
printf("2 - Alimentação\n");
printf("3 - Vestuário\n\n");
printf("Qual é a categoria ..:\n\n");
scanf("%i",&categoria);
 switch ( categoria ){
     case 1:
     categoria = 1;
     break;
      case 2:
     categoria = 2;
     break;
      case 3:
     categoria = 3;
     break;
     default:
     printf("**************************\n");
    printf("********CATEGORIAS********\n");
    printf("**************************\n\n");
    printf("1 - Limpeza\n");
    printf("2 - Alimentação\n");
    printf("3 - Vestuário\n\n");
    printf("Qual é a categoria ..:\n\n");
    scanf("%d",&categoria);
 }

printf("****************************\n");
printf("********REFRIGERAÇÃO********\n");
printf("****************************\n\n");
printf("1 - Produtos que necessitam de refrigeração\n");
printf("2 - Produtos que não necessitam de refrigeração\n");
printf("Qual é a situação ..:\n\n");
scanf("%i",&refri);
 switch ( refri ){
     case 1:
     refri = 1;
     break;
      case 2:
     refri = 2;
     break;
     default :
printf("****************************\n");
printf("********REFRIGERAÇÃO********\n");
printf("****************************\n\n");
printf("1 - Produtos que necessitam de refrigeração\n");
printf("2 - Produtos que não necessitam de refrigeração\n");
scanf("%d", &refri);
     
 }
 if (preco <= 25){
     if (categoria = 1){
         aumento = preco+(preco*0.05);
     }
     if (categoria = 2){
         aumento = preco+(preco*0.08);
     }
     if (categoria = 3){
         aumento = preco+(preco*0.10);
     }
 }
 if (preco > 25){
     if (categoria = 1){
         aumento = preco+(preco*0.12);
     }
     if (categoria = 2){
         aumento = preco+(preco*0.15);
     }
     if (categoria= 3){
         aumento = preco+(preco*0.18);
     }
 }
 if (categoria == 2 && refri == 1){
     aumento = aumento-(preco*0.05);
 }
     else if (categoria != 2 && refri !=1){
          aumento = aumento-(preco*0.08);
     }
     
     
 
 if (aumento <= 50){
     printf("O preço do produto é: %.2f\n",aumento);
     printf("Baixo");
 }
  if (aumento > 50 && aumento <120){
     printf("O preço do produto é: %.2f\n",aumento);
     printf("Médio");
 }
  if (aumento >= 120){
     printf("O preço do produto é: %.2f\n",aumento);
     printf("Alto");
 }
 
 return=0;
}

