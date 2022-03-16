#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	for(int contador = 0; contador <= 50; contador++) {
		printf("%i ", contador);
	}
	printf("\n");

	system("pause");
	return 0;
}
