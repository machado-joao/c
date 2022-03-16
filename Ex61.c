#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int soma = 0;
	for(int contador = 1; contador <= 20; contador++) {
		printf("%i ", contador);
		soma += contador;
	}
	printf("\nA soma dos numeros vale %i\n", soma);

	system("pause");
	return 0;
}
