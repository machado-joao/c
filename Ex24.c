#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char periodo;
	printf("Em qual turno voce estuda (M, V, N)? ");
	scanf(" %c",&periodo);
	periodo = toupper(periodo);
	switch(periodo){
		case 'M':
			printf("Bom dia!\n");
			break;
		case 'V':
			printf("Boa tarde!\n");
			break;
		case 'N':
			printf("Boa noite!\n");
			break;
		default:
			printf("Valor invalido!\n");
	}

	system("pause");
	return 0;
}
