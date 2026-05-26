#include <stdio.h>
void copiarString (char *origem, char *destino) {
    while (*origem != '\0') {
        *destino = *origem;

        origem++;
        destino++;
    }
    *destino = '\0';
}
int main(void) {
    char origem[100], destino[100];
    printf("Digite uma String: ");
    fgets(origem, 100, stdin);

    copiarString(origem, destino);
    printf("Origem: %s\n", destino);
}