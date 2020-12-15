#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{ int ne;
	printf("\n\tMenu ''Arreglos vectoriales o matriciales''\n\n");
    printf("Introduce el numero indicado para el ejercicio que se desee imprimir/ejecutar en pantalla \n1- 4.1\t 2- 4.2\t 3- 4.3\t 4- 4.4\t 5- 4.5\t 6- 4.6\t 7- 4.7\t 8- 4.8 : ");
    scanf("%i",&ne);
    switch (ne){
    	case 1:{int ve,ve1,i,n1,n2,im;
    printf("Introduce el tamano del vector 1: ");
    scanf("%i",&n1);
    printf("Introduce el tamano del vector 2: ");
    scanf("%i",&n2);
    int ar[n1], ar2[n2];
    printf(" \t\t Vector 1\n");
    for(i=0;i<n1;i++){printf("Introduce el valor del elemento %i: ",1+i);
    scanf("%i", &ve); ar[i]=ve;  }
    printf(" \t\t Vector 2\n");
    for(i=0;i<n2;i++){printf("Introduce el valor del elemento %i: ",1+i);
    scanf("%i", &ve1); ar2[i]=ve1;  }
    
    printf("\nSi desea imprimir los vectores responder con un 1: ");
    scanf("%i",&im);
    if(im==1){
    printf ("\nLos valores del vector 1 son: ");
    for(i=0; i<n1;i++){printf(" %i ", ar[i]);} 
    printf ("\nLos valores del vector 2 son: ");
    for(i=0; i<n2;i++){printf(" %i ", ar2[i]);}
    return 0; }
    
    printf ("\nLos valores del vector 1 son: ");
    for(i=0; i<n1;i++){printf(" %i ", ar[i]);} 
    printf ("\nLos valores del vector 2 son: ");
    for(i=0; i<n2;i++){printf(" %i ", ar2[i]);}
    return 0; break;}			
           case 2:{int v1[5], v2[5],i;
           printf("\n \tEjercicio 4.2 Generar 2 vectores con valores random e imprimirlos\n");
    srand(time(NULL));
    printf ("Los valores random del vector 1 son: ");
    int v[i];
    for(i=0; i<5;i++){
        v1[i]=1+rand()%100;
         printf(" %i ", v1[i]);}
printf ("\nLos valores random del vector 2 son: ");
for(i=0; i<5;i++){
        v2[i]=1+rand()%100;
         printf(" %i ", v2[i]);}  return 0; 			break;}
         
case 3:{int v1[5], v2[5],i;
printf("\n \tEjercicio 4.3 Generar 2 vectores, sumarlos e imprimirlos\n");
    srand(time(NULL));
    printf ("Los valores random del vector 1 son: ");
    int v[i];
    for(i=0; i<5;i++){
        v1[i]=1+rand()%100;
         printf(" %i ", v1[i]);}
printf ("\nLos valores random del vector 2 son: ");
for(i=0; i<5;i++){
        v2[i]=1+rand()%100;
         printf(" %i ", v2[i]);
    v[i]= v1[i]+v2[i]; }

    for(i=0; i<5;i++){ 
        printf("\n \nEl resultado de la suma %i es:  %i",1+i, v[i]); }

    return 0;
			
			break;		}
			
			case 4:{ int s=0,n,i;
			printf("\n \tEjercicio 4.4 Generar una funcion que sume todos los elementos de un arreglo y imprima el resultado\n");
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
    return 0;			break;}
			
			case 5:{ int n,i,j;
			printf("\n \tEjercicio 4.5 Generar una funcion donde el usuario llene una matriz cuadrada e imprima el resultado\n");
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
            for(j=0;j<n;j++){ printf("%6d",m[i][j]);}}        return 0;	break;}
            
            case 6:{  int n,i,j;
            printf("\n \tEjercicio 4.6 Generar una funcion donde se llene una matriz cuadrada con numeros random enteros e imprima el resultado\n");
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
    			}return 0; break;}   
    	
    	case 7:{ int n,i,j;
    	            printf("\n \tEjercicio 4.7 Generar una funcion donde se sume dos matrices bidimensionales e imprima el resultado\n");

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
		}}return 0;			break;}		
       
case 8:{  int n,i,j;

     srand(time(NULL));
     do{
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
     
        printf("\n\n \tMultiplicacion de matrices \n");
		}
		for(i=0;i<n;i++){ 
		   for(j=0;j<n;j++){
		       sm[i][j]=m[i][j]*m1[i][j];
		   	printf("[%dx%d]= %d\t",m[i][j],m1[i][j],sm[i][j] );
	}
	printf("\n");}
		}}while(n>0);
		printf("Error, el tamano de las matrices deben ser mayores a 0");
		return 0;
			
			break;
		}
			default: { printf("Selecciones un numero valido");
			break;	
			}
    }
    return 0;}



