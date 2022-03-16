#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero;
	printf("Digite um numero: ");
	scanf("%i",&numero);
	if(numero % 10 == 0) {
		printf("Divisivel por 10, 5 e 2\n");
	} else if(numero % 5 == 0) {
		printf("Divisivel por 5\n");
	} else if(numero % 2==0) {
		printf("Divisivel por 2\n");
	} else {
		printf("Nao divisivel por 10, 5 ou 2\n");
	}

	system("pause");
	return 0;
}
