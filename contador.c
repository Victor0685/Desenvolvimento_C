#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
 
	char sexo[2], resposta[4];
	int idade, cont_sim = 0, cont_nao = 0, sair = 1, contHomem, contMulher;

	while (sair) {
		printf("Para sair digite 0: ");
		scanf("%d", &sair);
		if (sair == 0)  break;
	
		printf("Por favor informe o seu sexo utilizando M ou F: \n");
		getchar(); // Limpa o buffer do teclado
		scanf("%c", sexo);
		
		printf("Por favor informe sua idade: \n");
		scanf("%d", &idade);
		
		printf("Você gostou do nosso produto sim ou não: \n");
		scanf("%s", resposta);

		if (strcmp(sexo, "M") == 0){
		   // Sexo masculino
		   cont_sim++; // Incrementa o contador de respostas "sim" para homens
		   contHomem = cont_sim;
		} 
		if (strcmp(sexo, "F") == 0){
			// Sexo feminino
			cont_nao++; // Incrementa o contador de respostas "não" para mulheres
			contMulher = cont_nao;
		}	  
		
		if (strcmp(resposta, "sim") == 0){
			cont_sim++; // Incrementa o contador de respostas "sim"
		}
		if (strcmp(resposta, "não") == 0){
			cont_nao++; // Incrementa o contador de respostas "não"
		}
	}
	
		printf("Total de homens que disseram sim: %2.2d \n ",contHomem);
	return 0;
}
