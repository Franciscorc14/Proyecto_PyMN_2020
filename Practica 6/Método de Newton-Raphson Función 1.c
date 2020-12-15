//Metodo de Newton-Raphson 
#include <stdio.h>
#include <math.h>
float f(float x);
float d(float x);
int main()
{ float x[5],xi=0.3,di,e;
int ac=0,it=5,i=0;
printf("\n\tMetodo de Newton-Raphson a partir de la funcion 8*sin(x)*exp(-x)-1 con un maximo de 5 iteraciones\n");
x[0]=xi; e=1;
printf("\nEl valor inicial de x es igual: %.2f\n",xi);
printf("\ni            \tXi           E\n");
do { ac++;
di=(f(x[i])/d(x[i]));
x[i+1]= (x[i]-di);
e=(x[i+1]-x[i]);
e=e/x[i+1];
e=fabs(e)*100;
printf("\n%d            %5.5f       %5.5f%%",ac,x[i+1],e);
i++; }
while(ac<it);
}
float f(float x){ 
float y= (8*sin(x)*exp(-x)-1);
return y; }

float d(float x) {
float y=(-8*sin(x)*exp(-x)+(8*cos(x)*exp(-x)));
return(y);        
}
