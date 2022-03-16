#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float distancia, velocidade, tempo;
	int tempo_medio;
	printf("Digite a distancia: ");
	scanf("%f",&distancia);
	printf("Digite a velocidade: ");
	scanf("%f",&velocidade);
	tempo = distancia / velocidade;
	tempo_medio = tempo * 60;
	printf("Tempo: %ih %im\n", tempo_medio / 60, tempo_medio % 60);

	system("pause");
	return 0;
}
