#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float dolar, cotacao_dolar, real;
	printf("Quantidade de dolares: U$ ");
	scanf("%f",&dolar);
	printf("Cotacao do dolar hoje: R$ ");
	scanf("%f",&cotacao_dolar);
	real = dolar * cotacao_dolar;
	printf("U$ %.2f equivale a R$ %.2f\n", dolar, real);	

	system("pause");
	return 0;
}
