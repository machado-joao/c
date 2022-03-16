#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	for(int contador = 1; contador <= 20; contador++) {
		printf("%i ao quadrado vale %.0f\n", contador, pow(contador, 2));
	}

	system("pause");
	return 0;
}
