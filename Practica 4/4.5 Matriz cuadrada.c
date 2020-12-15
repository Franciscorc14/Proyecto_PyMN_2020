#include <stdio.h>
#include <stdlib.h>

int main()
{    int n,i,j;
    printf ("Introduce 3 para un tamano de matriz 3x3 y 4 para un tamano de matriz 4x4: ");
    scanf("%d",&n);
    int m[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
        printf("Introduce el valor de los elementos [%d][%d]: ",i+1,j+1);
        scanf("%d",&m[i][j]);}}
        printf(" \n \t");
        printf("\t Matriz %dx%d \n",n,n);
          for(i=0;i<n;i++){
            printf("\n");
            for(j=0;j<n;j++){ printf("%6d",m[i][j]);}}        return 0;}
