#include <stdio.h>

int main (){
	
	// Integrador de nome
	char nome[10];
	
	printf("Qual e seu nome ?\n");
	
	printf("Digite seu nome: ");
	scanf("%9s", nome);
	
	// Verificador de Idade
	int idade=0;
	
	printf("Sua idade atual e: %d.\n", idade);
	
	printf("Insira sua idade: ");
	scanf("%d", &idade);
	
	if (idade > 18) {
	printf("Acesso Liberado \n");
	} else {
	printf("Acesso Negado \n");
	}
	
	return 0;
	
}
