#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float peso, reaproveitamento;
	printf("Qual o peso do peca? ");
	scanf("%f",&peso);
	if(peso > 50) {
		printf("85%% do peso da peca sera reaproveitado\n");
		reaproveitamento = peso * 0.85;
		printf("%.1f Kg da peca sera reaproveitado\n", reaproveitamento);
	} else if(peso > 20 && peso <= 50) {
		printf("60%% do peso da peca sera reaproveitado\n");
		reaproveitamento = peso * 0.6;
		printf("%.1f Kg da peca sera reaproveitado\n", reaproveitamento);
	} else if(peso > 10 && peso <= 20) {
		printf("30%% do peso da peca sera reaproveitado\n");
		reaproveitamento = peso * 0.3;
		printf("%.1f Kg da peca sera reaproveitado\n", reaproveitamento);
	} else {
		printf("A peca nao sera reaproveitada\n");
	}
	
	system("pause");
	return 0;
}
