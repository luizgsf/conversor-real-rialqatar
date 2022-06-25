#include<stdio.h>
#include<conio.h>
int main(){
float real,rial;
float tipo;
printf("Para converter do real para o rial digite 1, para converter do rial para o real digite 2: ");
scanf("%f",&tipo);
if(tipo==1){
printf("Digite em reais a quantidade a ser convertida: ");
scanf("%f",&real);
rial=real/1.44;
printf("QR:%.2f", rial);}
else{
printf("Digite em rial a quantidade a ser convertida: ");
scanf("%f",&rial);
real=rial*1.44;
printf("R$:%.2f",real);}}
