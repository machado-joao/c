#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float numero_apartamentos, valor_completo, a, b, c, d;
	printf("Digite o numero de apartamentos do hotel: ");
	scanf("%f",&numero_apartamentos);
	printf("Digite o valor da diaria (sem descontos): ");
	scanf("%f",&valor_completo);
	a = valor_completo - (valor_completo * 0.25);
	b = numero_apartamentos * a;
	c = numero_apartamentos * 0.70 * a;
	d = (valor_completo - a) * numero_apartamentos;
	printf("Valor promocional da diaria: R$ %.2f\n", a);
	printf("Valor total arrecadado se a ocupacao for 100%%: R$ %.2f\n", b);
	printf("Valor total arrecadado se a ocupacao for 70%%: R$ %.2f\n", c);
	printf("Valor que o hotel deixara de arrecadar devido a promocao: R$ %.2f\n", d);

	system("pause");
	return 0;
}
