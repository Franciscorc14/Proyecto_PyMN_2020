#include <stdio.h>
#include <math.h>
int main()
{
float x1,x2,d;
int a,b,c;
printf("Introducir valores de acuerdo a la ecuación de segundo grado o cuadrática de la forma: ax^2+bx+c=0\n");
printf("Valor de A\n ");
scanf("%d", &a);
printf("Valor de B\n ");
scanf("%d", &b);
printf("Valor de C\n ");
scanf("%d", &c);

if (a!=0)
d=(b*b)-4*a*c;
{     if(d>0) {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a); 
        printf("El resultado de x1 es: %2f\n",x1);
        printf("El resultado de x2 es: %2f",x2); }  
    else{ printf("Cambiar valores, las raices son imaginarias"); }
    
    return 0;
}}

