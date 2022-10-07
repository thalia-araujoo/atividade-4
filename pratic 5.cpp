#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	int a, b;
	float quociente, resto;
	
	printf("soma\n");
	
	printf("informe primeiro produto:");
	scanf("%f", &a);
	
	printf("informe segundo produto:");
	scanf("%f", &b);
	
	quociente= a/b;
	resto=a%b;
	
	printf("resultado da divisão %i, %i foi: %f resultado do resto foi: %f\n", a, b,quociente, resto);
	
	return 0;
}
