#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int contador = 1, controladora, soma_divisores;
	while(contador <= 800) {
		controladora = 1;
		soma_divisores = 0;
		while(controladora < contador) {
			if(contador % controladora == 0) {
				soma_divisores += controladora;
			}
			controladora++;
		}
		if(soma_divisores == contador) {
			printf("%i ", contador);
		}
		contador++;
	}
	printf("\n");

	system("pause");
	return 0;
}
