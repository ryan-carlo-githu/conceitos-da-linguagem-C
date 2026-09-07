#include <stdio.h>

	// ESTUDO DE OPERADORES RELACIONAIS
	// Comando if: se a condição é verdadeira, o bloco é executado, senão, é ignorao.
	
	//    SINTAXE:
	//    if (<condicao>){
	//	      <bloco_de_comandos
	//    }
	
	// OPERADORES
	// Maior = >
	// Maior ou igual = >=
	// Menor = <
	// Menor ou igual: <=
	// Igual = ==
	// Diferente: !=

int main (){
	
	// Inserção de variáveis
	float m;
	
	// Entrada de dados
	printf("Insira a nota:");
	scanf("%f", &m);
	
	// Verificação de condição
	if(m >= 7.0){
		// Retorno caso a condição seja verdadeira
		printf("Aprovado(a)!\n");
	}
		
	return 0;
		
}
