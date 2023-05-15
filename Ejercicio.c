//Roberto Ulloa
#include <stdio.h>

int main() {
    int matriz1[3][2];
    int matriz2[3][2];
    int resultado[3][2];
    int i, j;

    // Ingresamos los numeros de la matriz uno 
    printf("Ingrese los elementos de la matriz 1:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Ingrese el elemento (%d, %d): ", i+1, j+1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    //Ingresamos la matriz 2
    printf("Ingrese los elementos de la matriz 2:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Ingrese el elemento (%d, %d): ", i+1, j+1);
            scanf("%d", &matriz2[i][j]);
        }
    }
    //Aqui sumamos las matrices
    
     printf("La suma de la matriz es: \n");
     for (i = 0; i < 3; i++) 
     {
        for (j = 0; j < 2; j++) {
            resultado[i][j]=matriz1[i][j] + matriz2[i][j];
        }
     }
     for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf(" %d ",resultado[i][j] );
            
           
        }
        printf("\n ");
    }
     

    return 0;
}
