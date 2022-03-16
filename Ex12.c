#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float fahrenheit, celsius;
	printf("Digite a temperatura em Fahrenheit: ");
	scanf("%f",&fahrenheit);
	celsius = (fahrenheit - 32) / 1.8;
	printf("A temperatura em Celsius vale %.1f\n", celsius);

	system("pause");
	return 0;
}
