#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuquese_Brazil");
	
	float n1, n2, media;
	
	printf("primeira nota:");
	scanf("%f", &n1);
	
	printf("segunda nota:");
	scanf("%f", &n2);
	
	media = (n1 + n2) /2;
	
	printf("O valor calculado entre os números %f, %F foi:%f", n1, n2, media);
	
	return 0;
}
