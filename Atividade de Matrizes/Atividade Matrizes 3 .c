int main() {
    int matriz[3][3];
    int i, j;
    int maior, linha_maior, coluna_maior;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    maior = matriz[0][0];
    linha_maior = 0;
    coluna_maior = 0;

    
     for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

  
    printf("O maior valor digitado é %d, na posição [%d][%d].\n", maior, linha_maior, coluna_maior);

    return 0;
}