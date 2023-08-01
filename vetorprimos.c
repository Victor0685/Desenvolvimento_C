#include <stdio.h>

#define MAX_N 50

int main() {
  int vetor[MAX_N];
  int n, i, soma = 0;

  printf("Digite o tamanho do vetor (ate %d): ", MAX_N);
  scanf("%d", &n);

  if (n > MAX_N) {
    printf("Erro: o tamanho do vetor deve ser no maximo %d\n", MAX_N);
    return 1;
  }

  printf("Digite os %d elementos do vetor:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < n; i += 2) {
    soma += vetor[i];
  }

  printf("A soma dos elementos nas posicoes pares do vetor e: %d\n", soma);

  return 0;
}

