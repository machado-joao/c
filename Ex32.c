#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char tipo;
	float valor, imposto;
	printf("Digite o tipo de produto: ");
	scanf(" %c",&tipo);
	tipo = toupper(tipo);
	do {
		printf("Digite o valor do produto: ");
		scanf("%f",&valor);
		if(valor < 0) {
			printf("Digite um valor positivo\n");
		}
	} while(valor < 0);
	switch(tipo) {
		case 'L':
			if(valor < 100) {
				imposto = valor * 0.05;
			} else if(valor >= 100 && valor <= 500) {
				imposto = valor * 0.04;
			} else {
				imposto = valor * 0.02;
			}
			break;
		case 'A':
			if(valor < 100) {
				imposto = valor * 0.03;
			} else if(valor >= 100 && valor <= 500) {
				imposto = valor * 0.02;
			} else {
				imposto = valor * 0.01;
			}
			break;
		case 'V':
			if(valor < 100) {
				imposto = valor * 0.07;
			} else if(valor >= 100 && valor <= 500) {
				imposto = valor * 0.06;
			} else {
				imposto = valor * 0.04;
			}
			break;
		default:
			printf("Tipo de produto inexistente!\n");
	}
	if(tipo == 'L' || tipo == 'A' || tipo == 'V') {
		printf("Imposto do produto: R$ %.2f\n", imposto);
	}

	system("pause");
	return 0;
}
