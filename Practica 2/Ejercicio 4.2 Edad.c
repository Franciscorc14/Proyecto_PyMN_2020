#include <stdio.h>
int edad;
int main()
{
printf("Introduce tu edad\n");
scanf("%d",&edad);
printf("Tu edad es %d \n",edad);
    
if (edad>=18) {
    printf("Eres mayor de edad\n");
  } else {
    printf("Eres menor de edad\n ");
  }
return 0;
}

