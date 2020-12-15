#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n,i,j;
     srand(time(NULL));
    printf ("Introduce 3 para un tamano de matriz 3x3 y 4 para un tamano de matriz 4x4: ");
    scanf("%d",&n);
    int m[n][n];
    for(i=0;i<n;i++){
              printf("\n \t");
        printf("\t Matriz %dx%d \n",n,n);
        for(i=0;i<n;i++){
            printf("\n");
            for(j=0;j<n;j++){
                 m[i][j]= 1+rand()%100;
                printf("%6d",m[i][j]);}}
        return 0;
}}
