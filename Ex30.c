#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char tipo;
	float litros, valor;
	do {
		printf("Quantidade de litros vendidos: ");
		scanf("%f",&litros);
		if(litros < 0) {
			printf("Digite um valor positivo\n");
		}
	} while(litros < 0);
	printf("Tipo de combustivel: ");
	scanf(" %c",&tipo);
	tipo = toupper(tipo);
	switch(tipo) {
		case 'A':
			if(litros <= 15) {
				valor = litros * 2;
			} else if(litros > 15 && litros <= 30) {
				valor = litros * 1.95;
			} else {
				valor = litros * 1.8;
			}
			break;
		case 'G':
			if(litros <= 15) {
				valor = litros * 2.9;
			} else if(litros > 15 && litros <= 30) {
				valor = litros * 2.85;
			} else {
				valor = litros * 2.75;
			}
			break;
		default:
			printf("Tipo de combustivel inexistente!\n");
	}
	if(tipo == 'A' || tipo == 'G') {
		printf("Valor a ser pago pelo combustivel: R$ %.2f\n", valor);
	}

	system("pause");
	return 0;
}
