#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int codigo, candidato1 = 0, candidato2 = 0, nulos = 0, branco = 0, total_votos=0;
	while(1) {
		do {
			printf("Digite o codigo: ");
			scanf("%i",&codigo);
			if(codigo < 0 || codigo > 4) {
				printf("Digite um codigo valido\n");
			}
		} while(codigo < 0 || codigo > 4);
		if(codigo == 0) {
			break;
		}
		switch(codigo) {
			case 1:
				candidato1 += 1;
				break;
			case 2:
				candidato2 += 1;
				break;
			case 3:
				nulos += 1;
				break;
			case 4:
				branco += 1;
				break;
		}
		total_votos++;
	}
	printf("Percentual de votos do candidato 1: %.2f%%\n", (float) candidato1/ total_votos * 100);
	printf("Percentual de votos do candidato 2: %.2f%%\n", (float) candidato2 / total_votos * 100);
	printf("Percentual de votos nulos: %.2f%%\n", (float) nulos / total_votos * 100);
	printf("Percentual de votos em branco: %.2f%%\n", (float) branco / total_votos * 100);

	system("pause");
	return 0;
}
