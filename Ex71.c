#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char sexo;
	int idade, soma_idade = 0, homens = 0, mulheres = 0, salario_menor_que_500 = 0;
	float salario, soma_salario = 0;
	for(int contador = 1; contador <= 5; contador++) {
		do {
			printf("Idade do %io. habitante: ", contador);
			scanf("%i",&idade);
			if(idade < 0) {
				printf("Digite um valor positivo \n");
			}
		} while(idade < 0);
		do {
			printf("Sexo do %io. habitante: ", contador);
			scanf(" %c",&sexo);
			sexo = toupper(sexo);
			if(sexo != 'F' && sexo != 'M') {
				printf("Apenas sao aceitos os sexos feminino (F) e masculino (M)\n");
			}
		} while(sexo != 'F' && sexo != 'M');
		do {
			printf("Salario do %io. habitante: ", contador);
			scanf("%f",&salario);
			if(salario < 0) {
				printf("Digite um valor positivo\n");
			}
		} while(salario < 0);
		soma_idade += idade;
		soma_salario += salario;
		switch(sexo) {
			case 'F':
				mulheres++;
				if(salario < 500) {
					salario_menor_que_500++;
				}
				break;
			case 'M':
				homens++;
				break;
		}
	}
	printf("A media de salario do grupo foi de %.2f\n", (float) soma_salario / 10);
	printf("A media de idade do grupo foi de %.1f anos\n", (float) soma_idade / 10);
	printf("O percentual de habitantes homens foi de %.2f%%\n", (float) homens / 10 * 100);
	printf("O pecentual de habitantes mulheres foi de %.2f%%\n", (float) mulheres / 10 * 100);
	printf("A quantidade de mulheres com salario inferior a R$ 500.00 foi de %i\n", salario_menor_que_500);
	
	system("pause");
	return 0;
}
