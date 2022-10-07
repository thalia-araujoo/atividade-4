#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	float media, soma, a, b, c, d;
	
	printf("Multiplicação\n");
	
	printf("informe primeiro produto:");
	scanf("%f", &a);
	
	printf("informe segundo produto:");
	scanf("%f", &b);
	
	printf("informe terceiro produto:");
	scanf("%f", &c);
	
	printf("informe quarto produto:");
	scanf("%f", &d);
	
	media = (a*b*c*d)/1;
	
	printf("O valor calculado entre os produtos %f, %f, %f e %f foi:%f", a, b, c, d, media);
	
	return 0;
}
