#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int v1[5], v2[5],i;
int main()
{
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

    return 0; }

