#include <stdio.h>
void dobrar(int *numero) {
    *numero = (*numero) *2;
}
int main(void) {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    dobrar(&valor);
    printf("Dobro do valor: %d\n", valor);
}