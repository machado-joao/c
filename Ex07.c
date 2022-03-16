#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float lado, perimetro, area, diagonal;
	printf("Digite o lado do quadrado: ");
	scanf("%f",&lado);
	perimetro = lado * 4;
	area = pow(lado, 2);
	diagonal = lado * pow(2, 1.0/2);
	printf("Valor do perimetro: %.2f\n", perimetro);
	printf("Valor da area: %.2f\n", area);
	printf("Valor da diagonal: %.2f\n", diagonal);

	system("pause");
	return 0;
}
