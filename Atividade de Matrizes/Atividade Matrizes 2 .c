#include <stdio.h>
int main(){
    
    int matriz[4][4];
    int i;
    int j;
    int soma = 0;


    for(i = 0; i < 4; i++) {
        // Laço interno percorre as colunas
        for(j = 0; j < 4; j++) {
        printf("Digite o valor para a posição [%d][%d]: ", i +1, j +1);
        scanf("%d", &matriz[i][j]);
        }
    }
        for(i = 0; i < 4; i++) {;
            for(j = 0; j < 4; j++) {
            soma = soma + matriz[i][j];
            }
        
         // Quebra de linha ao final de cada linha da matriz
    }
    printf("%d\n", soma);

    return 0;
 }

 