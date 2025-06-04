#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    char *p = str;

    scanf("%s", str);
    while(*p != '\0'){
          printf("%c", *p);
          p++;
    }
    
    return 0;
}
