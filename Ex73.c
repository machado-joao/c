#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int termos, anterior, proximo, ricci;
	printf("Digite a quantidade de termos da sequencia: ");
	scanf("%i",&termos);
	printf("Digite o 1o. termo da sequencia: ");
	scanf("%i",&anterior);
	printf("Digite o 2o. termo da sequencia: ");
	scanf("%i",&proximo);
	for(int contador = 1; contador <= termos; contador++) {
		printf("%i ", anterior);
		ricci = anterior + proximo;
		anterior = proximo;
		proximo = ricci;
	}
	printf("\n");

	system("pause");
	return 0;
}
