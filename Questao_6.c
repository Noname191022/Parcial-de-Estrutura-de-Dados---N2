#include <stdio.h>
#include <ctype.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes) {
    *vogais =0;
    *consoantes = 0;

    while (*str != '\0') {
        char c = tolower(*str);
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                (*vogais)++;
            } else {
                (*consoantes)++;
            }
        }
        str++;
    }
}
int main(void) {
    char texto[100];
    int vogais, consoantes;
    printf("Digite uma string: ");
    fgets(texto, 100, stdin);
    contarVogaisConsoantes(texto, &vogais, &consoantes);

    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);

}