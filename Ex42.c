#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int valor, soma = 0;
	do {
		printf("Digite um valor: ");
		scanf("%i",&valor);
		if(valor < 0) {
			soma += valor;
		}
	} while(valor != 0);
	printf("A soma dos negativos digitados vale %i\n", soma);

	system("pause");
	return 0;
}
