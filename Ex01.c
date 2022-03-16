#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float b, h, area;
	printf("Digite o valor da base: ");
	scanf("%f",&b);
	printf("Digite o valor da altura: ");
	scanf("%f",&h);
	area = (b * h) / 2;
	printf("O valor da area vale %.2f\n", area);

	system("pause");
	return 0;
}
