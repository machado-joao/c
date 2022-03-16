#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float valor, novo_valor;
	printf("Digite o valor do produto: R$ ");
	scanf("%f",&valor);
	novo_valor = valor - (valor * 0.09);
	printf("Com desconto de 9%% o produto sai por R$ %.2f\n", novo_valor);
	
	system("pause");
	return 0;
}
