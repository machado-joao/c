#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float valor, prestacao;
	printf("Digite o valor da compra: R$ ");
	scanf("%f",&valor);
	prestacao = valor / 5;
	printf("O valor das prestacoes vale R$ %.2f\n", prestacao);

	system("pause");
	return 0;
}
