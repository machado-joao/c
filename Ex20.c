#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float salario_bruto, valor_prestacao, valor_maximo;
	printf("Valor do salario bruto: ");
	scanf("%f",&salario_bruto);
	printf("Valor da prestacao: ");
	scanf("%f",&valor_prestacao);
	valor_maximo = salario_bruto * 0.3;
	if(valor_prestacao <= valor_maximo) {
		printf("Pode ser concedido\n");
	} else { 
		printf("Nao pode ser concedido\n");
	}

	system("pause");
	return 0;
}
