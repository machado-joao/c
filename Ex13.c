#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	int segundos, minutos, horas, dias;
	printf("Digite o tempo em segundos: ");
	scanf("%i",&segundos);
	dias = segundos / 86400;
	horas = (segundos % 86400) / 3600;
	minutos = (segundos % 3600) / 60;
	printf("Convertendo temos %i dia(s), %i hora(s) e %i minuto(s)\n", dias, horas, minutos);

	system("pause");
	return 0;
}
