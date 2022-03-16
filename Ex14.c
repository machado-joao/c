#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float altura, comprimento, tijolos;
	printf("Digite a altura da parede: ");
	scanf("%f",&altura);
	printf("Digite o comprimento da parede: ");
	scanf("%f",&comprimento);
	tijolos = (altura * comprimento) / (0.325 * 0.225);
	printf("A parede precisara de %.2f tijolos\n", tijolos);

	system("pause");
	return 0;
}
