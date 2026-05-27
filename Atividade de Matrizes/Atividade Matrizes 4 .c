#include <stdio.h>
int main() {


 int matriz_A [2][2];
 int matriz_B [2][2];
 int matriz_C [2][2];
 int i, j;
 
 printf("Preenchendo a matriz 1 2x2:\n");

 
 for(i = 0; i < 2; i++) {
 
 for(j = 0; j < 2; j++) {
 printf("Digite o valor para a posição [%d][%d]: ", i, j);
 scanf("%d", &matriz_A[i][j]);
 }
}

printf("Preenchendo a matriz 2 2x2:\n");

 
 for(i = 0; i < 2; i++) {
 
 for(j = 0; j < 2; j++) {
 printf("Digite o valor para a posição [%d][%d]: ", i, j);
 scanf("%d", &matriz_B[i][j]);
 }
}

for(i = 0; i < 2; i++) {

    for(j = 0; j < 2; j++) {
    matriz_C[i][j]=matriz_A[i][j]+matriz_B[i][j];
    }
   }
   printf("\nMatriz C:\n");
   for(i = 0; i < 2; i++) {
   for(j = 0; j < 2; j++) {
   printf("%d\t", matriz_C[i][j]);
   }
   printf("\n");
   }



return 0;
}
