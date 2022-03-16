#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "portuguese");

	float l1, l2, l3;
	printf("Digite o valor do lado 1: ");
	scanf("%f",&l1);
	printf("Digite o valor do lado 2: ");
	scanf("%f",&l2);
	printf("Digite o valor do lado 3: ");
	scanf("%f",&l3);
	if(l1 < (l2 + l3) && l2 < (l1 + l3) && l3 < (l1 + l2)) {
		printf("Os valores informados formam um triangulo ");
		if(l1 == l2 && l2 == l3) {
			printf("equilatero\n");
		} else if(l1 != l2 && l2!=l3 && l1 != l3) {
			printf("escaleno\n");
		} else{
			printf("isosceles\n");
		}
	} else {
		printf("Os valores nao formam um triangulo\n");
	}
	
	system("pause");
	return 0;
}
