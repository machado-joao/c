#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int contador = 1, valor, negativos = 0;
	while(contador <= 5) {
		printf("%io. valor: ", contador);
		scanf("%i",&valor);
		if(valor < 0) {
			negativos++;
		}
		contador++;
	}
	printf("A quantidade de negativos digitados foi: %i\n", negativos);

	system("pause");
	return 0;
}
