//Recursi�n
#include<stdio.h>
int factorial(int num){
	if (num==0)
		return 1;
	else
		return (factorial(num-1)*num); //(num-1) es como un i++, es nuestro incrementador
}
int main(){
	int numero;
	printf("Ingresa un numero para calcular su factorial: ");
	scanf("%d", &numero);
	printf("\n");
	printf("El factorial de %d es %d\n", numero, factorial(numero));
	return 0;
}
