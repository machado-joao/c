#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int termos, numero, contador, fatorial;
	printf("Digite a quantidade de termos a serem lidos: ");
	scanf("%i",&termos);
	while(termos >= 1) {
		printf("Digite um numero: ");
		scanf("%i",&numero);
		contador = 1;
		fatorial = 1;
		while(contador <= numero) {
			fatorial *= contador;
			contador++; 
		}
		printf("%i! = %i\n", numero, fatorial);
		termos--;
	}

	system("pause");
	return 0;
}
