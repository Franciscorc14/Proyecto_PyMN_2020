#include <stdio.h>
#include<math.h>
float A[3][3] = {{10,2,-1},{-3,-6,2},{1,1,5}}; 
float b[3] = {27,-61.5,-21.5}; 
float e1,e2,e3,x1,x2,x3; 
float x_iteracion_1,x_iteracion_2,x_iteracion_3; 
int i,j;
int main()
{
 // Jacobi
for(j=0;j<5;j++){
    if(j==0){ 
        x_iteracion_1 = b[0]/A[0][0];
        x_iteracion_2 = b[1]/A[1][1];
        x_iteracion_3 = b[2]/A[2][2];
        printf("\tMetodo de Jacobi\n\n" );
        printf("El valor de x en la iteracion 1 es igual a %.4f\n",x_iteracion_1);
        printf("El valor de x en la iteracion 1 es igual a %.4f\n",x_iteracion_2);
        printf("El valor de x en la iteracion 1 es igual a %.4f\n",x_iteracion_3);
                printf("\nI       \tValor de X          E\n");
    }
    else {
        x1 = x_iteracion_1;
        x_iteracion_1 = ((-A[0][1]*x_iteracion_2)-(A[0][2]*x_iteracion_3)+b[0])/A[0][0];
        e1=fabs((x_iteracion_1-x1)/(x_iteracion_1))*100;
        x2 = x_iteracion_2;
        x_iteracion_2 = ((-A[1][0]*x1)-(A[1][2]*x_iteracion_3)+b[1])/A[1][1];
        e2=fabs((x_iteracion_2-x2)/(x_iteracion_2))*100;
        x3 = x_iteracion_3;
        x_iteracion_3 = ((-A[2][0]*x1)-(A[2][1]*x2)+b[2])/A[2][2];
        e3=fabs((x_iteracion_3-x3)/(x_iteracion_3))*100;
        printf("\n%d            \t%.4f           %.2f%%\n",j+1,x_iteracion_1,e1);
        printf("\n%d            \t%.4f           %.2f%%\n",j+1,x_iteracion_2,e2);
        printf("\n%d            \t%.4f           %.2f%%\n",j+1,x_iteracion_3,e3);
        }
    }
}
