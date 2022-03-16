#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int contador = 1, numero;
	printf("Digite um numero: ");
	scanf("%i",&numero);
	printf("Tabuada do numero %i:\n", numero);
	while(contador <= 10) {
		printf("%i x %i = %i\n", numero, contador, numero * contador);
		contador++;
	}

	system("pause");
	return 0;
}
