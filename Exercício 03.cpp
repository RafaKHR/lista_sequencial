#include<stdio.h>
#include<stdbool.h>
#define zero 0
int main(){
	int n1, boleano;
	float n2;
	double n3;
	char letra, string[100];
	
	printf("Digite o numero inteiro: ");
	scanf("%d", &n1);
	printf("Digite os dois numeros reais: ");
	scanf("%f%lf", &n2,&n3);
		fflush(stdin);
	printf("Digite o caracter desejado: ");
	scanf("%c", &letra);
		fflush(stdin);
	printf("Digite a frase desejada: ");
	fgets(string, 100, stdin);
	printf("Digite o numero desejado para saber se ele eh positivo ou negativo: ");
	scanf("%d", &boleano);
	printf("Numero inteiro: %d\n", n1);
	printf("Numeros reais:\n%f\n%fl\n", n2, n3);
	printf("Letra: %c\n", letra);
	printf("String: %s", string);
	if (boleano > zero)
	printf("Logico: Positivo");
	else printf("Logico: Negativo");
}
