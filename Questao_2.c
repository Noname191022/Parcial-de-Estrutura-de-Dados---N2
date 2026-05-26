#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    *maior = array[0];
    *menor = array[0];
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i];
        }
        if (array[i] < *menor) {
            *menor = array[i];
        }
    }
}
int main(void) {
    int v[5] = {3 , 8, 1, 10, 5};
    int maior, menor;

    encontrarMaiorMenor(v, 5, &maior, &menor);
    printf(" Maior: %d\n Menor:%d\n", maior, menor);
}