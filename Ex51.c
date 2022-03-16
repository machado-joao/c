#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int termos = 15, anterior = 0, proximo = 1, fibonacci;
	while(termos >= 1) {
		printf("%i ", anterior);
		fibonacci = anterior + proximo;
		anterior = proximo;
		proximo = fibonacci;
		termos--;
	}
	printf("\n");

	system("pause");
	return 0;
}
