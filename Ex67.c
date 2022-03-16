#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero;
	float h = 0;
	printf("Digite o numero N: ");
	scanf("%i",&numero);
	for(int contador = 1; contador <= numero; contador++) {
		h += 1.0 / contador;
	}
	printf("O valor de H vale %.2f\n", h);

	system("pause");
	return 0;
}
