#include <stdio.h>

int main (){
	
	//OPERAÇÕES MATEMÁTICAS
	// Integrando váriaveis
	int A, B, soma, subtr, mult;
	float divis;
	
	// Entrada de dados
	printf("Digite o primeiro valor: ");
	scanf("%d", &A);
	printf("Digite o segundo valor: ");
	scanf("%d", &B);
	printf("\n");
	
	// Calculos: soma, subtração, multiplicação e divisão 
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = (float) A / B;
	
	// Print dos resultados
	printf("===========\n");
	printf("Resultados:\n");
	printf("===========\n");
	printf("\n");
	
	printf("Soma: %d\n", soma);
	printf("Subtracao: %d\n", subtr);
	printf("Multiplicacao: %d\n", mult);
	printf("Divisao: %.2f\n", divis);
	printf("\n");
	
	printf("=============\n");
	printf("ARITIMETRICA:\n");
	printf("=============\n");
	printf("\n");
	
	// OPERAÇÕES ARITIMÉTRICAS
	// Integrando variáveis
	int dado = 10;
	printf ("Dado antes do incremento: %d\n", dado);
	
	dado++;
	printf("Depois do incremento: %d\n", dado);
	
	dado--;
	printf("Depois do decremento: %d\n", dado);
	
	dado += 3;
	printf("Depois do incremento de 3 unidade: %d\n", dado);
	
	return 0;

}

