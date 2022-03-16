#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero, maior, menor;
	for(int contador = 1; contador <= 10; contador++) {
		printf("%io. valor: ", contador);
		scanf("%i",&numero);
		if(contador == 1) {
			maior = numero;
			menor = numero;
		}
		if(numero > maior) {
			maior = numero;
		}
		if(numero < menor) {
			menor = numero;
		}
	}
	printf("O maior numero digitado foi: %i\n", maior);
	printf("O menor numero digitado foi: %i\n", menor);

	system("pause");
	return 0;
}
