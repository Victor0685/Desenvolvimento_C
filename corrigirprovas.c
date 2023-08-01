#include <stdio.h>

#define NUM_QUESTOES 10
#define NUM_ALUNOS 15
#define NOTA_MINIMA 6.0

int main() {
  char gabarito[NUM_QUESTOES];
  float notas[NUM_ALUNOS];
  int i, j, num_aluno;
  char resposta_aluno;

  // Lê o gabarito da prova
  printf("Digite as respostas corretas do gabarito (10 caracteres):\n");
  for (i = 0; i < NUM_QUESTOES; i++) {
    scanf(" %c", &gabarito[i]);
  }

  // Corrige as provas dos alunos
  printf("\nDigite as respostas dos alunos:\n");
  for (i = 0; i < NUM_ALUNOS; i++) {
    printf("\nAluno %d:\n", i + 1);
    scanf("%d", &num_aluno);

    float nota = 0;
    for (j = 0; j < NUM_QUESTOES; j++) {
      scanf(" %c", &resposta_aluno);

      if (resposta_aluno == gabarito[j]) {
        nota++;
      }
    }

    printf("Nota: %.1f\n", nota);
    notas[i] = nota;
  }

  // Calcula a porcentagem de alunos aprovados
  int aprovados = 0;
  for (i = 0; i < NUM_ALUNOS; i++) {
    if (notas[i] >= NOTA_MINIMA) {
      aprovados++;
    }
  }
  float porcentagem_aprovados = (float)aprovados / NUM_ALUNOS * 100;

  printf("\nPorcentagem de alunos aprovados: %.1f%%\n", porcentagem_aprovados);

  return 0;
}

