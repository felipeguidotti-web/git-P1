#include <stdio.h>

int main() {
    int vetor[10] = {5, 12, 8, 20, 3, 7, 15, 9, 2, 11};
    int maior = vetor[0];

    for(int i = 1; i < 10; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("O maior valor é: %d\n", maior);
    return 0;
}
