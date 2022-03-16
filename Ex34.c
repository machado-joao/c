#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float nota;
	int faltas;
	do {
		printf("Digite a nota do aluno: ");
		scanf("%f",&nota);
		if(nota < 0 || nota > 10) {
			printf("Digite um valor no intervalo [0, 10]\n");
		}
	} while(nota < 0 || nota > 10);
	printf("Digite o numero de faltas do aluno: ");
	scanf("%i",&faltas);
	if(nota >= 9 && nota <= 10) {
		if(faltas <= 10) {
			printf("Conceito: A\n");
		} else {
			printf("Conceito: B\n");
		}
	} else if(nota >= 7.5 && nota <= 8.9) {
		if(faltas <= 10) {
			printf("Conceito: B\n");
		} else {
			printf("Conceito: C\n");
		}
	} else if(nota >= 5 && nota <= 7.4) {
		if(faltas <= 10) {
			printf("Conceito: C\n");
		} else {
			printf("Conceito: D\n");
		}
	} else if(nota >= 4 && nota <= 4.9) {
		if(faltas <= 10) {
			printf("Conceito: D\n");
		} else {
			printf("Conceito: E\n");
		}
	} else {
		printf("Conceito: E\n");
	}
	
	system("pause");
	return 0;
}
