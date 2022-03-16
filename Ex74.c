#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero, total_um = 0, total_dois = 0;
	srand(time(NULL));
	for(int contador = 1; contador <= 50; contador++) {
		numero = rand() % 2 + 1;
		printf("%i ", numero);
		if(numero == 1) {
			total_um++;
		} else {
			total_dois++;
		}
	}
	printf("\nO percentual de numeros uns gerados foi de %.2f%%\n", (float) total_um / 50 * 100);
	printf("O percentual de numeros dois gerados foi de %.2f%%\n", (float) total_dois / 50 * 100);

	system("pause");
	return 0;
}
