#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	float soma, a, b;
	
	printf("soma\n");
	
	printf("informe primeiro produto:");
	scanf("%f", &a);
	
	printf("informe segundo produto:");
	scanf("%f", &b);
	
	soma = a + b;
	
	printf("O resultado da soma entre os dois numeros foi: %f, %f foi: %f\n", a, b, soma);
	
	float subtracao, c;
	
	printf("subtra��o\n");
	
	printf("primeiro produto:");
	scanf("%f", &c);
	
	subtracao= soma - c;
	
	printf("O resultado da subtra��o dos dois numeros %f, %f foi:%f", soma, c, subtracao);
	
	return 0;
}
