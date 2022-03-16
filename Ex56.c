#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	for(int contador = 2; contador <= 100; contador += 2) {
		printf("%i ", contador);
	}
	printf("\n");

	system("pause");
	return 0;
}
