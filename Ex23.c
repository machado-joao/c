#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float quantidade, excedente, multa;
	printf("Digite a quantidade de peixes: ");
	scanf("%f",&quantidade);
	excedente = quantidade - 50;
	if(excedente == 0 || quantidade <= 50) {
		printf("Peso dentro do regulamento\n");
	} else {
		multa = excedente * 4;
		printf("Voce precisara pagar R$ %.2f de multa por exceder em %.1f quilos a quantidade maxima permitida\n", multa, excedente);
	}

	system("pause");
	return 0;
}
