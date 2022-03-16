#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int contador = 1, controladora, quantidade_divisores;
	while(contador <= 1000) {
		controladora = 1;
		quantidade_divisores = 0;
		while(controladora <= contador) {
			if(contador % controladora == 0) {
				quantidade_divisores++;
			}
			controladora++;
		}
		if(quantidade_divisores == 2) {
			printf("%i ", contador);
		}
		contador++;
	}
	printf("\n");

	system("pause");
	return 0;
}
