#include <stdio.h>
int main()
{   int s=0,n,i;
printf("Introduce el tamano del vector : ");
    scanf("%i",&n);
    int v[n];
    for(i=0;i<n;i++){
        printf("Escribe el elemento %i: ", 1+i);
        scanf("%i",&v[i]);
        s=s+v[i];  }
        for(i=0;i<n;i++){
            printf("  %i",v[i]);    }
            printf("\n \n La suma de los elementos del vector es: %i",s);
    return 0;}

