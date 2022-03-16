#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	char sexo;
	int avaliacao, homens = 0, mulheres = 0, homens1 = 0, homens2 = 0, homens3 = 0, homens4 = 0,
		mulheres1 = 0, mulheres2 = 0, mulheres3 = 0, mulheres4 = 0;
	for(int contador = 1; contador <= 5; contador++) {
		do {
			printf("Sexo do %io. participante: ", contador);
			scanf(" %c",&sexo);
			sexo = toupper(sexo);
			if(sexo != 'F' && sexo != 'M') {
				printf("Apenas sao aceitos os sexos feminino (F) e masculino (M)\n");
			}
		} while(sexo != 'F' && sexo != 'M');
		do {
			printf("Avaliacao do %io. participante: ", contador);
			scanf("%i",&avaliacao);
			if(avaliacao < 1 || avaliacao > 4) {
				printf("Digite um valor valido entre 1 e 4");
			}
		} while(avaliacao < 1 || avaliacao > 4);
		if(sexo == 'M') {
			homens++;
			switch(avaliacao) {
				case 1:
					homens1++;
					break;
				case 2:
					homens2++;
					break;
				case 3:
					homens3++;
					break;
				case 4:
					homens4++;
					break;
			}
		} else {
			mulheres++;
			switch(avaliacao) {
				case 1:
					mulheres1++;
					break;
				case 2:
					mulheres2++;
					break;
				case 3:
					mulheres3++;
					break;
				case 4:
					mulheres4++;
					break;
			}
		}
	}
	printf("O percentual de avaliacoes \"otimo\" e \"bom\" foi de %.2f%%\n", (float) (homens1 + homens2 + mulheres1 + mulheres2) / 5 * 100);
	printf("O percentual de avaliacoes \"regular\" e \"ruim\": %.2f%%\n", (float) (homens3 + homens4 + mulheres3 + mulheres4) / 5 * 100);
	printf("O percentual do pessoas do sexo feminino e masculino, respectivamente, foi de %.2f%% e %.2f%%\n", (float) homens / 5 * 100, (float) mulheres / 5 * 100);
	printf("A quantidade de homens que avaliaram o cardapio como \"otimo\" foi de %i\n", homens1);

	system("pause");
	return 0;
}
