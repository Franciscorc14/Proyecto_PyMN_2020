#include <stdio.h>
int e;
float h,p,i;
char n[30];
int main()
{
    printf("Introducir un nombre y un apellido: ");
    gets (n);
    printf("Introducir Edad: ");
    scanf("%d",&e);
    printf("Introducir Peso en kg: ");
    scanf("%f",&p);
    printf("Introducir Estatura en metros: ");
    scanf("%f",&h);
    i=p/(h*h);
    printf("Tu nombre es: %.20s\nTu IMC es de: %.3f\n Tu edad es: %.2d años",n,i,e);
    return 0;
}
