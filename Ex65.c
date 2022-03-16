#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero;
	printf("Digite o numero: ");
	scanf("%i",&numero);
	for(int contador = 1; contador <= numero; contador++) {
		if(contador % 3 == 0 && contador % 5 == 0) {
			printf("%i ", contador);
		}
	}
	printf("\n");

	system("pause");
	return 0;
}
