#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float nota1, nota2, nota3, media;
	for(int contador = 1; contador <= 5; contador++) {
		printf("Notas do %io. aluno: ", contador);
		scanf("%f %f %f",&nota1,&nota2,&nota3);
		media = (nota1 + nota2 + nota3) / 3;
		printf("A media do %io. aluno foi %.2f\n", contador, media);
	}
	
	system("pause");
	return 0;
}
