#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero, soma = 0, positivos = 0, negativos = 0;
	for(int contador = 1; contador <= 20; contador++) {
		printf("%io. valor: ", contador);
		scanf("%i",&numero);
		soma += numero;
		if(numero > 0) {
			positivos++;
		} else {
			negativos++;
		}
	}
	printf("A media dos valores lidos vale %.2f\n", (float) soma / 20);
	printf("A quantidade de valores positivos digitados foi: %i\n", positivos);
	printf("A quantidade de valores negativos digitados foi: %i\n", negativos);
	printf("O percental de valores positivos foi: %.2f%%\n", (float) positivos / 20 * 100);
	printf("O percentual de valores negativos foi: %.2f%%\n", (float) negativos / 20 * 100);
	
	system("pause");
	return 0;
}
