#include <stdio.h>
#include <string.h>
int main(){
int N;
char palavras[51];



scanf("%d", &N);
for(int i = 0; i < N; i++){
    scanf("%s", &palavras[i]);
}

int cont = 0;
for (int i = 0; i < N; i++) {
    if(strlen(palavras[i]) > 5){
           cont++;
    }
}

printf("%d\n", cont);

    return 0;
}
 