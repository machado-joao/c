#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero_vendedor;
	float total_vendas, salario_fixo, salario_total;
	printf("Digite o numero do vendedor: ");
	scanf("%i",&numero_vendedor);
	printf("Digite o total de vendas do mes: R$ ");
	scanf("%f",&total_vendas);
	printf("Digite o salario fixo mensal: R$ ");
	scanf("%f",&salario_fixo);
	salario_total = salario_fixo + (total_vendas * 0.05);
	printf("O vendedor %i ira receber R$ %.2f este mes\n", numero_vendedor, salario_total);

	system("pause");
	return 0;
}
