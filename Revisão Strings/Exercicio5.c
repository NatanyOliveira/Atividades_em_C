#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    int cont = 0;

    for(int i = 0; i < len; i++){
        char c = str[i];
         // checa se NÃO é vogal (minúscula ou maiúscula)
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            str[cont] = c;  // escreve o caractere na posição j
            cont++;        // avança o índice de escrita
        }
    }
    
    str[cont] = '\0';

    printf("%s\n", str);

    return 0;
}