#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float preco, valor, valor_acrescido;
	int codigo_pagamento;
	printf("Digite o valor do produto: R$ ");
	scanf("%f",&preco);
	printf("Digite o codigo de pagamento (1-4): ");
	scanf("%i",&codigo_pagamento);
	switch(codigo_pagamento) {
		case 1:
			valor = preco - (preco * 0.1);
			printf("Valor a ser pago com desconto de 10%%: R$ %.2f\n", valor);
			break;
		case 2:
			valor = preco - (preco * 0.05);
			printf("Valor a ser pago com desconto de 5%%: R$ %.2f\n",valor);
			break;
		case 3: 
			valor = preco / 2;
			printf("2 parcelas a serem pagas (sem acrescimo) no valor de: R$ %.2f\n",valor);
			break;
		case 4:
			valor_acrescido = preco + (preco * 0.1);
			valor = valor_acrescido / 3;
			printf("3 parcelas a serem pagas no valor de: R$ %.2f\n", valor);
			printf("Soma total das parcelas com acrescimo de 10%%: R$ %.2f\n", valor_acrescido);
			break;
		default:
			printf("Codigo de pagamento invalido!\n");
	}

	system("pause");
	return 0;
}
