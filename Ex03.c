#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float saldo, saldo_reajustado;
	printf("Digite o valor do saldo atual: R$ ");
	scanf("%f",&saldo);
	saldo_reajustado = saldo + (saldo * 0.075);
	printf("O saldo reajustado vale R$ %.2f\n", saldo_reajustado);

	system("pause");
	return 0;
}
