#include <stdio.h>
int main(){
    
    int matriz[3][3]={
        {1,0,0},
        {0,1,0}, 
        {0,0,1}
 };
    int i, j;
    

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            
            printf("%d\t", matriz[i][j]);
    }
    printf("\n"); // Quebra de linha ao final de cada linha da matriz
 };
 

 return 0;
}
