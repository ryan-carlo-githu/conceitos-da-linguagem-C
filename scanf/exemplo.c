#include <stdio.h>

int main (){
	
	char nome[10];
	
	nome[0] = '\0';
	
	printf("Sem nomes registrados: %s.\n", nome[0] ? nome : "(nenhum)");
	
	printf("Digite seu nome: ");
	scanf("%9s", nome);
	
	printf("Seu nome e: %s.\n", nome);
	
	
	int idade = NULL;
	
	printf("Quantos anos voce tem: %d.\n", idade);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Sua idade e: %d anos.\n", idade);
	
	return 0;
}
