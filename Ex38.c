#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float horas_trabalhadas, valor_hora, salario_bruto, inss, irpf;
	printf("Digite o total de horas trabalhadas: ");
	scanf("%f",&horas_trabalhadas);
	printf("Digite o valor da hora trabalhada: ");
	scanf("%f",&valor_hora);
	salario_bruto = horas_trabalhadas * valor_hora;
	if(salario_bruto <= 868.29) {
		inss = salario_bruto * 0.0765;
	} else if(salario_bruto <= 1447.14) {
		inss =  salario_bruto * 0.08;
	} else if(salario_bruto <= 2894.28) {
		inss = salario_bruto * 0.09;
	} else {
		inss = salario_bruto * 0.11;
	}
	
	if(salario_bruto - inss <= 1499.15) {
		irpf = 0;
	} else if(salario_bruto - inss <= 3743.19) {
		irpf = (salario_bruto - inss) * 0.15 - 224.87;
	} else {
		irpf = (salario_bruto - inss) * 0.275 - 561.02;
	}
	printf("Salario bruto R$ %.2f\n", salario_bruto);
	printf("INSS R$ %.2f\n", inss);
	printf("IRPF R$ %.2f\n", irpf);
	printf("Salario liquido R$ %.2f\n", salario_bruto - (inss + irpf));

	system("pause");
	return 0;
}
