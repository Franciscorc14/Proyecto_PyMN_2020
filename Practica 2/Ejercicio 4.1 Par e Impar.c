//Número par e impar
#include <stdio.h>

int main()
{
  int num;
 printf("Dame un número:\n");
 scanf("%d", &num);
  
  if (num %2==0) {
    printf("Es par");
  } else {
    printf("Es impar");
  }
}
 
