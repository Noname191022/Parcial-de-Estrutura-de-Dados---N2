#include<stdio.h>
int main(void) {
    int numero = 10;
    int *pont;
    pont = &numero;

    printf("valor da variavel: %d\n", numero);
    printf("Endereço da variavel: %p\n",&numero);
    printf("Valor do ponteiro: %p\n", pont);
    printf("Valor apontado pelo ponteiro: %d\n", *pont);

}