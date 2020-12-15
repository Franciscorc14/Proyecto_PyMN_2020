#include <stdio.h>
int main(){
	int n, b[999],i = 0;
    
    printf("Da el numero decimal a covertir: ");
    scanf("%i",&n);
    while (n != 0)    {
    b[i] = n%2;
     n = n / 2;
     i++; }
    i--;
    printf("La conversion a binario es: \n");   

    while (i>=0)
    {
          printf("%i \n",b[i]);
          i--; }
    	return 0;       }
