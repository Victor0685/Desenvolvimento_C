#include <stdio.h>

int main() {
    int n, i, num;
    int pares = 0, impares = 0;
    
    printf("Digite o tamanho do vetor (N <= 50): ");
    scanf("%d", &n);
    
    int vetor[n];
    
    for(i = 0; i < n; i++) {
        printf("Digite o %d o numero: ", i+1);
        scanf("%d", &num);
        vetor[i] = num;
        
        if(num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    
    printf("O vetor contem %d numeros pares e %d numeros impares.\n", pares, impares);
    
    return 0;
};

