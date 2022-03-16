#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int contador = 1000;
	while(contador <= 1999) {
		if(contador % 11 == 5) {
			printf("%i\n", contador);
		}
		contador++;
	}

	system("pause");
	return 0;
}
