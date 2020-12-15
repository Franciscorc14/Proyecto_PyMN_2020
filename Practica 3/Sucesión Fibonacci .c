#include <stdio.h>

int main(){
int n, i, a=0, b=1, c=1;
	printf("Introduce el numero de elementos: ");
	scanf("%i", &n);
	printf("1,");
	for(i=1; i<n; i++){
		c = a + b; a = b; b = c;
		 printf("%i,",b); }}
		
		
