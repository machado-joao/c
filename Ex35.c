#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char unidade;
	float temperatura, conversao;
	printf("Digite a unidade de temperatura: ");
	scanf(" %c",&unidade);
	unidade = toupper(unidade);
	printf("Digite a temperatura: ");
	scanf("%f",&temperatura);
	switch(unidade) {
		case 'C':
			conversao = (temperatura - 32) / 1.8;
			break;
		case 'F':	
			conversao = (9.0/5) * temperatura + 32;
			break;
		default:
			printf("A unidade digitada nao existe!\n");
	}
	if(unidade == 'C' || unidade == 'F') {
		printf("A conversao deu como resultado o valor %.1f\n", conversao);
	}

	system("pause");
	return 0;
}
