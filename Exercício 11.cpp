#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(){
	double raio, volume, area;
	printf("Digite o valor do Raio: ");
	scanf("%lf", &raio);
	volume = (4.0/3) * PI * raio * raio * raio;
	area = 4 * PI * raio * raio;
	printf("Valor do volume: %.5lf\n", volume);
	printf("Valor da area: %.5lf", area);
}
