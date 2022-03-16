#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char area;
	int percentual;
	float salario_atual, valor_aumento, salario_corrigido;
	printf("Area do funcionario: ");
	scanf(" %c",&area);
	area = toupper(area);
	do {
		printf("Salario atual: R$ ");
		scanf("%f",&salario_atual);
		if(salario_atual < 0) {
			printf("Digite um valor positivo\n");
		}
	} while(salario_atual < 0);
	switch(area) {
		case 'P':
			if(salario_atual > 0 && salario_atual <= 700) {
				percentual = 15;
				valor_aumento = salario_atual * 0.15;
				salario_corrigido = salario_atual + valor_aumento;
			} else if(salario_atual > 700 && salario_atual <= 1800) {
				percentual = 10;
				valor_aumento = salario_atual * 0.1;
				salario_corrigido = salario_atual + valor_aumento;
			} else if(salario_atual > 1800 && salario_atual <= 2500) {
				percentual = 7;
				valor_aumento = salario_atual * 0.07;
				salario_corrigido = salario_atual + valor_aumento;
			} else {
				percentual = 0;
				valor_aumento = salario_atual * 0;
				salario_corrigido = salario_atual + valor_aumento;
			}
			break;
		case 'A':
			if(salario_atual > 0 && salario_atual <= 700) {
				percentual = 18;
				valor_aumento = salario_atual * 0.18;
				salario_corrigido = salario_atual + valor_aumento;
			} else if(salario_atual > 700 && salario_atual <= 1800) {
				percentual = 12;
				valor_aumento = salario_atual * 0.12;
				salario_corrigido = salario_atual + valor_aumento;
			} else if(salario_atual > 1800 && salario_atual <= 2500) {
				percentual = 8;
				valor_aumento = salario_atual * 0.08;
				salario_corrigido = salario_atual + valor_aumento;
			} else {
				percentual = 5;
				valor_aumento = salario_atual * 0.05;
				salario_corrigido = salario_atual + valor_aumento;
			}
			break;
		default:
			printf("Area invalida!\n");
	}
	if(area == 'P' || area == 'A') {
		printf("Percentual de aumento: %i%%\n", percentual);
		printf("Valor do aumento: R$ %.2f\n", valor_aumento);
		printf("Salario corrigido: R$ %.2f\n", salario_corrigido);
	}
	
	system("pause");
	return 0;
}
