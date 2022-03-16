#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero;
	for(int contador = 1; contador <= 10; contador++) {
		printf("%io. valor: ", contador);
		scanf("%i",&numero);
		printf("%i ao quadrado vale %.0f\n", numero, pow(numero, 2));
	}

	system("pause");
	return 0;
}
