#include <stdio.h>
#include <string.h>

void inverterString(char *str) {
    char *inicio = str;
    char *fim = str + strlen(str) - 1;
    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}
int main(void) {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, 100, stdin);

    texto[strcspn(texto, "\n")] = '\0';
    inverterString(texto);
    printf("String invertida: %s\n", texto);
}