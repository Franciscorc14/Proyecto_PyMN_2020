#include <stdio.h>
int sc;
float gs,gc,gsf,gcf;
int main()
{ printf("Introduce 1 para Casado y 2 para Soltero:\n");
 scanf("%i", &sc);
switch (sc) { 
 case 1: 
printf("Introduce tu ganancia mensual:\n");
scanf("%f",&gc);
if(gc>0 & gc<64000) { gcf=gc-(gc*.10);
    printf("Su tarifa final de impuestos es: $%.3f\n", gcf); }
    else  if(gc>=64000){  gcf=gc-(gc*.25);
        printf("Su tarifa final de impuestos es: $%.3f\n", gcf);    }   
    else { printf("La ganancia mensual debe ser mayor a 0");}  break;  
 case 2: printf("Introduce tu ganancia mensual:\n");
scanf("%f",&gs);
if(gs>0 & gs<32000) { 
    gsf=gs-(gs*.10);
    printf("Su tarifa final de impuestos es: $%.3f\n", gsf); }
    else  if(gs>=32000){ 
        gsf=gs-(gs*.25);
        printf("Su tarifa final de impuestos es: $%.3f\n", gsf); }   
    else { printf("La ganancia mensual debe ser mayor a 0");	break;  
default: printf ("Los valores deben ser numeros"); } 
}}

