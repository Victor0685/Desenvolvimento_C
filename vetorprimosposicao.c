#include <stdio.h>
#include <math.h>

int main() {
    int vetor[10];
    int i, j, primo;

    printf("Digite 10 numeros inteiros:\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Numeros primos encontrados:\n");

    for(i = 0; i < 10; i++) {
        primo = 1;
        for(j = 2; j <= sqrt(vetor[i]); j++) {
            if(vetor[i] % j == 0) {
                primo = 0;
                break;
            }
        }
        if(primo && vetor[i] > 1) {
            printf("%d na posicao %d\n", vetor[i], i+1);
        }
    }

    return 0;
}
