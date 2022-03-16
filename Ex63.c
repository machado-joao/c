#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float soma = 0;
	for(int contador = 1; contador <= 20; contador++) {
		printf("%i ", contador);
		soma += contador / 2.0;
	}
	printf("\nA soma das metades dos numeros vale %.0f\n", soma);

	system("pause");
	return 0;
}
