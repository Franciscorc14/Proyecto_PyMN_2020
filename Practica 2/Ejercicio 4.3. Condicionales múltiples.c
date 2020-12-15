#include <stdio.h>
int d,b;
float p,pf,pb;
int main(){
printf("Introduce el numero de departamento, 1 para perfumeria, 2 para salchichoneria, 3 para carniceria y 4 para limpieza:\n");
scanf("%i",&d);
printf("Introduce el precio del producto: \n");
scanf("%f",&p);
printf("Introduce el numero de bolsas que necesites, en caso de no necesitar ninguna indicar un 0\n");
scanf("%i",&b);
pb= (b*.10);
 switch (d) {
    case 1: pf= (p-(p*.20))+pb;
    printf("El precio final del producto es: %.2f pesos\n",pf); break; 
    case 2: pf= (p-(p*.40))+pb;
    printf("El precio final del producto es: %.2f pesos\n",pf); break;
    case 3: pf= (p-(p*.20)) +pb;
    printf("El precio final del producto es: %.2f pesos\n",pf); break;
    case 4: pf= ((p-(p*.35))+pb);
    printf("El precio final del producto es: %.2f pesos\n",pf); break; 
    
    default: printf("Error, la clasificacion de los departamentos debe ser en numero");
 }}
