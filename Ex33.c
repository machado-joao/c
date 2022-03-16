#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	const float PI = 3.14159;
	int operador;
	float raio, area, perimetro;
	printf("Digite o operador: ");
	scanf("%i",&operador);
	printf("Digite o raio da circunferencia: ");
	scanf("%f",&raio);
	switch(operador) {
		case 1:
			area = pow(raio, 2) * PI;
			printf("A area da circunferencia vale %.2f\n", area);
			break;
		case 2:
			perimetro = 2 * PI * raio;
			printf("O perimetro da circunferencia vale %.2f\n", perimetro);
			break;
		default:
			printf("Operador invalido!\n");
	}

	system("pause");
	return 0;
}
