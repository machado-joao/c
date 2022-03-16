#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int numero, contador = 1, fatorial = 1;
	printf("Digite um numero: ");
	scanf("%i",&numero);
	while(contador <= numero) {
		fatorial *= contador;
		contador++; 
	}
	printf("%i! = %i\n", numero, fatorial);

	system("pause");
	return 0;
}
