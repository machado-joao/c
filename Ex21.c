#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char sexo;
	float altura, peso, peso_ideal, diferenca;
	do {
		printf("Digite o sexo (M ou F): ");
		scanf(" %c",&sexo);
		sexo = toupper(sexo);
		if(sexo != 'F' && sexo != 'M') {
			printf("Digite o sexo feminino (F) ou masculino (M)\n");
		}
	} while(sexo != 'F' && sexo != 'M');
	printf("Digite a altura: ");
	scanf("%f",&altura);
	printf("Digite o peso: ");
	scanf("%f",&peso);
	if(sexo == 'F') {
		peso_ideal = (62.1 * altura) - 44.7;
		if(peso < peso_ideal) {
			printf("Peso abaixo do ideal");
		} else if(peso > peso_ideal) {
			printf("Peso acima do ideal");
		} else {
			printf("Peso normal");
		}
	} else {
		peso_ideal = (72.7 * altura) - 58;
		if(peso < peso_ideal) {
			printf("Peso abaixo do ideal");
		} else if(peso > peso_ideal) {
			printf("Peso acima do ideal");
		} else {
			printf("Peso normal");
		}
	}
	diferenca = fabs(peso - peso_ideal);
	printf("\nDiferenca entre o peso e o peso ideal: %.2f\n", diferenca);

	system("pause");
	return 0;
}
