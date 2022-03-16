#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int a, b, resultado;
	printf("Valor de A: ");
	scanf("%i",&a);
	printf("Valor de B: ");
	scanf("%i",&b);
	if(a == b) {
		resultado = a + b;
	} else {
		resultado = a * b;
	}
	printf("Resultado: %i\n", resultado);

	system("pause");
	return 0;
}
