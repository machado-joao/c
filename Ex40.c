#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int contador = 1, valor, divisiveis = 0;
	while(contador <= 5) {
		printf("%io. valor: ", contador);
		scanf("%i",&valor);
		if(valor % 3 == 0) {
			divisiveis++;
		}
		contador++;
	}
	printf("A quantidade de divisiveis por 3 digitados foi: %i\n", divisiveis);

	system("pause");
	return 0;
}
