#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int contador = 1, valor, maior, menor, soma = 0;
	while(contador <= 10) {
		printf("Digite o %io. um valor: ", contador);
		scanf("%i",&valor);
		if(contador == 1) {
			maior = valor;
			menor = valor;
		}
		if(valor > maior) {
			maior = valor;
		} 
		if(valor < menor) {
			menor = valor;
		}
		soma += valor;
		contador++;	
	}
	printf("Maior valor digitado: %i\n", maior);
	printf("Menor valor digitado: %i\n", menor);
	printf("Media entre os valores digitados: %.2f\n", (float) soma / 10);

	system("pause");
	return 0;
}
