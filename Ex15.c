#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float dinheiro, anos, anos_total, cigarros, carteira;
	printf("Digite o numero de anos que voce fuma: ");
	scanf("%f",&anos);
	printf("Digite o numero de cigarros fumados por dia: ");
	scanf("%f",&cigarros);
	printf("Digite o preco da carteira de cigarros: R$ ");
	scanf("%f",&carteira);
	anos_total = anos * 365;
	dinheiro = (anos_total * cigarros / 20) * carteira;
	printf("Voce ja gastou R$ %.2f com cigarros\n", dinheiro);

	system("pause");
	return 0;
}
