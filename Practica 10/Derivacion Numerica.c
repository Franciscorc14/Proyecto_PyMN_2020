#include <stdio.h>
#include<math.h>
float dad(float h, float(xi)), da(float h, float(xi)), dc(float h, float(xi)), errordad(float h, float (xi));
float errorda(float h, float (xi)), errordc(float h, float (xi)),xi,h;

int main()
{
    xi=0.6;
    printf("Calculando la derivada de f(x)=1-e^(-x/0.2) en el punto xi=0.6 a partir del incremento h \n");
    printf("Introduce el valor de h: ");
    scanf("%f",&h);
    printf("\nh            \tAdelante            Atras             Centrada             ");
    printf("\n%f        %f           %f           %f            ",h,dad(h,xi),da(h,xi),dc(h,xi));
    printf("\nEr%%             %f           %f          %f               ",errordad(h,xi),errorda(h,xi),errordc(h,xi));
}

float errordad(float h, float (xi)){ 
    float va,e;
    va = 5*exp(-xi/0.2);
       e=(fabs((dad(h,xi)-va)/va)*100); return e;
                                    }

float errorda(float h, float (xi)){ 
    float va,e;
    va = 5*exp(-xi/0.2);
       e=(fabs((da(h,xi)-va)/va)*100); return e;
                                    }
float errordc(float h, float (xi)){ 
    float va,e;
    va = 5*exp(-xi/0.2);
       e=(fabs((dc(h,xi)-va)/va)*100); return e;
                                   }
    
float dad(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,e;
    fxi = 1-exp(-xi/0.2); //Evaluando la funcion en xi f(xi)
    fxip1 = 1-exp(-(xi+h)/0.2); // Evaluando f(xi+1)
    fxip2 = 1-exp(-(xi+2*h)/0.2); //Evaluando f(xi+2)
    dfxi = (-fxip2+4*fxip1-3*fxi)/(2*h);
    e=(fabs ((dfxi-fxi)/fxi)*100);
    return dfxi;  }
    
    float da(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2;
    fxi = 1-exp(-xi/0.2); //Evaluando la funcion en xi f(xi)
    fxip1 = 1-exp(-(xi-h)/0.2); // Evaluando f(xi-1)
    fxip2 = 1-exp(-(xi-2*h)/0.2); //Evaluando f(xi-2)
    dfxi = (3*fxi-(4*fxip1)+fxip2)/(2*h);
    return dfxi;                 }
    
    float dc(float h, float(xi)){
    float dfxi, fxi, fxip1, fxip2,fxip_1,fxip_2;
    fxi = 1-exp(-xi/0.2); //Evaluando la funcion en xi f(xi)
    fxip_1 = 1-exp(-(xi-h)/0.2); // Evaluando f(xi-1)
    fxip_2 = 1-exp(-(xi-2*h)/0.2); //Evaluando f(xi-2)
    fxip1 = 1-exp(-(xi+h)/0.2); // Evaluando f(xi+1)
    fxip2 = 1-exp(-(xi+2*h)/0.2); //Evaluando f(xi+2)
    dfxi = (-fxip2+(8*fxip1)-(8*fxip_1)+fxip_2)/(12*h);
    return dfxi;     }   
