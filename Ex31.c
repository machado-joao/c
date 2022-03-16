#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char fruta;
	float quantidade, valor;
	printf("Tipo de fruta: ");
	scanf(" %c",&fruta);
	fruta = toupper(fruta);
	do {
		printf("Quantidade de fruta: ");
		scanf("%f",&quantidade);
		if(quantidade < 0) {
			printf("Digite um valor positivo\n");
		}
	} while(quantidade < 0);
	switch(fruta) {
		case 'A':	
			if(quantidade <= 2) {
				valor = quantidade * 1.9;
			} else if(quantidade > 2 && quantidade <= 5) {
				valor = quantidade * 1.8;
			} else {
				valor = quantidade * 1.6;
				if(quantidade > 8) {
					valor = valor - (valor * 0.1);
				}
			}
			break;
		case 'G':
			if(quantidade <= 2) {
				valor = quantidade * 2.5;
			} else if(quantidade > 2 && quantidade <= 5) {
				valor = quantidade * 2.4;
			} else {
				valor = quantidade * 2.2;
				if(quantidade > 8) {
					valor = valor - (valor * 0.1);
				}
			}
			break;
		default:
			printf("Tipo de fruta inexistente!\n");
	}
	if(fruta == 'A' || fruta == 'G') {
		printf("Valor a ser pago pelas frutas: R$ %.2f\n", valor);
	}

	system("pause");
	return 0;
}
