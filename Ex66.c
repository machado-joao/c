#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero, maiores = 0;
	for(int contador = 1; contador <= 10; contador++) {
		printf("%io. valor: ", contador);
		scanf("%i",&numero);
		if(numero > 30) {
			maiores++;
		}
	}
	printf("A quantidade de numeros maiores que 30 digitados foi: %i\n", maiores);

	system("pause");
	return 0;
}
