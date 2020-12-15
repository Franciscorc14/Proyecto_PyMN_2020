#include <stdio.h>
float h,p,i;
int main()
{
 printf ("Introducir Peso en kg: ");
 scanf("%f", &p);
 printf ("Introducir Estatura en metros: ");
 scanf("%f", &h);
 i= p/(h*h);
   printf("Tu IMC es de: %.3f\n", i );
 if(i>0 & i<18.5){
	printf("El estado de su IMC es de peso bajo");
      }
	else if (i>=18.5 & i<=24.9){
	printf("El estado de su IMC es de Peso normal");	}
	else if(i>=25 & i<=29.4){
	printf("El estado de su IMC es de Sobrepeso");     }
else if(i>=30 & i<=34.5){
  printf("El estado de su IMC es de Obesidad tipo 1");
    	}
else if(i>=25 & i<=39.9){
printf("El estado de su IMC es de Obesidad tipo 2");	    		}
else if(i>=40){
printf("El estado de su IMC es de Híper Obesidad");					}
else {	printf("El IMC debe ser mayor a 0"); }}
 

