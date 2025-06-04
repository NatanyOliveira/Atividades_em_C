#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);
    int matriz[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d",  &matriz[i][j]);
        }
    }
    
    int soma = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if( i == j){
                soma+=matriz[i][j];
            }
        }
    }
    
    return 0;

}