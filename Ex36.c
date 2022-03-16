#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int idade;
	do {
		printf("Digite a idade do nadador: ");
		if(idade < 5) {
			printf("A idade minima deve ser 5 \n");
		}
	} while(idade < 5);
	scanf("%i",&idade);
	if(idade >= 5 && idade <= 7) {
		printf("Categoria: Infantil A\n");
	} 
	else if(idade > 7 && idade <= 10) {
		printf("Categoria: Infantil B\n");
	} 
	else if(idade > 10 && idade <= 13) {
		printf("Categoria: Infanto juvenil\n");
	} 
	else if(idade > 13 && idade <= 17) {
		printf("Categoria: Juvenil\n");
	} else {
		printf("Categoria: Senior\n");
	}

	system("pause");
	return 0;
}
