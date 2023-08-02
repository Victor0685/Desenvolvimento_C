#include <stdio.h>

#define MAX_MERCHANDISE 100

int main() {
  // Declaração das variáveis
  int stock[MAX_MERCHANDISE], orders[MAX_MERCHANDISE], client_id, merchandise_code, merchandise_quantity, i, j, order_fulfilled;

  // Leitura do estoque inicial
  printf("Insira o estoque inicial: \n");
  for (i = 0; i < MAX_MERCHANDISE; i++) {
    printf("Insira o codigo e a quantidade da mercadoria %d: ", i);
    scanf("%d %d", &merchandise_code, &stock[i]);
  }

  // Leitura dos pedidos dos clientes
  printf("Insira os pedidos dos clientes (para terminar, digite -1): \n");
  while (1) {
    printf("Insira o numero do cliente, o código da mercadoria e a quantidade desejada: ");
    scanf("%d", &client_id);
    if (client_id == -1) break;
    scanf("%d %d", &merchandise_code, &merchandise_quantity);

    // Verificação se o pedido pode ser atendido
    order_fulfilled = 0;
    for (j = 0; j < MAX_MERCHANDISE; j++) {
      if (merchandise_code == j) {
        if (stock[j] >= merchandise_quantity) {
          stock[j] -= merchandise_quantity;
          order_fulfilled = 1;
        }
        break;
      }
    }

    // Impressão da mensagem em caso de pedido não atendido
    if (!order_fulfilled) {
      printf("Cliente %d: NÃO TEMOS A MERCADORIA EM ESTOQUE SUFICIENTE\n", client_id);
    }
  }

  // Impressão do estoque final
  printf("Estoque final: \n");
  for (i = 0; i < MAX_MERCHANDISE; i++) {
    printf("Mercadoria %d: %d\n", i, stock[i]);
  }

  return 0;
}

