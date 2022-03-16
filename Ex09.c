#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float peso, altura, imc;
	printf("Digite seu peso (Kg): ");
	scanf("%f",&peso);
	printf("Digite sua altura (m): ");
	scanf("%f",&altura);
	imc = peso / pow(altura, 2);
	printf("O IMC vale %.2f\n", imc);

	system("pause");
	return 0;
}
