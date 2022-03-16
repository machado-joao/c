#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float velocidade_permitida, velocidade_motorista, velocidade_acima;
	printf("Qual a velocidade maxima permitida? ");
	scanf("%f",&velocidade_permitida);
	printf("Qual foi a velocidade do motorista? ");
	scanf("%f",&velocidade_motorista);
	velocidade_acima = velocidade_motorista - velocidade_permitida;
	if(velocidade_acima >= 1 && velocidade_acima <= 10) {
		printf("O motorista devera pagar R$ 50,00 de multa, pois excedeu a velocidade maxima permitida em %.1f Km/h\n", velocidade_acima);
	} else if(velocidade_acima >=11 && velocidade_acima <= 30) {
		printf("O motorista devera pagar R$ 100,00 de multa, pois excedeu a velocidade maxima permitida em %.1f Km/h\n", velocidade_acima);
	} else if(velocidade_acima >= 31) {
		printf("O motorista devera pagar R$ 200,00 de multa, pois excedeu a velocidade maxima permitida em %.1f Km/h\n", velocidade_acima);
	} else {
		printf("O motorista estava dentro da velocidade permitida\n");
	}

	system("pause");
	return 0;
}
