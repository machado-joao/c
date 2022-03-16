#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float peso, altura, imc;
	printf("Digite o peso: ");
	scanf("%f",&peso);
	printf("Digite a altura: ");
	scanf("%f",&altura);
	imc = peso / pow(altura, 2); 
	if(imc < 20) {
		printf("Abaixo do peso ideal\n");
	} else if(imc >= 20 && imc <= 25) {
		printf("Peso normal\n");
	} else if(imc > 25 && imc <= 30) {
		printf("Excesso de peso\n");
	} else if(imc > 30 && imc <= 35) {
		printf("Obesidade\n");
	} else {
		printf("Obesidade morbida\n");
	}

	system("pause");
	return 0;
}
