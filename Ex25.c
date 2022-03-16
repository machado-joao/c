#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float peso, peso_planeta;
	int codigo;
	printf("Digite o seu peso no planeta Terra: ");
	scanf("%f",&peso);
	printf("Digite o numero do planeta (1-5): ");
	scanf("%i",&codigo);
	switch(codigo) {
		case 1:
			peso_planeta = peso * 0.37;
			printf("Seu peso em Mercurio seria: %.1f Kg\n", peso_planeta);
			break;
		case 2:
			peso_planeta = peso * 0.88;
			printf("Seu peso em Venus seria: %.1f Kg\n", peso_planeta);
			break;
		case 3:
			peso_planeta = peso * 0.38;
			printf("Seu peso em Marte seria: %.1f Kg\n", peso_planeta);
			break;
		case 4:
			peso_planeta = peso * 2.64;
			printf("Seu peso em Jupiter seria: %.1f Kg\n", peso_planeta);
			break;
		case 5:
			peso_planeta = peso * 1.15;
			printf("Seu peso em Saturno seria: %.1f Kg\n", peso_planeta);
			break;
		default:
			printf("Valor invalido!\n");
	}

	system("pause");
	return 0;
}
