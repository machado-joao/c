#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char comodo[20], resposta;
	float largura, comprimento, area, area_total = 0;
	do {
		printf("Digite o comodo: ");
		scanf(" %s", comodo);
		printf("Digite a largura: ");
		scanf("%f",&largura);
		printf("Digite o comprimento: ");
		scanf("%f",&comprimento);
		area = largura * comprimento;
		printf("Area dx %s: %.2f mts\n", comodo, area);
		area_total += area;
		printf("Deseja continuar [S/N]: ");
		scanf(" %c",&resposta);
		resposta = tolower(resposta);
	} while(resposta == 's');
	printf("Area total da residencia: %.2f mts\n", area_total);

	system("pause");
	return 0;
}
