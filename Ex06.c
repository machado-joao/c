#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int ano_nascimento, ano_atual, idade_atual, idade_futura;
	printf("Digite o ano em que voce nasceu: ");
	scanf("%i",&ano_nascimento);
	printf("Digite o ano atual: ");
	scanf("%i",&ano_atual);
	idade_atual = ano_atual - ano_nascimento;
	idade_futura = 2028 - ano_nascimento;
	printf("Hoje voce possui %i anos\n", idade_atual);
	printf("Em 2028 voce possuira %i anos\n", idade_futura);

	system("pause");
	return 0;
}
