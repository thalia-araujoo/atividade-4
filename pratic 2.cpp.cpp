#include <stdio.h>
#include <locale.h>
int main() {
	locale(LC_ALL, "Portuquese_Brazil");
	
	float n1, n2, n3, media;
	
	printf("primeira nota:");
	scanf("%f", &n1);
	
	printf("segunda nota:");
	scanf("%f", &n2);
	
	printf("terceira nota:");
	scanf("%f", &n3);
	
	media = n1 + n2 + n3 /3;
	
	printf("O valor calculado entre os números %f, %F e %f foi:%f", n1, n2, n3, media);
	
	return 0;
}
