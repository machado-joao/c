#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int a, b;
	for(int contador = 1; contador <= 15; contador++) {
		do {
			printf("Par %i: ", contador);
			scanf("%i %i",&a,&b);
			if(a < 0 || b < 0) {
				printf("Digite valores positivos\n");
			}
			if(a > b) {
				printf("A nao pode ser menor do que B\n");
			}
		} while(a < 0 || b < 0 || a > b);
		for(int passo = a; passo <= b; passo++) {
			printf("%i ", passo);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}
