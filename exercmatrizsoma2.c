#include <stdio.h>

#define M 2
#define N 2

int main() {
   float A[M][N], B[M][N], C[M][N];
   int i, j;

   printf("Digite os valores da matriz A:\n");
	
   for (i = 0; i < M; i++) {
      for (j = 0; j < N; j++) {
         scanf("%f", &A[i][j]);
      }
   }


   printf("Digite os valores da matriz B:\n");
   
   	for (i = 0; i < M; i++) {
      for (j = 0; j < N; j++) {
         scanf("%f", &B[i][j]);
      }
   };

	
   // Soma das matrizes A e B, armazenando o resultado na matriz C
   for (i = 0; i < M; i++) {
      for (j = 0; j < N; j++) {
         C[i][j] = A[i][j] + B[i][j];
      }
   };

   // Impressão da matriz C
   printf("A matriz resultante C = A + B eh:\n");

   for (i = 0; i < M; i++) {
      for (j = 0; j < N; j++) {
         printf("%.2f ", C[i][j]);
      }
      printf("\n");
   }

   return 0;
}
