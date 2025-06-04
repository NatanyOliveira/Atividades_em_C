#include <stdio.h>
#include <strings.h>

int main(){
char palavra[100];
int eh_palindromo = 1;
scanf("%s", palavra);

char*inicio = palavra;
char *fim = palavra + strlen(palavra) - 1;

while(inicio < fim){
    if(*inicio != *fim){
        eh_palindromo = 0;
        break;
    }
    inicio++;
    fim--;
}

if(eh_palindromo){
    printf("A palavra eh palindromo\n");
} else {
    orintf("A palavra não eh palindromo\n");
}


    return 0;
}