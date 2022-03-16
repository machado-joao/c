#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int valor = 1, soma = 0, pares = 0;
	do {
		printf("Digite um valor: ");
		scanf("%i",&valor);
		if(valor % 2 == 0 && valor != 0) {
			soma += valor;
			pares++;
		}
	} while(valor != 0);
	printf("A media vale %.2f\n", (float) soma / pares);

	system("pause");
	return 0;
}
