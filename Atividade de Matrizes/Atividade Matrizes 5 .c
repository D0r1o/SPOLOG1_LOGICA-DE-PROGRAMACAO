#include <stdio.h>

int main() {
    int vendas[4][3];  
    int i, j;
    int total_produto;
    int total_mes[3] = {0, 0, 0}; 
    int mes_maior_total;
    int maior_total_mes = 0;

    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite a quantidade vendida do produto %d no mês %d: ", i + 1, j + 1);
            scanf("%d", &vendas[i][j]);
            total_mes[j] += vendas[i][j]; 
        }
    }

    printf("Total vendido de cada produto no trimestre:\n");
    for(i = 0; i < 4; i++) {
        total_produto = 0;
        for(j = 0; j < 3; j++) {
            total_produto += vendas[i][j];
        }
        printf("Produto %d: %d unidades\n", i + 1, total_produto);
    }

    mes_maior_total = 0;
    maior_total_mes = total_mes[0];

    for(j = 1; j < 3; j++) {
        if(total_mes[j] > maior_total_mes) {
            maior_total_mes = total_mes[j];
            mes_maior_total = j;
        }
    }

    printf("O mês com maior número total de vendas foi o mês %d com %d unidades.\n", mes_maior_total + 1, maior_total_mes);

    return 0;
}