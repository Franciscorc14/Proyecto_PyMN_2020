#include <stdio.h>
#define g 9.8 
int main()
{
    float w,m;
    printf("Introducir masa en kg de la persona: ");
    scanf("%f",&m);
w= m*g;
printf("La fuerza de atraccion del peso de una persona es: %.3f N", w);
    return 0;
}
