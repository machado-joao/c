#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float salario, energia, a, b, c;
	printf("Digite o valor do salario minimo: ");
	scanf("%f",&salario);
	printf("Digite o a quantidade de quilowatts consumido: ");
	scanf("%f",&energia);
	a = salario * 0.005;
	b = energia * a;
	c = b - (b * 0.15);
	printf("O valor, em reais, de cada quilowatt: %.2f\n", a);
	printf("O valor, em reais, a ser pago por essa residencia: %.2f\n", b);
	printf("O valor, em reais, a ser pago com desconto de 15%%: %.2f\n", c);

	system("pause");
	return 0;
}
