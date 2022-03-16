#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	for(int contador = 5; contador <= 500; contador += 5) {
		printf("%i ", contador);
	}
	printf("\n");
	
	system("pause");
	return 0;
}
