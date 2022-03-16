#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float raio, area;
	printf("Digite o valor do raio: ");
	scanf("%f",&raio);
	area = pow(raio, 2) * 3.14159;
	printf("O valor da area vale %.2f\n", area);

	system("pause");
	return 0;
}
