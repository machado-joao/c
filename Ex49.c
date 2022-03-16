#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero = 1, contador, fatorial;
	while(numero <= 10) {
		contador = 1;
		fatorial = 1;
		while(contador <= numero) {
			fatorial *= contador;
			contador++; 
		}
		printf("%i! = %i\n", numero, fatorial);
		numero += 2;
	}

	system("pause");
	return 0;
}
