#include <stdio.h>

int main() {
    int i, j, M, N;
    float matriz[20][50], somaTotal = 0, somaLinha;

    printf("Insira o número de linhas e colunas da matriz: ");
    scanf("%d %d", &M, &N);
    
    
	if (M<= 20 && N<= 50){
	
    printf("Insira os valores da matriz:\n");
    for(i = 0; i < M; i++) {
        somaLinha = 0;
        for(j = 0; j < N; j++) {
            scanf("%f", &matriz[i][j]);
            somaLinha += matriz[i][j];
            somaTotal += matriz[i][j];
        }
        printf("Soma dos elementos da linha %d: %.2f\n", i+1, somaLinha);
    }

    printf("Soma total dos elementos da matriz: %.2f", somaTotal);
}
	
	else {
		printf("Voce inseriu um valor acima do limite!");
	}
    return 0;
}
