#include <stdio.h>
int main (void )
{
int horasEx, horasFal;
float bonus, min;

printf("Insira o número de horas trabalhadas além do expediente normal..:\n");
scanf("%d",&horasEx);
printf("Insira número de horas m que o funcionário esteve ausente..:\n");
scanf("%d",&horasFal);

bonus= horasEx-(2/3*(horasFal));
min = bonus * 60;


if(bonus>2400){
    printf("Bonus é de R$ 500,00");
}
else if(bonus>=1800 && bonus<2400){
    printf("Bonus é de R$ 400,00");
}
else if(bonus>=1200 && bonus>1800){
    printf("Bonus é de R$ 300,00");
}
else if(bonus>=600 && bonus>1200){
    printf("Bonus é de R$ 200,00");
}
else if(bonus<600){
    printf("Bonus é de R$ 100,00");
}
}
