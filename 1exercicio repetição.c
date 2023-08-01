#include<math.h>
#include<stdio.h>
#include<string.h>

int main(){

	int num_consumidor, qnt_consumido, maiorconsumo, menorconsumo, cod_res, cod_ind, cod_com, i = 0; 
	float preco_consumo, totalpagar, media, somaqnt_consumido; 
	char cod_tipo_consumidor[20];

		printf("Informe a quantidade de kw/h consumido no mes: ");
		scanf("%d",&qnt_consumido);
		printf("Informe  o numero do consumidor: ");
		scanf("%s",cod_tipo_consumidor);

	while( num_consumidor != 0){

		totalpagar = qnt_consumido * preco_consumo;

			printf("NUMERO = %d\n",num_consumidor);
			printf("TOTAL A PAGAR = %.2f\n",totalpagar);

			if (qnt_consumido > maiorconsumo){
				menorconsumo = maiorconsumo;
				maiorconsumo = qnt_consumido;

			}

				else{
					maiorconsumo = maiorconsumo;
					menorconsumo = qnt_consumido;

				}

			if (menorconsumo == 0){
				menorconsumo = maiorconsumo;
			}

			if (strcmp(cod_tipo_consumidor,"RESIDENCIAL") == 1){
				cod_res += qnt_consumido;
			}

				else if (strcmp(cod_tipo_consumidor,"COMERCIAL") == 2){
					cod_com += qnt_consumido;
				}

					else if (strcmp(cod_tipo_consumidor,"INDUSTRIAL") == 3){
						cod_ind += qnt_consumido;
					}
		i++;
		somaqnt_consumido += qnt_consumido;		
		media = (float)somaqnt_consumido / i;

		scanf("%d",&num_consumidor);
		scanf("%f",&preco_consumo);
		scanf("%d",&qnt_consumido);
		scanf("%s",cod_tipo_consumidor);

	}
		printf("MAIOR CONSUMO = %d\n",maiorconsumo);
		printf("MENOR CONSUMO = %d\n",menorconsumo);
		printf("CONSUMIDOR RESIDENCIAL = %d\n",cod_res);
		printf("CONSUMIDOR COMERCIAL = %d\n",cod_com);
		printf("CONSUMIDOR INDUSTRIAL = %d\n",cod_ind);
		printf("MEDIA = %.2f\n",media);

		return 0;
}
