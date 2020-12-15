#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ 
   int n,i,j;
int sm[i][j];
     srand(time(NULL));
    printf ("Introduce el tamano de las dos matrices: ");
    scanf("%d",&n);
    
    int m[n][n],m1[n][n];
    for(i=0;i<n;i++){ 
	printf("\n \t");
   int sm[i][j];
        
		printf("\t Matriz 1 %dx%d \n",n,n);
        for(i=0;i<n;i++){ 
		printf("\n");
            for(j=0;j<n;j++){
                 m[i][j]= 1+rand()%100;
                printf("%6d",m[i][j]);
				}
				}
        for(i=0;i<n;i++){ 
		printf("\n \t");
    
		printf("\t Matriz 2 %dx%d \n",n,n);
        for(i=0;i<n;i++){ 
		printf("\n");
            for(j=0;j<n;j++){
                 m1[i][j]= 1+rand()%100;
                printf("%6d",m1[i][j]);
				}				} 
     
        printf("\n\n \tSuma de matrices \n");
		}
		for(i=0;i<n;i++){ 
		   for(j=0;j<n;j++){
		       sm[i][j]=m[i][j]+m1[i][j];
		   	printf("[%d+%d]= %d\t",m[i][j],m1[i][j],sm[i][j] );
	}
	printf("\n");
		}}return 0;}

